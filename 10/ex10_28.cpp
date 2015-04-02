#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
  vector<int> vec{1,2,3,4,5,6,7,8,9};
  vector<int> vec1,vec2;
  list<int> lst;

  copy(vec.begin(),vec.end(),inserter(vec1,vec1.begin()));
  copy(vec.begin(),vec.end(),back_inserter(vec2));
  copy(vec.begin(),vec.end(),front_inserter(lst));

  for (auto i:vec1)
    cout<<i<<" ";

  cout<<endl;

  for (auto i:vec2)
    cout<<i<<" ";

  cout<<endl;

  for (auto i:lst)
    cout<<i<<" ";

  cout<<endl;

}



  
