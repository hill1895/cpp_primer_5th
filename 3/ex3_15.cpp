#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string temp;
  vector<string> words;

  while(cin>>temp)
    words.push_back(temp);

  for(auto ch:words)
    cout<<ch<<endl;
}
