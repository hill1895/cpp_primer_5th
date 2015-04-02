#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;



int main()
{
  vector<string> words{"what","the","hell","are","you","waiting",", buddy?"};
  
  auto it_last=partition(words.begin(),words.end(),[](const string &s)                                                                                    {return s.size()>=5;});

  for(auto it=words.cbegin();it!=it_last;it++)
    cout<<(*it)<<" ";

  cout<<endl;

}








