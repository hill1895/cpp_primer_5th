#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec;
  int temp;

  while(cin>>temp)
  {
    vec.push_back(temp);
    cout<<"Size: "<<vec.size()<<endl;
    cout<<"Capacity: "<<vec.capacity()<<endl;
  }
}
