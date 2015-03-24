#include<iostream>
#include <string>
using namespace std;

int main()
{
  int grade;
  string finalgrade;

  while(cin>>grade)
  {
    if(grade>90)
      finalgrade="highpass";
    else if(grade>=60 && grade<75)
      finalgrade="lowpass";
    else if(grade<60)
      finalgrade="fail";
    else 
      finalgrade="pass";
    cout<<finalgrade<<endl;      
  }
}
