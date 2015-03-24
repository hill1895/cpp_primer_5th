#include <iostream>
using namespace std;

int call_cnt();

int main()
{
  cout<<"First call: "<<call_cnt()<<endl;
  cout<<"Second call: "<<call_cnt()<<endl;
  cout<<"Third call: "<<call_cnt()<<endl;

}

int call_cnt()
{
  static size_t cnt=0;

  if((cnt++)==0)
    return 0;
  else
    return 1;
  
}


