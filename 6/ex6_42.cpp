#include <iostream>
#include <string>
using namespace std;

string make_plural(size_t ctr,const string &word,const string &ending="s");

int main()
{
  cout<<"Singual: "<<make_plural(1,"success")<<" "<<make_plural(1,"failure")<<endl;
  cout<<"Plural: "<<make_plural(2,"suceess")<<" "<<make_plural(2,"failure")<<endl;

}

string make_plural(size_t ctr,const string &word,const string &ending)
{
  return (ctr>1)?word+ending:word;
}

