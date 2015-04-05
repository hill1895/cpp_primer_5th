#include <iostream>
using namespace std;

int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;

  char *input=new char[size+1];

  cin>>input;

  cout<<input<<endl;

  delete []input;
}
