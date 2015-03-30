#include <iostream>
#include <string>
using namespace std;

int main()
{
  string numbers("0123456789"),name("r2d2");
  cout<<int(numbers.find(name))<<endl;//return -1
}
