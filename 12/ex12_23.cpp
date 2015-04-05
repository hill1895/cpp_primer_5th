#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
  char *chars=new char[100];
  strcat(chars,"hello");
  strcat(chars," world");
  cout<<chars<<endl;

  delete []chars;

  string str1{"hello"},str2{" world"};
  cout<<str1+str2<<endl;
}
