#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int a[]={1,2,3,4,5};
  vector<int> vec(begin(a),end(a));//use two methods
  vector<int> vec1(a,a+5);

  for(auto i:vec)
    cout<<i<<" ";
  cout<<endl;

  for(auto i:vec1)
    cout<<i<<" ";
  cout<<endl;
}

