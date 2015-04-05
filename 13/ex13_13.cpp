#include <iostream>
using namespace std;

struct X
{
  X(){cout<<"X()"<<endl;}
  X(int a):x(a){cout<<"X(int)"<<endl;}
  X(const X& x1):x(x1.x){cout<<"X(const X&)"<<endl;}
  X operator=(const X& x1){x=x1.x;cout<<"X="<<endl;return *this;}//same with copy constructor
  ~X(){cout<<"~X()"<<endl;}

  int x=0;
};

int main()
{
  X x1;
  X x2(2);
  X x3(x2);
  X x4=x2;
}
