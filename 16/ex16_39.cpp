#include <iostream>
#include <string>
using namespace std;

template <typename T> int compare(const T& a,const T& b)
{
  if(a>b) return 1;
  if(a<b) return -1;
  return 0;
}

int main()
{
  cout<<compare<string>("a","a")<<endl;
}
