#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
  vector<int> vec{1,1,2,2,2,3,4,4,4,5,5,5,6,7,8,9,9,8,7,6,8,5,4,10};
  list<int> lst;

  unique_copy(vec.begin(),vec.end(),inserter(lst,lst.begin()));

  for(auto i:lst)
    cout<<i<<" ";

  cout<<endl;

}


