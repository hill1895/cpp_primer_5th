#include <iostream>
#include <utility>
#include <vector>
#include <string>
using namespace std;

int main()
{
  vector<pair<string,int>> vec1,vec2,vec3;

  string str;
  int i;

  while(cin>>str>>i)
  {
    vec1.push_back(pair<string,int>(str,i));
    vec2.push_back(make_pair(str,i));
    vec3.push_back({str,i});
  }

  cout<<"vec1:"<<endl;

  for(auto &i:vec1)
    cout<<i.first<<" "<<i.second<<endl;
  
  cout<<"vec2:"<<endl;

  for(auto &i:vec2)
    cout<<i.first<<" "<<i.second<<endl;

  cout<<"vec3:"<<endl;

  for(auto &i:vec3)
    cout<<i.first<<" "<<i.second<<endl;

}
  
