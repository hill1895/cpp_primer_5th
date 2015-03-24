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

  if(a!=b)
  {
    temp=a>b?a:b;
    cout<<"The bigger string is: "<<temp<<endl;
  }
  else
    cout<<"The two strings are the same."<<endl;
}

