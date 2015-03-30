#include <iostream>
#include <string>
using namespace std;

void replace_str(string &,const string &,const string &);

int main()
{
  string s("tho thru tho thru,fegegwe gerg ");

  replace_str(s,"tho","though");
  cout<<s<<endl;
  replace_str(s,"thru","through");
  cout<<s<<endl;

}


void replace_str(string &s,const string &oldVal,const string &newVal)
{
  size_t i=0;
  while(i!=s.size())
  {
    if(s.substr(i,oldVal.size())==oldVal)
    {
      s.replace(i,oldVal.size(),newVal);
      i+=newVal.size();
    }
    else
      i++;
  }

}

