#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
  vector<string> words;
  string temp;

  while(cin>>temp)
    words.push_back(temp);

  for(string &str:words)
  {
    for(char &ch:str)
      ch=toupper(ch);
    cout<<str<<endl;
  }

  cout<<"/////////////////"<<endl;


  for(vector<string>::iterator it=words.begin();it!=words.end();it++)//using iterator is also OK!
  {
    for(string::iterator i=(*it).begin();i!=(*it).end();i++)//Be careful using "()"!
      *i=toupper(*i);
    cout<<*it<<endl;
  }

}
