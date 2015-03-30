#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> vec{1,2,3,4,5,6,7,8,9,1,1,2,3,3,4,5,6,75,4,3,3,2,5,6,4,3,2,6,3,2,5,1,1,1,3,5};

  cout<<"There are "<<count(vec.cbegin(),vec.cend(),1)<<" '1' in the vector."<<endl;
  cout<<"There are "<<count(vec.cbegin(),vec.cend(),2)<<" '2' in the vector."<<endl;
  cout<<"There are "<<count(vec.cbegin(),vec.cend(),3)<<" '3' in the vector."<<endl;
  cout<<"There are "<<count(vec.cbegin(),vec.cend(),100)<<" '100' in the vector."<<endl;

}
  
  
