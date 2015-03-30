#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  vector<string> vec{"1","2","3","4","5","6"},vec1{"4.56","2.67","253.67","24.78"};

  int sum=0;
  double dsum=0.0;

  for(auto it=vec.cbegin();it!=vec.cend();it++)
    sum+=stoi(*it);


  cout<<"sum of int: "<<sum<<endl;

  for(auto it=vec1.cbegin();it!=vec1.cend();it++)
    dsum+=stod(*it);

  cout<<"sum of double: "<<dsum<<endl;

}

