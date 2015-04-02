#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  ifstream input("data/word_count");

  vector<string> words;
  string word;

  while(input>>word)
    words.push_back(word);

  stable_sort(words.begin(),words.end(),[](const string &s1,const string &s2){return s1.size()<s2.size();});
                                     
  auto end_unique=unique(words.begin(),words.end());

  words.erase(end_unique,words.end());

  for(const auto &s:words)
    cout<<s<<endl;

}


