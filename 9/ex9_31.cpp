#include <iostream>
#include <list>
#include <forward_list>
using namespace std;

int main()
{
  list<int> lst{0,1,2,3,4,5,6,7,8,9};
  forward_list<int> flst{0,1,2,3,4,5,6,7,8,9};

  auto it=lst.begin();
  auto prev=flst.before_begin(),curr=flst.begin();

  while(it!=lst.end())
  {
    if(*it%2)
    {
      it=lst.insert(it,*it);
      advance(it,2); //could not use it+=2;
    }
    else
    {
      it=lst.erase(it);
    }

  }

  while(curr!=flst.end())
  {
    if(*curr%2)
    {
      curr=flst.insert_after(prev,*curr);
      advance(prev,2);
      advance(curr,2);
    }
    else
      curr=flst.erase_after(prev);
  }
      

  for(auto i:lst)
    cout<<i<<" ";
  cout<<endl;

  for(auto i:flst)
    cout<<i<<" ";
  cout<<endl;

}



