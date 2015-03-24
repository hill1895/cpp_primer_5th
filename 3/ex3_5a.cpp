#include <iostream>
#include <string>
using namespace std;

int main()
{
  string a;
  string total;

  while(cin>>a)
  {
    if(a=="\r")
      break;
    else
      total+=a;
  }
  cout<<"The whole string is: "<<total<<endl;
}

