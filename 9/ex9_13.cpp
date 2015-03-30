#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
  list<int> list1{1,2,3,4,5};
  vector<int> vec1{6,7,8,9,10};
  vector<double> vec_d1(list1.begin(),list1.end());
  vector<double> vec_d2(vec1.begin(),vec1.end());

  cout<<"vec_d1: ";
  for(auto &i:vec_d1)
    cout<<i<<" ";

  cout<<endl;

  cout<<"vec_d2: ";
  for(auto &i:vec_d2)
    cout<<i<<" ";

  cout<<endl;
    
}
