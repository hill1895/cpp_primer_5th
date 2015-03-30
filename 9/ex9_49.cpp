#include<iostream>
#include<string>
#include <fstream>
using namespace std;

int main()
{
  ifstream input("../8/text");
  string word,maxword;

  string ascDesc("bdfghjklpqtyABCDEFGHIJKLMNOPQRSTUVWXYZ");

  while(input>>word)
  {
    if(word.find_first_of(ascDesc,0)==string::npos)
    {
      if(word.size()>maxword.size())
        maxword=word;
    }
  }

  cout<<"The word with max length is: "<<maxword<<endl;
}



