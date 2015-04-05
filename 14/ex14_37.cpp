#include <iostream>
#include <vector>
using namespace std;

class Replace
{
public:
  Replace(const string &ostr="",const string &nstr=""):oldstr(ostr),newstr(nstr){}
  void operator()(string &item)
  {
    if(item==oldstr)
      item=newstr;
  }
private:
  string oldstr;
  string newstr;

};

int main()
{
  vector<string> vec{"he","he","I","SHE","he","I"};
  Replace rp("he","his");

  for(auto it=vec.begin();it!=vec.end();it++)
    rp(*it);

  for(auto &i:vec)
    cout<<i<<" ";
  cout<<endl;

}

