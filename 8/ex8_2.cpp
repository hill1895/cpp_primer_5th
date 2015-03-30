#include <iostream>
#include <string>
using namespace std;

istream &input(istream &);

int main()
{
  istream &is=input(cin);
  cout<<is.rdstate()<<endl;
}
  



istream &input(istream &is)
{
  int temp;
  while(is>>temp)
    cout<<temp<<endl;
  is.clear();
  return is;
}
