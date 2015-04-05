#include <iostream>
#include <functional>
#include <map>
using namespace std;

int main()
{
  map<string,function<int(int,int)>>  binops={
  {"+",plus<int>()},
  {"-",minus<int>()},
  {"*",multiplies<int>()},
  {"/",divides<int>()},
  {"%",modulus<int>()}};

  cout<<binops["+"](10,5)<<endl;
  cout<<binops["-"](10,5)<<endl;
  cout<<binops["*"](10,5)<<endl;
  cout<<binops["/"](10,1)<<endl;
  cout<<binops["%"](10,3)<<endl;
}

