#include <iostream>
#include <string>
using namespace std;

string add_name(string name,const string &prefix="",const string &suffix="");

int main()
{
  string name("Stephen Curry");
  cout<<add_name(name,"Mr. ")<<endl;
  cout<<add_name(name,"Mr. "," Jr.")<<endl;
  cout<<add_name(name)<<endl;

}


string add_name(string name,const string &prefix,const string &suffix)
{
  name.insert(name.begin(),prefix.begin(),prefix.end());  
  name.append(suffix);
  return name;
}
