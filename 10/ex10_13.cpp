#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool str5(const string &);

int main()
{
  vector<string> words{"what","the","hell","are","you","waiting",", buddy?"};
  
  vector<string>::iterator it_last=partition(words.begin(),words.end(),str5);

  for(auto it=words.cbegin();it!=it_last;it++)
    cout<<(*it)<<" ";

  cout<<endl;

}

bool str5(const string &s)
{
  return s.size()>=5;
}



