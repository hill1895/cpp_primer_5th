#include <iostream>
#include <string>
using namespace std;

template<typename T> T* begin(const T &a)
{
  return a;
}

template<typename T> T* end(const T &a)
{
  return a+sizeof(a)/sizeof(T);
}


int main()
{
  int a[6]={1,2,3,4,5,6};
  char b[5]={'a','v','f','w','g'};
  string c[3]={"2rfsaf","fsdgh","uyufr"};

  cout<<*begin(a)<<" "<<end(a)-begin(a)<<endl;
  cout<<*begin(b)<<" "<<end(b)-begin(b)<<endl;
  cout<<*begin(c)<<" "<<end(c)-begin(c)<<endl;

}
