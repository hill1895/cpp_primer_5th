#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool isShorter(const string&,const string &);
void elimDups(vector<string> &);

int main()
{
  vector<string> words{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};


  elimDups(words);
  stable_sort(words.begin(),words.end(),isShorter);

  for(auto &s:words)
    cout<<s<<" ";

  cout<<endl;

}

bool isShorter(const string &s1,const string &s2)
{
  return s1.size()<s2.size();
}

void elimDups(vector<string> &s)
{
  sort(s.begin(),s.end());
  auto end_unique=unique(s.begin(),s.end());
  s.erase(end_unique,s.end());
}

