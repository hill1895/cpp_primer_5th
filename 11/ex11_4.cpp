#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main()
{
  ifstream input("data/word_count");

  map<string,size_t> word_cnt;
  set<string> exclude{"The","But","And","Or","An","A",
                      "the","but","and","or","An","a"};

  string word;

  while(input>>word)
  {
    if(exclude.find(word)==exclude.end())
    {
      for(auto &ch:word)
        ch=tolower(ch);
      if(ispunct(*(word.end()-1)))
        word.erase(word.size()-1,1);
      word_cnt[word]++;
    }
  }

  for(const auto &w:word_cnt)
    cout<<"'"<<w.first<<"' occurs "<<w.second<<((w.second>1)?" times":" time")<<" in the text."<<endl;

 }
