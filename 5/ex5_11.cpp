#include <iostream>
#include <string>
using namespace std;

int main()
{
  char ch;

  int aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0,spaceCnt=0,enterCnt=0,tabCnt=0;

  while(cin>>ch)
  {
 
    switch(ch)
    {
      case 'a': case 'A':
        aCnt++;break;
      case 'e': case 'E':
        eCnt++;break;
      case 'i': case 'I':
        iCnt++;break;
      case 'o': case 'O':
        oCnt++;break;
      case 'u': case 'U':
        uCnt++;break;
      case ' ':
        spaceCnt++;break;
      case '\r':
        enterCnt++;break;
      case '\t':
        tabCnt++;break;
    }
  }

  cout<<"There are "<<aCnt<<" 'a' in the string."<<endl;
  cout<<"There are "<<eCnt<<" 'e' in the string."<<endl;
  cout<<"There are "<<iCnt<<" 'i' in the string."<<endl;
  cout<<"There are "<<oCnt<<" 'o' in the string."<<endl;
  cout<<"There are "<<uCnt<<" 'u' in the string."<<endl;
  cout<<"There are "<<spaceCnt<<" spaces in the string."<<endl;
  cout<<"There are "<<enterCnt<<" enters in the string."<<endl;
  cout<<"There are "<<tabCnt<<" tabs in the string."<<endl;
}
  

