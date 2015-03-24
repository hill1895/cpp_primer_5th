#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int temp;
  vector<int> num;

  while(cin>>temp)
    num.push_back(temp);

  for(auto i:num)
    cout<<i<<"  ";
  cout<<endl;
}
