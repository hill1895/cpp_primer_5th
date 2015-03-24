#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  
  cout<<"Enter the first word: ";
  while(cin>>str)
  {
    string temp;
    string rmp;

    if(temp==str)
    {
      cout<<temp<<" is duplicated."<<endl;
      break;
    }
    else
    {
      cout<<"continue? yes or no?:";
      cin>>rmp;
      if(rmp[0]=='n')
      { 
        cout<<"There is no duplicated words."<<endl;
        break;
      }
      else
      {
        cout<<"Enter the next word: "<<endl;
        temp=str;
      }
    }
  }
}

