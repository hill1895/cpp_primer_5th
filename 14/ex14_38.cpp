#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class SizeCmp
{
public:
  SizeCmp(size_t n):sz(n){}
  bool operator()(const string &s)
  {
    if(s.size()==sz)
      return true;
    else
      return false;
  }
private:
  size_t sz;
};

int main()
{
  ifstream input("text");
  vector<string> text;
  vector<int> cnt(10,0);
  string word;

  while(input>>word)
    text.push_back(word);

  for(auto it=text.cbegin();it!=text.cend();it++)
  {
    for(size_t i=1;i!=11;i++)
    {
      SizeCmp szcmp(i);
      if(szcmp(*it))
        (*(cnt.begin()+i-1))++;
    }
    
  }

  for(auto it=cnt.cbegin();it!=cnt.cend();it++)
    cout<<"size: "<<(it-cnt.cbegin()+1)<<" cnt: "<<*it<<endl;
}






