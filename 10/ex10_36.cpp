#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
  list<int> lst{1,2,30,0,0,7,6,5,43,0,4,3,2};

  auto find0=find(lst.crbegin(),lst.crend(),0);

  cout<<*find0<<endl;

}
