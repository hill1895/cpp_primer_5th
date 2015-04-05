#include <iostream>
using namespace std;

struct Test
{
  Test()=default;
  int operator()(bool a,int b,int c)
  {
    if(a)
      return b;
    else 
      return c;
  }

};


int main()
{
  Test test;
  int m=test(0,4,6);
  int n=test(1,5,3);
  cout<<m<<" "<<n<<endl;
}

