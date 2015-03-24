#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec={1,2,3,4,5,6,7,8,10,11};

  for(vector<int>::iterator it=vec.begin();it!=vec.end();++it)
    *it=((*it)%2)?(*it)*2:(*it);

  for(vector<int>::iterator it=vec.begin();it!=vec.end();++it)
    cout<<*it<<" ";

  cout<<endl;

}
  
  
