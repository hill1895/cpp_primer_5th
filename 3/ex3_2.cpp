#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a,b;
  cout<<"Get a line: ";
  getline(cin,a);
  cout<<"Get a word: ";
  cin>>b;
  cout<<"The line we got: "<<a<<endl;
  cout<<"the word we got: "<<b<<endl;
}
