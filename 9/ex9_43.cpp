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
 
  string::iterator it=s.begin();
  while(it!=s.end())
  {
    string sub=s.substr(it-s.begin(),oldVal.size());
    if(sub==oldVal)
    {
      auto offset=it-s.begin();
      s.erase(it,it+oldVal.size());
      s.insert(it,newVal.begin(),newVal.end());
      it=s.begin()+offset+newVal.size();//It's fucking important to calculate the right iterator!!:
    }
    else
      it++;
  }
}

