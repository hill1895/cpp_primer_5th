#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class ShorterStr
{
public:
  bool operator()(const string& s1,const string& s2)const
  {
    return s1.size()<s2.size();
  }
};

class CmpStr
{
public:
  CmpStr(vector<string>::size_type n):sz(n){}
  bool operator()(const string& s)
  {
    return s.size()>=sz;
  }
private:
  vector<string>::size_type sz;
};

class StrPrint
{
public:
  bool operator()(const string& s)
  {
    cout<<s<<" ";
  }
};

void elimDups(vector<string> &);
void biggies(vector<string> &,vector<string>::size_type);

int main()
{
  vector<string> words{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};

  biggies(words,4);
}




void elimDups(vector<string> &s)
{
  sort(s.begin(),s.end());
  auto end_unique=unique(s.begin(),s.end());
  s.erase(end_unique,s.end());
}

void biggies(vector<string> &s,vector<string>::size_type sz)
{
  elimDups(s);

  stable_sort(s.begin(),s.end(),ShorterStr());

  auto wc=find_if(s.begin(),s.end(),CmpStr(sz));

  for_each(wc,s.end(),StrPrint());
  cout<<endl;
}

