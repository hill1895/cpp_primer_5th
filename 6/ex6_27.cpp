#include <iostream>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int>);

int main()
{
  cout<<sum({5,3,7,42,754,31})<<endl;
}

int sum(initializer_list<int> num)
{
  int sum=0;
  for(initializer_list<int>::iterator it=num.begin();it!=num.end();++it)
    sum+=(*it);

  return sum;
}
      

