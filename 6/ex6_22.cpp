#include <iostream>
using namespace std;

void ptSwp(int *&,int *&);

int main()
{
  int a,b;
  int *p=&a,*q=&b;
  cout<<"Enter two integers: ";
  cin>>a>>b;

  cout<<"a="<<a<<"\tb="<<b<<endl;
  cout<<"*p="<<*p<<"\t*q="<<*q<<endl;
  cout<<"p="<<p<<"\tq="<<q<<endl;

  ptSwp(p,q);

  cout<<"a="<<a<<"\tb="<<b<<endl;
  cout<<"*p="<<*p<<"\t*q="<<*q<<endl;
  cout<<"p="<<p<<"\tq="<<q<<endl;

}

void ptSwp(int *&a,int *&b)//To swap, reference must be used!
{
  int *temp=a;
  a=b;
  b=temp;
}
  
