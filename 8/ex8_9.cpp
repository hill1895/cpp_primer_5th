#include <iostream>
#include <sstream>
#include <string>
using namespace std;

istream &input(istream &);

int main()
{
  istringstream str("Hello world!");
  input(str);
}
  



istream &input(istream &is)
{
  string temp;
  while(is>>temp)
    cout<<temp<<endl;
  is.clear();
  return is;
}
