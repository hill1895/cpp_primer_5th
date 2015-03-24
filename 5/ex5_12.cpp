#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  int ffCnt=0,flCnt=0,fiCnt=0;

  getline(cin,str);

  for(string::iterator it =str.begin();it!=str.end()-1;++it)
  {
    if((*it)=='f')
    {
      switch(*(it+1))
      {
        case 'f':
          ffCnt++;break;
        case 'l':
          flCnt++;break;
        case 'i':
          fiCnt++;break;
      }
    }
  }

  cout<<"There are "<<ffCnt<<" 'ff' in the string"<<endl;
  cout<<"There are "<<flCnt<<" 'fl' in the string"<<endl;
  cout<<"There are "<<fiCnt<<" 'fi' in the string"<<endl;
  
}
