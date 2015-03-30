#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  vector<char> vec {'h','e','l','l','o'};
  string str(vec.begin(),vec.end());

  cout<<str<<endl;
}



