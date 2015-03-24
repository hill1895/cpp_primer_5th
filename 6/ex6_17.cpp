#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool hasUpper(const string &s);
void intoLower(string &s);

int main()
{
  string str;
  cout<<"Enter a string: ";
  getline(cin,str);
  if(hasUpper(str))
    cout<<"The string has upper letter."<<endl;
  else
    cout<<"The string has no upper letter."<<endl;

  intoLower(str);
  cout<<"The string now is: "<<str<<endl;

}

bool hasUpper(const string &s)
{
  for(string::const_iterator it=s.begin();it!=s.end();++it)//Be carefull of uisng const_iterator when dealing with const reference
  {
    if(isupper(*it))
      return true;
  }
  return false;
}

void intoLower(string &s)
{
  for(string::iterator it=s.begin();it!=s.end();++it)
    (*it)=tolower(*it);
}
