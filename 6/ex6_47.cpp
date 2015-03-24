#include <iostream>
#include <vector>
using namespace std;

void vectorprt(vector<int>::iterator,vector<int>::iterator);

int main()
{
  vector<int> a{1,2,3,4,5,6,7,8,9};

  vector<int>::iterator beg=a.begin(),end=a.end();

  vectorprt(beg,end);

  cout<<endl;

}

void vectorprt(vector<int>::iterator beg,vector<int>::iterator end)
{
  if(beg!=end)
  {
    cout<<*beg<<" ";
    vectorprt(beg+1,end);
  }
}

