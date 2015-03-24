#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  const size_t C_size=50;
  char ch1[C_size]="sfsagh";
  char ch2[C_size]="wtgdh";
  char ch3[C_size];

  strcpy(ch3,ch1);
  strcat(ch3,ch2);

  cout<<ch3<<endl;
}
