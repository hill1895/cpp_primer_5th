#include <iostream>
#include <string>
#include <fstream>
#include "TextQuery.h"
using namespace std;

void runQueries(ifstream &);

int main()
{
  ifstream infile("data/storyDataFile");
  runQueries(infile);
}

void runQueries(ifstream &infile)
{
  TextQuery tq(infile);
  while(true)
  {
    cout<<"enter a word to look for or q to quit: ";
    string s;
    if(!(cin>>s) || s=="q") break;
    print(cout,tq.query(s))<<endl;

  }
}
