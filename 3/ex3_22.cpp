#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  vector<string> text;
  string temp;

  cout<<"Enter the text: "<<endl;
  
  while(getline(cin,temp))
    text.push_back(temp);

  vector<string>::iterator it=text.begin();

  for(string::iterator ch=(*it).begin();ch!=(*it).end();ch++)
    *ch=toupper(*ch);

  cout<<"The result is: "<<endl;

  while(it!=text.end())
  {
    cout<<*it<<endl;
    it++;
  }
}

