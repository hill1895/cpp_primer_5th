#include <iostream>
#include "Basket.h"
using namespace std;

int main()
{
  Basket basket;

  basket.add_item(Quote("feg-421",40));
  basket.add_item(Bulk_quote("fsgr-<F3>423",40,10,0.25));

 basket.total_receipt(cout);
}



  
