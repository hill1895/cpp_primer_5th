#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main()
{
  map<string,vector<string>> families;
  string last_name,first_name;


while(cin>>first_name>>last_name && first_name!="@q" && last_name!="@q")
{
  families[last_name].push_back(first_name);
}

for(const auto &i:families)
{
  cout<<"Family: "<<i.first<<" children: ";
  for(const auto &s:i.second)
    cout<<s<<" ";
  cout<<endl;
}


}
