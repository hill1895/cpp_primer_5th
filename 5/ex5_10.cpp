#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;

  int aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0;

  getline(cin,str);

  for(auto ch:str)
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
    }

  cout<<"There are "<<aCnt<<" 'a' in the string."<<endl;
  cout<<"There are "<<eCnt<<" 'e' in the string."<<endl;
  cout<<"There are "<<iCnt<<" 'i' in the string."<<endl;
  cout<<"There are "<<oCnt<<" 'o' in the string."<<endl;
  cout<<"There are "<<uCnt<<" 'u' in the string."<<endl;

}
  

