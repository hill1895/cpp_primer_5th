#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main()
{
  list<const char *> chars{"hello","world","hell"};
  vector<string> strs;
  strs.assign(chars.begin(),chars.end());

  for(const auto &str:strs)
    cout<<str<<endl;

}
