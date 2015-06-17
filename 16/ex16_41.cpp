#include <iostream>
using namespace std;

template <typename T>
auto sum(T lhs,T rhs)->decltype(lhs+rhs)
{
  return lhs+rhs;
}

int main()
{
  auto s=sum(99999999999999999999,9999999999999999);
  cout<<s<<endl;
}
