#include <iostream>
using std::cout;

int main()
{
  int i=50;
  int sum=0;

  while(i<=100)
  {
    sum+=i;
    i++;
  }
  
  cout<<"The sum from 50 to 100 is "<<sum<<"\n";
}
