#include <iostream>
using namespace std;

int main()
{
  int a=10;

  auto b=[&a]()->bool
  {if (a==0) return true;
  else {a--;return false;}};

  while(!b())
    b();

  cout<<a<<endl;

}
