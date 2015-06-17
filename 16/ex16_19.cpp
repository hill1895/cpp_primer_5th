#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

template<typename Con>
void print(const Con &con)
{
  auto it=con.begin();
  for(typename Con::size_type i=0;i!=con.size();i++)
    cout<<*(it+i)<<" ";
}

int main()
{
  vector<int> vec{1,2,3,4,5,6,7,8,9};
  print(vec);
  cout<<endl;
  string str{"fsadgehw"};
  print(str);
  cout<<endl;
}
