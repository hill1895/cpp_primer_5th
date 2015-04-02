#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  vector<string> words{"what","the","hell","are","you","waiting","for?"};

  for(auto it=words.cend()-1;it!=words.cbegin()-1;it--)
      cout<<*it<<" ";

  cout<<endl;

}
