#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec1={1,2,3};
  vector<int> vec2={1,2,3};

  if(vec1==vec2)
    cout<<"The two vectors are equal."<<endl;
  else
    cout<<"The two vectors are not eqaul."<<endl;
}
