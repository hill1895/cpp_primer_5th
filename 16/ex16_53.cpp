#include <iostream>
#include <string>
using namespace std;

template <typename T>
ostream &print(ostream& os,const T& t)
{
  return os<<t;
}

template <typename T,typename ... Args>
ostream &print(ostream& os,const T& t,const Args&...rest)
{
  os<<t<<",";
  return print(os,rest...);
}

int main()
{
  int i=5;string s="hello world";double d=3.14;
  print(cout,i,s,d,"gdh")<<endl;
  print(cout,s,"gdwt")<<endl;
  print(cout,s,42)<<endl;
}

