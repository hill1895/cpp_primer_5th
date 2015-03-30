#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  vector<string> text;
  ifstream file("text",ifstream::in);

  if(file)
  {
    string temp;
    while(file>>temp)
      text.push_back(temp);
  }

  for(auto &str:text)
    cout<<str<<endl;
}
