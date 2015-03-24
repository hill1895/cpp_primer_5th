#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  int cnt=0;

  getline(cin,str);

  for(auto ch:str)
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
      ++cnt;

  cout<<"There are "<<cnt<<" vowels in the string."<<endl;

}
