#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

template<typename Con>
void print(const Con &con)
{
  
  for(typename Con::const_iterator it=con.cbegin();it!=con.cend();it++)
    cout<<*it<<" ";
}

int main()
{
  vector<int> vec{1,2,3,4,5,6,7,8,9};
  print(vec);
  cout<<endl;
  string str{"fsadgehw"};
  print(str);
  cout<<endl;
  list<int> lst{4,2,65,87,6,4,2};
  print(lst);
  cout<<endl;
}
