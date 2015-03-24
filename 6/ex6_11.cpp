#include <iostream>
using namespace std;

void reset(int &i);

int main()
{
  int i=53,j=-52;
  reset(i);
  reset(j);
  cout<<"i="<<i<<"\tj="<<j<<endl;
}

void reset(int &i)
{
  i=0;
}
