#include <iostream>
#include <string>
using namespace std;

template<typename T> int compare(const T& v1,const T& v2)
{
  if(v1<v2) return 1;
  if(v1>v2) return -1;
  return 0;
}

int main()
{
  cout<<compare(1,5)<<endl;
  cout<<compare(5.3,3.1)<<endl;
  cout<<compare(string("fdsgrg"),string("afedgweg"))<<endl;
}
