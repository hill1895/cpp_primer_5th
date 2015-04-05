#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>
class Sales_data;
std::istream &read(std::istream &,Sales_data &);

class Sales_data{
  friend Sales_data add(const Sales_data &,const Sales_data &);
  friend std::istream &read(std::istream &,Sales_data &);
  friend std::ostream &print(std::ostream &,const Sales_data &);
  friend Sales_data operator+(const Sales_data&,const Sales_data&);
  friend std::istream &operator>>(std::istream &,Sales_data &);
  friend std::ostream &operator<<(std::ostream &,const Sales_data &);
  friend bool operator==(const Sales_data &,const Sales_data &);
  friend bool operator!=(const Sales_data &,const Sales_data &);

private:
  std::string bookNo;
  unsigned units_sold=0;
  double revenue=0.0;
  inline double avg_price() const;
public:
  Sales_data()=default;
  Sales_data(const std::string &s):bookNo(s){}
  Sales_data(const std::string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(p*n){}
  Sales_data(std::istream &is){read(is,*this);}
  Sales_data &operator=(const Sales_data &);
  Sales_data &operator=(const std::string &);

  std::string isbn()const {return bookNo;}
  Sales_data &combine(const Sales_data &);
  Sales_data &operator+=(const Sales_data &);

  explicit operator std::string()const{return bookNo;}
  explicit operator double()const{return revenue;}

};

Sales_data &Sales_data::operator=(const Sales_data &item)
{
  bookNo=item.bookNo;
  units_sold=item.units_sold;
  revenue=item.revenue;
  return *this;
}

Sales_data &Sales_data::operator=(const std::string &s)
{
  *this=Sales_data(s); 
  return *this;
}

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
  units_sold+=rhs.units_sold;
  revenue+=rhs.revenue;
  return *this;
}

Sales_data& Sales_data::operator+=(const Sales_data& rhs)
{
  units_sold+=rhs.units_sold;
  revenue+=rhs.revenue;
  return *this;
}

double Sales_data::avg_price()const
{
  return units_sold?revenue/units_sold:0;
}


Sales_data add(const Sales_data &lhs,const Sales_data &rhs)
{
  Sales_data sum=lhs;
  sum.combine(rhs);
  return sum;
}

Sales_data operator+(const Sales_data &lhs,const Sales_data &rhs)
{
  Sales_data sum=lhs;
  sum+=rhs;
  return sum;
}


std::istream &read(std::istream &is,Sales_data &item)
{
  double price=0.0;
  is>>item.bookNo>>item.units_sold>>price;
  if(is)
    item.revenue=price*item.units_sold;
  else
    item=Sales_data();
  return is;
}

std::istream &operator>>(std::istream &is,Sales_data &item)
{
  double price=0.0;
  is>>item.bookNo>>item.units_sold>>price;
  if(is)
    item.revenue=price*item.units_sold;
  else
    item=Sales_data();
  return is;
}

std::ostream &print(std::ostream &os,const Sales_data &item)
{
  os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue;
  return os;
}

std::ostream &operator<<(std::ostream &os,const Sales_data &item)
{
  os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue;
  return os;
}

bool operator==(const Sales_data &lhs,const Sales_data &rhs)
{
  return lhs.isbn()==rhs.isbn() && lhs.units_sold==rhs.units_sold && lhs.revenue==rhs.revenue;
}

bool operator!=(const Sales_data &lhs,const Sales_data &rhs)
{
  return !(lhs==rhs);
}



#endif
