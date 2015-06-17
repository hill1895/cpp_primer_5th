#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

template<typename itT,typename vaulueT> itT find(const itT& beg,const itT& end,const vaulueT& value)
{
  itT it=beg;
  while(it!=end && *it!=value)
    it++;
  return it;
}

int main()
{
  vector<int> vec{1,2,3,4,5,6,7,8};
  list<string> lst{"a","ab","abv","avv"};

  cout<<*find(vec.begin(),vec.end(),10)<<endl;
  cout<<*find(lst.begin(),lst.end(),string("a"))<<endl;

}
