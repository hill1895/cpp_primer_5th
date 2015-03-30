#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main()
{
  list<int> ls{1,2,3,4,5,6,7,8,9,10,11,12};
  deque<int> even,odd;

  for(list<int>::const_iterator it=ls.cbegin();it!=ls.cend();it++)
  {
    if((*it)%2)
      odd.push_back(*it);
    else
      even.push_back(*it);
  }

  cout<<"odd: "<<endl;
  for(auto &i:odd)
    cout<<i<<" ";
  cout<<endl;
  cout<<"even: "<<endl;

  for(auto &i:even)
    cout<<i<<" ";
  cout<<endl;

}
