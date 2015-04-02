#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <map>
using namespace std;

int main()
{
  map<string,vector<pair<string,string>>> families;
  string last_name,first_name,birthday;


while(cin>>first_name>>last_name>>birthday && first_name!="@q" && last_name!="@q" && birthday!="@q")
{
  families[last_name].push_back({first_name,birthday});
}

for(const auto &i:families)
{
  cout<<"Family: "<<i.first<<" children: "<<endl;
  for(const auto &s:i.second)
    cout<<s.first<<" birthday: "<<s.second<<endl;
  cout<<endl;
}


}
