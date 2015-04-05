#ifndef HASPTR_H
#define HASPTR_H
#include <string>
#include <iostream>

class HasPtr
{
public:
  friend void swap(HasPtr&,HasPtr&);
  friend bool operator<(const HasPtr &,const HasPtr &);
  friend void print(const HasPtr &);
  HasPtr(const std::string &s=std::string()):ps(new std::string(s)),i(0){}
  HasPtr(const std::string &s,int m):ps(new std::string(s)),i(m){}
  HasPtr(const HasPtr& ptr):ps(new std::string(*ptr.ps)),i(ptr.i){}//copy constructor
  HasPtr& operator=(const HasPtr &ptr)
  {
    auto temp=new std::string(*ptr.ps);
    delete ps;//free the old pointer
    ps=temp;
    i=ptr.i;
    return *this;
  }
  ~HasPtr(){delete ps;}
private:
  std::string *ps;
  int i;
};

inline void swap(HasPtr &lhs,HasPtr &rhs)
{
  using std::swap;
  swap(lhs.ps,rhs.ps);
  swap(lhs.i,rhs.i);
  std::cout<<"call swap"<<std::endl;
}

bool operator<(const HasPtr &lhs,const HasPtr &rhs)
{
  return lhs.i<rhs.i;
}

void print(const HasPtr &ptr)
{
  std::cout<<*ptr.ps<<" "<<ptr.i<<std::endl;
}


#endif
