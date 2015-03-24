#include <iostream>
using namespace std;

double abs(double);

int main()
{
  double num;
  cout<<"Enter a number: ";
  cin>>num;
  cout<<"The abs of "<<num<<" is "<<abs(num)<<endl;

}

double abs(double val)
{
  if(val<0)
    return (-val);
  else 
    return val;
}

