#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
  const size_t C_size=50;
  string a,b;
  char ch1[C_size],ch2[C_size];

  cout<<"Enter two strings: "<<endl;
  getline(cin,a);
  getline(cin,b);

  if(a==b)
    cout<<"The two strings are the same."<<endl;
  else
    cout<<"The two strings are not the same."<<endl;

  cout<<"Enter two char arrays: "<<endl;
  cin.getline(ch1,C_size);
  cin.getline(ch2,C_size);

  if(strcmp(ch1,ch2)==0)
    cout<<"the two char arrays are the same."<<endl;
  else
    cout<<"the two char arrays are not the same."<<endl;

}

