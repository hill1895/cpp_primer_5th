#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a;
  string total;

  while(cin>>a && a.size()!=0)
    total+=a+" ";
  cout<<"The whole string is: "<<total<<endl;
}

