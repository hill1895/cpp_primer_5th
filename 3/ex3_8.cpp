#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a;
  cout<<"Enter the string: ";
  cin>>a;

  string::size_type index=0;

  while(index<a.size())//using "for" is more simple
  {
    a[index]='X';
    index++;
  }

  cout<<"The string now is: "<<a<<endl;
}
  



