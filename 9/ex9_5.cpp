#include <iostream>
#include <vector>
using namespace std;
using vec_iter=vector<int>::iterator;

vec_iter vec_find(vector<int>&,int);

int main()
{
  vector<int> vec={1,2,3,4,5,6,7,8,9,10,11,12};
  int temp;

  cout<<"Enter a number: ";
  cin>>temp;

cout<<"Is the number "<<temp<<" found in the vector? "<<endl;
cout<<*(vec_find(vec,temp))<<endl;

}

vec_iter vec_find(vector<int> &vec,int num)
{
  for (vec_iter it=vec.begin();it!=vec.end();it++)
    if((*it)==num)
      return it;
  cout<<"The num could not find in the vector."<<endl;
  return vec.end();
}


