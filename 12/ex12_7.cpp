#include <iostream>
#include <memory>
#include <vector>
using namespace std;

shared_ptr<vector<int>> vector_alloc();
void vector_read(shared_ptr<vector<int>>);
void vector_print(shared_ptr<vector<int>>);

int main()
{
  shared_ptr<vector<int>> vec_p=vector_alloc();
  vector_read(vec_p);
  vector_print(vec_p);
}

shared_ptr<vector<int>> vector_alloc()
{
  return make_shared<vector<int>>();
}

void vector_read(shared_ptr<vector<int>> vec_p)
{
  int i;
  while(cin>>i)
    vec_p->push_back(i);
}

void vector_print(shared_ptr<vector<int>> vec_p)
{
  for(const auto &i:*vec_p)
    cout<<i<<" ";
  cout<<endl;
}




