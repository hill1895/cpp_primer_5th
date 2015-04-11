#ifndef QUOTE_H
#define QUOTE_H
#include <iostream>
#include <string>
using std::string;using std::ostream;using std::endl;using std::cout;

class Quote
{
  friend double print_total(ostream&,const Quote &,size_t );
public:
  Quote()=default;
  Quote(const string &book,double sales_price):bookNo(book),price(sales_price){};
  Quote(const Quote& qt)
  {
   // cout<<"Quote copy"<<endl;
    bookNo=qt.bookNo;
    price=qt.price;
  }
  Quote &operator=(const Quote& qt)
  {
   // cout<<"Quote="<<endl;
    bookNo=qt.bookNo;
    price=qt.price;
    return *this;
  }
  string isbn() const {return bookNo;}

  virtual Quote* clone() const &{return new Quote(*this);}
  virtual Quote* clone() && {return new Quote(std::move(*this));}

  virtual double net_price(size_t n) const
  { return n*price;}
  //virtual void debug()const;
  virtual ~Quote()=default;
private:
  string bookNo;
protected:
  double price=0.0;
};


class Disc_quote : public Quote
{
public:
  Disc_quote()=default;
  Disc_quote(const string& book,double p,size_t lim,double disc):Quote(book,p),limits(lim),discount(disc){}
  Disc_quote(const Disc_quote& disc):Quote(disc)
  {
   // cout<<"Disc_quote copy"<<endl;
    limits=disc.limits;
    discount=disc.discount;
  }
  Disc_quote &operator=(const Disc_quote& disc)
  {
   // cout<<"Disc_quote ="<<endl;
    Quote::operator=(disc);
    limits=disc.limits;
    discount=disc.discount;
  }
  double net_price(size_t) const=0; 
  //void debug()const override;

//  ~Disc_quote(){cout<<"~Disc_quote()"<<endl;}
protected:
  size_t limits=0;
  double discount=0.0;
};

class Bulk_quote : public Disc_quote
{
public:
  Bulk_quote()=default;
//  Bulk_quote(const string& book,double p,size_t min,double disc):Disc_quote(book,p,min,disc){}
  using Disc_quote::Disc_quote;
  Bulk_quote(const Bulk_quote& bulk):Disc_quote(bulk){} 
  Bulk_quote &operator=(const Bulk_quote& bulk)
  {
  //  cout<<"BUlk_quote ="<<endl;
    Disc_quote::operator=(bulk);
  }
  double net_price(size_t) const override;

  Bulk_quote* clone() const & {return new Bulk_quote(*this);}
  Bulk_quote* clone() && {return new Bulk_quote(std::move(*this));}
  //void debug() const override;

 // ~Bulk_quote(){cout<<"~Bulk_quote()"<<endl;}

};
//class Quote
double print_total(ostream& os,const Quote& quote,size_t n)
{
  double ret=quote.net_price(n);
  os<<"ISBN: "<<quote.isbn()<<" #sold: "<<n<<" total due: "<<ret<<endl;
  return ret;
}

/*void Quote::debug()const
{
  cout<<"Qoute: "<<"\nISBN: "<<isbn()<<" price: "<<price<<endl;
}*/

//class Bulk_quote

double Bulk_quote::net_price(size_t n) const 
{
  if(n>=limits)
    return n*(1-discount)*price;
  else
    return n*price;
}

/*void Bulk_quote::debug()const
{
  cout<<"Bulk_quote: "<<"\nISBN: "<<isbn()<<" price: "<<price<<" min_qty: "<<min_qty<<" discount: "<<discount<<endl;
}*/

//class Disc_quote
double Disc_quote::net_price(size_t n) const
{
  if(n>=limits)
    return ((n-limits)*price+limits*price*discount);
  else
    return n*limits*price;
}




#endif
