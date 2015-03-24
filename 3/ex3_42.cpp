#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec{1,2,3,4,5};
  int a[5];

  for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    a[it-vec.begin()]=*it;

  for(size_t i=0;i<5;i++)
    cout<<a[i]<<" ";
  cout<<endl;

}

