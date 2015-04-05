#include <iostream>
#include <vector>
#include <algorithm>
#include "HasPtr.h"
using std::cout;using std::endl;using std::vector;

int main()
{
  vector<HasPtr> ptrs{HasPtr("aa",5),HasPtr("zf",4),HasPtr("gf",24),HasPtr("a",5)};

  sort(ptrs.begin(),ptrs.end());//use operator < to sort

  for(auto &i:ptrs)
    print(i);

}
