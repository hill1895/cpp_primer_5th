#include <iostream>
using namespace std;

void f();
void f(int);
void f(int,int);
void f(double,double=3.14);

int main()
{
  cout<<"f(2.56,42): ";
  f(2.56,42);//error
  cout<<"f(42): ";
  f(42);
  cout<<"f(42,0): ";
  f(42,0);
  cout<<"f(2.56,3.14): ";
  f(2.56,3.14);
}

void f()
{
  cout<<"void"<<endl;
}
void f(int)
{
  cout<<"int"<<endl;
}
void f(int,int)
{
  cout<<"int,int"<<endl;
}
void f(double,double)
{
  cout<<"double,double=3.14"<<endl;
}

