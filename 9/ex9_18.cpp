#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
  string str;
  deque<string> deq;

  while(cin>>str)
    deq.push_back(str);

  for(deque<string>::const_iterator it=deq.cbegin();it!=deq.cend();it++)
    cout<<(*it)<<endl;

 }
