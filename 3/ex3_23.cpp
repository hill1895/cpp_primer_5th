#include <iostream>
#include <vector>
using namespace std;

int main()
{

  vector<int> ivec{1,2,3,4,5,6,7,8,9,10};

  for(vector<int>::iterator it=ivec.begin();it!=ivec.end();it++)
  {
    (*it)*=2;
    cout<<*it<<" ";
  }

  cout<<endl;

}
