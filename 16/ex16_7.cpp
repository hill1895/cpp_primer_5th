#include <iostream>
#include <string>
using namespace std;

template<typename T> constexpr unsigned size_array(const T& a)
{
  return end(a)-begin(a);
}

int main()
{
  int a[5]={1,2,3,4,5};
  char c[4]={'f','w','g','f'};
  string s[3]={"fweg","wfgf","wfweg"};

//  cout<<sizeof(s)/sizeof(string)<<endl;
  cout<<size_array(a)<<endl;
  cout<<size_array(c)<<endl;
  cout<<size_array(s)<<endl;

}
