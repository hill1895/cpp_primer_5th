#include<iostream>
#include <string>
using namespace std;

int main()
{
  int grade;
  string finalgrade;

  while(cin>>grade)
  {
    finalgrade=(grade>90)?"highpass":(grade>=60 && grade<75)?"lowpass":(grade<60)?"fail":"pass";
    cout<<finalgrade<<endl;
  }
}
