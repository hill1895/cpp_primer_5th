#include <iostream>
#include <string>
using namespace std;

int main()
{
  string rsp;
  do
  {
    cout<<"Enter two strings:"<<endl;
    string str1,str2;
    cin>>str1>>str2;

    cout<<(str1<=str2?str1:str2)<<" is the smaller one."<<endl;
    cout<<"continue? yes or no?";
     
    cin>>rsp;
  }while(!rsp.empty() && rsp[0]=='y');
}


