#include <iostream>
#include <string>
using namespace std;

template<typename T,typename ... Args>
void foo(const T &t,const Args& ... rest)
{
  cout<<sizeof...(Args)<<" \t"<<sizeof...(rest)<<endl;
}

int main()
{
  int i=0;double d=3.14;string s="How now brown cow";
  foo(i,s,42,d);
  foo(s,42,"hi");
  foo(d,s);
  foo("hi");
}
