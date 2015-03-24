#include <iostream>
#include <string>
using namespace std;

inline bool isShorter(const string&,const string&);

int main()
{
  string a,b;
  cout<<"Enter two strings: "<<endl;
  cin>>a>>b;

 if(isShorter(a,b))
   cout<<"The shorter one is "<<a<<endl;
 else
   cout<<"The shorter one is "<<b<<endl;

}

inline bool isShorter(const string &a,const string &b)
{
  return a.size()<b.size();
}

