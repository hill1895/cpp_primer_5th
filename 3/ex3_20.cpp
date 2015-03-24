#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> ivec;
  int temp;

  cout<<"Enter a array of numbers: ";

  while(cin>>temp)
    ivec.push_back(temp);

  cout<<"The sum of the neighbor numbers is: "<<endl;

  for(vector<int>::size_type i=0;i<ivec.size()-1;i++)
    cout<<ivec[i]+ivec[i+1]<<endl;

  cout<<"The sum of the numbers in the head and tail is: "<<endl;

  for(vector<int>::size_type i=0,j=ivec.size()-1;i<j;i++,j--)
    cout<<ivec[i]+ivec[j]<<endl;

}
