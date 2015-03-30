#include <iostream>
#include <vector>
#include <algorithm>//sort(),unique()
#include <string>
using namespace std;

void elimDups(vector<string>&);

int main()
{
  vector<string> words{"the","quick","fox","jumps","over","the","slow","red","turtle"};

  elimDups(words);

  for(auto &str:words)
    cout<<str<<" ";

  cout<<endl;

}


void elimDups(vector<string> &words)
{
  sort(words.begin(),words.end());
  auto end_unique=unique(words.begin(),words.end());
  words.erase(end_unique,words.end());

}

