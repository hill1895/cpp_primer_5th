#include <iostream>
#include "Quote.h"
using namespace std;

int main()
{
  Quote qt("2536-25236-435",16.4);
  Bulk_quote bk("2536-25236-435",16.4,15,0.2);
  Disc_quote disc("2536-25236-435",16.4,15,0.2);
  cout<<print_total(cout,qt,25)<<endl;
  cout<<print_total(cout,bk,25)<<endl;
  cout<<print_total(cout,disc,25)<<endl;

}

