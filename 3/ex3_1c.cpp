#include <iostream>
using std::cout;
using std::cin;

int main()
{
  int a,b;
  int max,min;
  int i;
  cout<<"Enter two numbers: ";
  cin>>a>>b;

  max=a>b?a:b;
  min=a<b?a:b;

  i=min;

  while(i<=max)
  {
    cout<<i<<" ";
    i++;
  }
  cout<<"\n";
}
