#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str("ab2c3d7R4E6");
  string num("0123456789");

  string::size_type pos_num=0,pos_alp=0;

  while((pos_num=str.find_first_of(num,pos_num))!=string::npos)
  {
    cout<<str[pos_num]<<" ";
    pos_num++;
  }

  cout<<endl;

  
  
  while((pos_alp=str.find_first_not_of(num,pos_alp))!=string::npos)
  {
    cout<<str[pos_alp]<<" ";
    pos_alp++;
  }

  cout<<endl;
}






