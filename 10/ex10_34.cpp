#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  vector<string> words{"what","the","hell","are","you","waiting","for?"};

  for(auto it=words.crbegin();it!=words.crend();it++)
    cout<<*it<<" ";

  cout<<endl;

}
