#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
  ifstream input("text",ifstream::in);
  vector<string> text;
  string temp;

  if(!input)
  {
    cerr<<"Can not open the file!"<<endl;
    return -1;
  }
  else
    while(getline(input,temp))
      text.push_back(temp);

  for(auto &s:text)
  {
    istringstream iss(s);
    string word;
    while(iss>>word)
      cout<<word<<endl;
  }
}

