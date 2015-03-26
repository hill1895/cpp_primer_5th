#include <iostream>
#include <string>
#include "Sales_data.h"
using namespace std;

int main()
{
  Sales_data item1,item2("2345-2425-53"),item3("2425-6464-1245",45,9.9),item4(cin);

  print(cout,item1)<<endl;
  print(cout,item2)<<endl;
  print(cout,item3)<<endl;
  print(cout,item4)<<endl;
}

