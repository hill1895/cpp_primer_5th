#include <iostream>
#include <list>
#include <algorithm>//sort(),unique()
#include <string>
using namespace std;

void elimDups(list<string>&);

int main()
{
  list<string> words{"the","quick","fox","jumps","over","the","slow","red","turtle"};

  elimDups(words);

  for(auto &str:words)
    cout<<str<<" ";

  cout<<endl;

}


void elimDups(list<string> &words)
{
  words.sort();
  words.unique();
  
}

