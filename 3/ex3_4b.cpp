#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a,b;
  string temp;
  cout<<"Enter the first string: ";
  cin>>a;
  cout<<"Enter the second string: ";
  cin>>b;

  if(a.size()!=b.size())
  {
    temp=a.size()>b.size()?a:b;
    cout<<"The string with the larger size is: "<<temp<<endl;
  }
  else
    cout<<"The two strings are the same size."<<endl;
}

