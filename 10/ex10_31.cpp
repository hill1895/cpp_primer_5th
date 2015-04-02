#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  istream_iterator<int> in_it(cin),eof;
  ostream_iterator<int> out_it(cout," ");
  vector<int> vec(in_it,eof);

  sort(vec.begin(),vec.end());

  unique_copy(vec.cbegin(),vec.cend(),out_it);

  cout<<endl;

}


