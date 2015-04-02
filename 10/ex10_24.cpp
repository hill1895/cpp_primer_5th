#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &,string::size_type);

int main()
{
  string temp;
  vector<int> cnt{1,2,3,4,5,6,7,8,9,10,11};

  cin>>temp;

  auto it=find_if(cnt.cbegin(),cnt.cend(),bind(check_size,temp,_1));
  
  cout<<"the "<<(it-cnt.cbegin())+1<<"th in the vector is the first element larger than the size of the string."<<endl;

}

bool check_size(const string &s,string::size_type sz)
{
  return s.size()<sz;
}




