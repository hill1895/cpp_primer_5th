#include <iostream>
using namespace std;

int main()
{
  const size_t A_size=4;
  int a[A_size],b[A_size];//assuming arrays with same size

  cout<<"Enter Array A: ";
  for(size_t i=0;i<A_size;i++)
    cin>>a[i];
  cout<<"Enter Array B: ";
  for(size_t i=0;i<A_size;i++)
    cin>>b[i];

  int flag=1;

  for(size_t i=0;i<A_size;i++)
  {
    if(a[i]!=b[i])
    {
      flag=0;
      break;
    }
  }

  if(flag==1)
    cout<<"The two arrays are equal."<<endl;
  else
    cout<<"The two arrays are not equal."<<endl;
}
