#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
  forward_list<int> f_list{0,1,2,3,4,5,6,7,8,9,10,11};

  forward_list<int>::iterator prev=f_list.before_begin(),curr=f_list.begin();

  while(curr!=f_list.end())
  {
    if((*curr)%2)
      
      curr=f_list.erase_after(prev);
    else
    {
      prev=curr++;
      
    }
  }

  for(auto i:f_list)
    cout<<i<<" ";

  cout<<endl;

}

