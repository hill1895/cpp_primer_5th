#include <iostream>
using namespace std;

int main()
{
  //bool
  cout<<"bool: \t\t"<<sizeof(bool)<<endl;
  //char
  cout<<"char: \t\t"<<sizeof(char)<<endl;
  cout<<"wchar_t: \t"<<sizeof(wchar_t)<<endl;
  cout<<"char16_t: \t"<<sizeof(char16_t)<<endl;
  cout<<"char32_t: \t"<<sizeof(char32_t)<<endl;

  //integer
  cout<<"short: \t\t"<<sizeof(short)<<endl;
  cout<<"int: \t\t"<<sizeof(int)<<endl;
  cout<<"long: \t\t"<<sizeof(long)<<endl;
  cout<<"long long: \t"<<sizeof(long long)<<endl;

  //float
  cout<<"float: \t\t"<<sizeof(float)<<endl;
  cout<<"double: \t"<<sizeof(double)<<endl;
  cout<<"long double: \t"<<sizeof(long double)<<endl;
  //poiter
  cout<<"pointer to int:\t"<<sizeof(int*)<<endl;
  cout<<"pointer to double:\t"<<sizeof(double*)<<endl;

}
