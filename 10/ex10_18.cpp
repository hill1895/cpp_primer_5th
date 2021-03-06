#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

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
  stable_sort(s.begin(),s.end(),[](const string &s1,const string &s2)
                                    {return s1.size()<s2.size();});

  auto wc=partition(s.begin(),s.end(),[sz](const string &s)
                                     {return s.size()<sz;});

  for_each(wc,s.end(),[](const string &s)
                        {cout<<s<<" ";});
  cout<<endl;
}

