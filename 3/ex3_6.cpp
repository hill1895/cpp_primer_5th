#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a;
  cout<<"Enter the string: ";
  cin>>a;

  for(auto &ch:a) //use a reference; using compiler with c++11 "-std=c++11"
    ch='X';

  cout<<"The string now is: "<<a<<endl;
}
  



