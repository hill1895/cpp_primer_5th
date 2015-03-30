#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  vector<string> vec{"he","she","her","you","she","her","you","you","her","you","her"};

  cout<<"There are "<<count(vec.cbegin(),vec.cend(),"her")<<" 'her' in the vector."<<endl;
  cout<<"There are "<<count(vec.cbegin(),vec.cend(),"you")<<" 'you' in the vector."<<endl;
  cout<<"There are "<<count(vec.cbegin(),vec.cend(),"she")<<" 'she' in the vector."<<endl;
  cout<<"There are "<<count(vec.cbegin(),vec.cend(),"I")<<" 'I' in the vector."<<endl;

}
  
  
