#include <iostream>
#include <fstream>
#include <string>
#include "Sales_data.h"
using namespace std;

int main(int argc,char *argv[])
{
  ifstream input(argv[1]);//   file location:data/add_item
  ofstream output(argv[2],ofstream::app);// output file: item_out1
  Sales_data total;
  if(read(input,total))
  {
    Sales_data trans;
    while(read(input,trans))
    {
      if(total.isbn()==trans.isbn())
        total.combine(trans);
      else
      {
        print(output,total)<<endl;
        total=trans;
      }
    }
    print(output,total)<<endl;
  }
  else
    cerr<<"No data!"<<endl;


}

