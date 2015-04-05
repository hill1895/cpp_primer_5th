#include <iostream>
#include <memory>
using namespace std;

int main()
{
  unique_ptr<int> p1(new int(42));
  unique_ptr<int> p2(p1);//treat p1 as the args of delete!!

}
