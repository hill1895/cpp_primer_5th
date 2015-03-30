#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
  int ia[]={0,1,1,2,3,5,8,13,21,55,89};
  list<int> ls(begin(ia),end(ia));
  vector<int> vec(begin(ia),end(ia));

  list<int>::iterator it_l=ls.begin();
  vector<int>::iterator it_v=vec.begin();

  while(it_l!=ls.end())
  {
    if((*it_l)%2)
      it_l=ls.erase(it_l);
    else
      it_l++;
  }

  while(it_v!=vec.end())
  {
    if((*it_v)%2==0)
      it_v=vec.erase(it_v);
    else
      it_v++;
  }



  cout<<"list: ";
  for(auto i:ls)
    cout<<i<<" ";

  cout<<endl;

  cout<<"vector: ";
  for(auto i:vec)
    cout<<i<<" ";

  cout<<endl;

}
