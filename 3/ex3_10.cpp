#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  string str;
  cout<<"Enter the string: ";
  cin>>str;

  string::iterator index=str.begin();//using iterator is a better solution! and using "while" is beeter than "for" 

  while(index!=str.end())
    if(ispunct(*index))
      str.erase(index);
    else
      index++;

  cout<<"The string now is: "<<str<<endl;

}

