#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  vector<string> strs;
  string str;
  string maxStr;
  string cntStr;
  int max=0;
  int cnt=1;

  while(cin>>str)
    strs.push_back(str);

  vector<string>::iterator it=strs.begin();

  while(it!=strs.end()-1 && strs.size()>0)
  {
    if((*it)==(*(it+1)))
    {
      cnt++;
      cntStr=*(it);
    }

    else
      cnt=1;

    if(cnt>max)//This case do not dicuss the situation that there are several words with max duplicated times.
    {
      maxStr=cntStr;
      max=cnt;
    }

    it++;
  }

  if(max==1)
    cout<<"There is no duplicated words."<<endl;
  else
    cout<<"The word "<<maxStr<<" occured "<<max<<" times in the text."<<endl;

}




