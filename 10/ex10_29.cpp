#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

int main()
{
  fstream input("../8/text");
  istream_iterator<string> it(input),eof;

  vector<string> text(it,eof);

  for(auto &s:text)
    cout<<s<<" ";
  
  cout<<endl;
}

