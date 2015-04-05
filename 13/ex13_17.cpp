#include <iostream>
using namespace std;

struct numbered
{
  numbered()
  {
    static int unique=0;
    mysn=unique++;
  }
  numbered(const numbered & n)
  {
    mysn=n.mysn+1;
  }
  int mysn;
  

};

void f(numbered s)
{
  cout<<s.mysn<<endl;
}

void f1(const numbered &s)
{
  cout<<s.mysn<<endl;
}

int main()
{
  numbered a,b=a,c=b;
  f(a);f(b);f(c);
  f1(a);f1(b);f1(c);//one less copy
}

