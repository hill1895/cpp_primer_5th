#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int a[10],b[10];
  for(size_t i=0;i<10;i++)
    a[i]=i;

  cout<<"copy a[10] to b[10]"<<endl;

  for(size_t i=0;i<10;i++)
  {
    b[i]=a[i];
    cout<<b[i]<<" ";
  }

  cout<<endl;

  cout<<"using vector: "<<endl;

  vector<int> ivec(10,0);
  for(vector<int>::iterator it=ivec.begin();it!=ivec.end();it++)
  {
    *it=it-ivec.begin();
  }

  for(vector<int>::iterator it=ivec.begin();it!=ivec.end();it++)
    cout<<*it<<" ";

  cout<<endl;

}
