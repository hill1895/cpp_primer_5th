#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a;
  cout<<"Enter the string: ";
  cin>>a;

  for(char &ch:a)//same resault with using "auto"
    ch='X';

  cout<<"The string now is: "<<a<<endl;
}
  



