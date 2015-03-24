#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> a,b{1,2,3,4,5};
  bool isPrefix=false;
  int num;

  cout<<"Enter the numbers in vector a:"<<endl;
  while(cin>>num)
    a.push_back(num);

  if(a.size()>=b.size())
  {
    for(vector<int>::iterator it_a=a.begin(),it_b=b.begin();it_b!=b.end();it_a++,it_b++)
    {
      if((*it_a)!=(*it_b))
      {
        isPrefix=false;
        break;
      }
      isPrefix=true;
    }

    if(isPrefix==true)
      cout<<"vector b is the prefix of vector a."<<endl;
    else
      cout<<"vector b is not the prefix of vector a."<<endl;
  }

  else
  {
    for(vector<int>::iterator it_a=a.begin(),it_b=b.begin();it_a!=a.end();it_a++,it_b++)
    {
      if((*it_a)!=(*it_b))
      {
        isPrefix=false;
        break;
      }
      isPrefix=true;
    }

    if(isPrefix==true)
      cout<<"vector a is the prefix of vector b."<<endl;
    else
      cout<<"vector a is not the prefix of vector b."<<endl;
  }
}





