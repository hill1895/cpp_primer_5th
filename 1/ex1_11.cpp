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

  i=min;

  while(i<=max)
  {
    std::cout<<i<<" ";
    i++;
  }
  std::cout<<"\n";
}
