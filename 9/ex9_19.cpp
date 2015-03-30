#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
  string str;
  list<string> ls;

  while(cin>>str)
    ls.push_back(str);

  for(list<string>::const_iterator it=ls.cbegin();it!=ls.cend();it++)
    cout<<(*it)<<endl;

 }
