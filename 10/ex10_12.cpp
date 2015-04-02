#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include "../7/Sales_data.h"
using namespace std;

bool compareISBN(const Sales_data &,const Sales_data &);

int main()
{
  fstream input("data/book_sales");
  vector<Sales_data> books;

  Sales_data temp;

  while(read(input,temp))
    books.push_back(temp);

  stable_sort(books.begin(),books.end(),compareISBN);

  for(auto &i:books)
    print(cout,i)<<endl;

}

bool compareISBN(const Sales_data &s1,const Sales_data &s2)
{
  return s1.isbn()<s2.isbn();
}
    
   

