#include <iostream>
#include <vector>
using namespace std;

vector<int> *vector_alloc();
void vector_read(vector<int>*);
void vector_print(vector<int>*);

int main()
{
  vector<int> *vec_p=vector_alloc();
  vector_read(vec_p);
  vector_print(vec_p);

  delete vec_p;

}

vector<int> *vector_alloc()
{
  return new vector<int>();
}

void vector_read(vector<int> *vec_p)
{
  int i;
  while(cin>>i)
    vec_p->push_back(i);
}

void vector_print(vector<int> *vec_p)
{
  for(const auto &i:*vec_p)
    cout<<i<<" ";
  cout<<endl;
}




