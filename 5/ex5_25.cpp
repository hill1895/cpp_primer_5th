#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
  int a,b;
  while(cin>>a>>b)
  {
    try
    {
      if(b==0)
        throw runtime_error("divisor is 0");
      cout<<"a/b="<<static_cast<double>(a)/b<<endl;
      cout<<"Enter two integers: ";
    }catch(runtime_error err)
    {
      cout<<err.what()<<endl;
      cout<<"Try again. Enter two correct integers: ";
    }
  }
}

