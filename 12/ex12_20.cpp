#include <iostream>
#include <fstream>
#include "StrBlob.h"
using namespace std;

int main()
{
  ifstream input("data/storyDataFile");
  StrBlob text;
  string line;

  while(getline(input,line))
    text.push_back(line);

  for(size_t i=0;i!=text.size();i++)
  {
    StrBlobPtr it(text,i);
    cout<<it.deref()<<endl;
  }


}

