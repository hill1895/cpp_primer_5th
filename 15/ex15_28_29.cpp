#include <iostream>
#include <vector>
#include <memory>
#include "Quote.h"
using namespace std;

int main()
{
  vector<Quote> basket;

  basket.push_back(Quote("feg-421",40));
  basket.push_back(Bulk_quote("fsgr-<F3>423",40,10,0.25));

  vector<shared_ptr<Quote>> bk;
  bk.push_back(make_shared<Quote>("fsgdg",40));
  bk.push_back(make_shared<Bulk_quote>("fsdg-24-325",40,10,0.25));

  double sum1=0.0,sum2=0.0;

  for(const auto& i:basket)
    sum1+=i.net_price(30);
  for(const auto& i:bk)
    sum2+=i->net_price(30);


  cout<<sum1<<" "<<sum2<<endl;
}



  
