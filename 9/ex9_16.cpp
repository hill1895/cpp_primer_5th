#include <iostream>
#include <vector>
#include <list>
using namespace std;

bool vec_list_cmp(const vector<int> &,const list<int> &);

int main()
{
  vector<int> vec{1,2,3,4,5};
  list<int> list1{1,2,3,4,5};
  list<int> list2{1,2,3,4,5,6};
  list<int> list3{1,3,5,6,7};

  cout<<"vec==list1? "<<(vec_list_cmp(vec,list1)?"true":"false")<<endl;
  cout<<"vec==list2? "<<(vec_list_cmp(vec,list2)?"true":"false")<<endl;
  cout<<"vec==list3? "<<(vec_list_cmp(vec,list3)?"true":"false")<<endl;

}

bool vec_list_cmp(const vector<int> &vec,const list<int> &ls)
{
  vector<int> temp(ls.cbegin(),ls.cend());

  return (vec==temp);
}

