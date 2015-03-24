#include <iostream>
using namespace std;

int cmp(int,int*);

int main()
{
  int a,b;
  cout<<"Enter two integers: ";
  cin>>a>>b;

  cout<<"The bigger integer is  "<<cmp(a,&b)<<endl;

}

int cmp(int a,int *b)
{
  return a>=(*b)?a:(*b);
}
