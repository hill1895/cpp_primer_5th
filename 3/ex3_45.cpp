#include <iostream>
using namespace std;

int main()
{
  int ia[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

  cout<<"Version1: "<<endl;

  for(auto (&row):ia)
  {
    for(auto i:row)
      cout<<i<<" ";
    cout<<endl;
  }

  cout<<"Version2:"<<endl;

  for(auto i=0;i<4;i++)
  {
    for(auto j=0;j<4;j++)
      cout<<ia[i][j]<<" ";
    cout<<endl;
  }

  cout<<"Version3: "<<endl;

  for(auto (*p)=ia;p!=ia+4;p++)
  {
    for(auto *q=*p;q!=*p+4;q++)
      cout<<*q<<" ";
    cout<<endl;
  }

}
