#include <iostream>
#include <fstream>
#include <iterator>
using namespace std;

int main()
{
  ifstream input("data/absInt",ifstream::in);
  ofstream odd("odd",ofstream::out),even("even",ofstream::out);

  istream_iterator<int> it(input),eof;
  ostream_iterator<int> odd_it(odd," "),even_it(even,"\n");

  while(it!=eof)
  {
    if((*it)%2)
      odd_it=*it;
    else
      even_it=*it;
    it++;
  
  }

}

