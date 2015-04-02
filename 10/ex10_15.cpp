#include <iostream>
using namespace std;

int lambdaexp(int);

int main()
{
  cout<<lambdaexp(5)<<endl;
}

int lambdaexp(int a)
{
  auto sum=[a](int b){return a+b;};
  return sum(10);
}
