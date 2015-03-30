#include <iostream>
#include <vector>
using namespace std;
using vec_iter=vector<int>::iterator;

bool vec_find(vector<int>&,int);

int main()
{
  vector<int> vec={1,2,3,4,5,6,7,8,9,10,11,12};
  int temp;

  cout<<"Enter a number: ";
  cin>>temp;

cout<<"Is the number"<<temp<<" found in the vector? "<<static_cast<bool>(vec_find(vec,temp))<<endl;

}


bool vec_find(vector<int> &vec,int num)
{
  for (vec_iter it=vec.begin();it!=vec.end();it++)
    if((*it)==num)
      return true;
  return false;
}


