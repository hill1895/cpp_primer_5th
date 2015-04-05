#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class SizeCmp
{
public:
  bool operator()(const string &s)
  {
    if(s.size()>=1 && s.size()<=9)
      return true;
    else
      return false;
  }
};

int main()
{
  ifstream input("text");
  vector<string> text;
  string word;
  size_t cnt1_9=0,cnt10=0;

  while(input>>word)
    text.push_back(word);

  SizeCmp szcmp;

  for(auto it=text.cbegin();it!=text.cend();it++)
  {
    if(szcmp(*it))
      cnt1_9++;
    else
      cnt10++;
  }
  cout<<"Size 1-9: "<<cnt1_9<<endl;
  cout<<"Size>=10: "<<cnt10<<endl;
}






