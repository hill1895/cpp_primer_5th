#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> vec{1,2,3,4,5,6,7,8,9,10};
  list<int> lst;

  copy(vec.crend()-6,vec.crend()-2,back_inserter(lst));

  for(auto i:lst)
    cout<<i<<" ";

  cout<<endl;

}
