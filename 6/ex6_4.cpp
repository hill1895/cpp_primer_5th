#include <iostream>
using namespace std;

int fact(int);

int main()
{
  int i;
  int result;
  cout<<"Enter a integer: ";
  cin>>i;
  result=fact(i);
  cout<<"The fact of "<<i<<" is "<<result<<endl;

}

int fact(int val)
{
  int ret=1;
  while(val>1)
    ret*=val--;
  return ret;
}


