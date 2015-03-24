#include <iostream>

int main()
{
  int a,b;
  int max,min;
  int i;
  std::cout<<"Enter two numbers: ";
  std::cin>>a>>b;

  max=a>b?a:b;
  min=a<b?a:b;

  for(int i=min;i<=max;i++)
    std::cout<<i<<" ";

  std::cout<<"\n";
}
