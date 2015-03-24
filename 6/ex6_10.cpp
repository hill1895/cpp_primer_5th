#include <iostream>
using namespace std;

void swap(int &a,int &b);
void swap1(int *a,int *b);

int main()
{
  int i=10,j=20;
  int m=52,n=66;
  cout<<"Before call the function: "<<endl;
  cout<<"i="<<i<<"\tj="<<j<<endl;
  cout<<"m="<<m<<"\tn="<<n<<endl;

  swap(i,j);
  swap1(&m,&n);

  cout<<"After call the function: "<<endl;
  cout<<"i="<<i<<"\tj="<<j<<endl;
  cout<<"m="<<m<<"\tn="<<n<<endl;

}

void swap(int &a,int &b)//using reference
{
  int temp;
  temp=a;
  a=b;
  b=temp;
}

void swap1(int *a,int *b)//using poiter is also OK
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

