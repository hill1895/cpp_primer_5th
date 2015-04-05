#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CinString
{
public:
  CinString(istream &i=cin):is(i){}
  string operator()() const
  {
    string s;
    getline(is,s);
    if(is)
      return s;
    else 
      return "";
  }
private:
  istream &is=cin;
};

int main()
{
  vector<string> vec;
  CinString cstring;
  char quit;

  while(quit!='q')
  {
    string temp;
    vec.push_back(cstring());
    cout<<"coutinue or quit:";
    cin>>quit;
  }

  for(auto &i:vec)
    cout<<i<<endl;

}



