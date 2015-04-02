#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <sstream>
#include <fstream>
using namespace std;

void word_transform(ifstream &,ifstream &);
unordered_map<string,string> buildMap(ifstream &);
const string &transform(const string &,const unordered_map<string,string> &);

int main()
{
  ifstream map_file("data/rules");
  ifstream input("data/text");

  word_transform(map_file,input);

}

void word_transform(ifstream &map_file,ifstream &input)
{
  auto trans_map=buildMap(map_file);
  string text;
  while(getline(input,text))
  {
    istringstream stream(text);
    string word;
    bool firstword=true;
    while(stream>>word)
    {
      if(firstword)
        firstword=false;
      else
        cout<<" ";
      cout<<transform(word,trans_map);
    }
    cout<<endl;
  }
}

unordered_map<string,string> buildMap(ifstream &map_file)
{
  unordered_map<string,string> trans_map;
  string key,value;
  while(map_file>>key && getline(map_file,value))//in each line, first word is the key,other words are values
  {
    if(value.size()>1)
      trans_map[key]=value.substr(1).substr(0,value.find_last_not_of(' '));
    else
      throw runtime_error("no rule for "+key);
  }
  return trans_map;
}

const string &transform(const string &s,const unordered_map<string,string>&m)
{
  auto map_it=m.find(s);
  if(map_it!=m.cend())
    return map_it->second;
  else
    return s;
}

