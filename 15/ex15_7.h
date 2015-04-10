#ifndef EX_15_7_H
#define EX_15_7_H
#include <iostream>
using std::size_t;

class Sales
{
public:
  Sales()=default;
  Sales(size_t n,double p):num(n),price(p){}
  virtual double total_sales() const
  {return num*price;}
protected:
  size_t num=0;
  double price=0.0;
};

class Disc_sales:public Sales
{
public:
  Disc_sales()=default;
  Disc_sales(size_t n,double p,size_t lim,double disc):Sales(n,p),limits(lim),discount(disc){}
  double total_sales() const override
  {
    if(num>limits)
      return ((num-limits)*price+limits*price*discount);
    else
      return num*price*discount;

  }
private:
  size_t limits=0;
  double discount=0.0;
};

#endif
