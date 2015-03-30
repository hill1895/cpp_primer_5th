#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
  vector<int> vec1{1,2,3,4,5,6,7,8,9,10};
  vector<double> vec2{4.5,23.5,65.4,3.3};

  cout<<" vector<int> "<<accumulate(vec1.cbegin(),vec1.cend(),0)<<endl;
  cout<<" vector<double> "<<accumulate(vec2.cbegin(),vec2.cend(),0)<<endl;
  cout<<" vector<double> "<<accumulate(vec2.cbegin(),vec2.cend(),0.0)<<endl;
 
}

