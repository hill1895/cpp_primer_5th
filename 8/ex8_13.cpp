#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct PersonInfo{
  string name;
  vector<string> phones;
};

int main()
{
  string line,word;
  vector<PersonInfo> people;
  istringstream record;
  ifstream input("data/sstream",ifstream::in);//file: data/sstream
  
  while(getline(input,line))
  {
    PersonInfo info;
    record.clear();//Important to clean the buff;
    record.str(line);
    record>>info.name;
    while(record>>word)
      info.phones.push_back(word);
    people.push_back(info);
  }

  for(auto &p:people)
  {
    cout<<p.name<<" ";
    for(auto &tele:p.phones)
      cout<<tele<<" ";
    cout<<endl;
  }
}



