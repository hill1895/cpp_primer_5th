#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main()
{
  Date d1("1/1/1990"); 
  Date_print(d1);
  Date d2("Feb 11 2014");
  Date_print(d2);
  Date d3("March 23 2015");
  Date_print(d3);
}
