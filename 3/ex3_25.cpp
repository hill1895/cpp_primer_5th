#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<unsigned> scores(11,0);
  unsigned grade;

  vector<unsigned>::iterator it=scores.begin();

  while(cin>>grade)
  {
    if(grade<=100)
      (*(it+grade/10))++;//using "()" is very important!
  }

  cout<<"The result is: ";

  for(it=scores.begin();it!=scores.end();it++)
    cout<<*it<<" ";

  cout<<endl;
}

