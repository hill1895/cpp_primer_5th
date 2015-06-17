#include <iostream>
#include <string>
using namespace std;

template<typename T1,size_t T2> void print(T1 (&a)[T2])
{
  for(auto i:a)
    cout<<i<<" ";
}

int main()
{
  int a[6]={1,2,3,4,5,6};
  char b[4]={'a','f','e','f'};
  string c[4]={"fsag","dsa","rwegw","egwe"};

  print(a);
  cout<<endl;
  print(b);
  cout<<endl;
  print(c);
  cout<<endl;

}
  
