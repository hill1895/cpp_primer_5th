#ifndef QUOTE_H
#define QUOTE_H
#include <iostream>
#include <string>
using std::string;using std::ostream;using std::endl;

class Quote
{
  friend double print_total(ostream&,const Quote &,size_t );
public:
  Quote()=default;
  Quote(const string &book,double sales_price):bookNo(book),price(sales_price){};
  string isbn() const {return bookNo;}
  virtual double net_price(size_t n) const
  { return n*price;}
  virtual ~Quote()=default;
private:
  string bookNo;
protected:
  double price=0.0;
};

class Bulk_quote : public Quote
{
public:
  Bulk_quote()=default;
  Bulk_quote(const string& book,double p,size_t min,double disc):Quote(book,p),min_qty(min),discount(disc){}
  double net_price(size_t) const override;
private:
  size_t min_qty=0;
  double discount=0.0;
};

class Disc_quote : public Quote
{
public:
  Disc_quote()=default;
  Disc_quote(const string& book,double p,size_t lim,double disc):Quote(book,p),limits(lim),discount(disc){}
  double net_price(size_t) const override;
private:
  size_t limits=0;
  double discount=0.0;
};

//class Quote
double print_total(ostream& os,const Quote& quote,size_t n)
{
  double ret=quote.net_price(n);
  os<<"ISBN: "<<quote.isbn()<<" #sold: "<<n<<" total due: "<<ret<<endl;
  return ret;
}

//class Bulk_quote

double Bulk_quote::net_price(size_t n) const 
{
  if(n>=min_qty)
    return n*(1-discount)*price;
  else
    return n*price;
}

//class Disc_quote
double Disc_quote::net_price(size_t n) const
{
  if(n>=limits)
    return ((n-limits)*price+limits*price*discount);
  else
    return n*limits*price;
}

#endif
