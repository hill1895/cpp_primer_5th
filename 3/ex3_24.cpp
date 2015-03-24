#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> ivec;
  int temp;

  cout<<"Enter a array of numbers: "<<endl;

  while(cin>>temp)
    ivec.push_back(temp);

  cout<<"The sum of the neighbor numbers is: "<<endl;

  for(vector<int>::iterator it=ivec.begin();it!=ivec.end()-1;it++)
    cout<<*it+*(it+1)<<endl;

  cout<<"The sum of the numbers in the head and tail is: "<<endl;

  for(vector<int>::iterator i=ivec.begin(),j=ivec.end()-1;i<j;i++,j--)
    cout<<*i+*j<<endl;

}
