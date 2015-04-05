#ifndef STRVEC_H
#define STRVEC_H

#include <memory>
#include <utility>
#include <string>
#include <initializer_list>

class StrVec
{
  friend inline bool operator==(const StrVec&,const StrVec&);
  friend inline bool operator!=(const StrVec&,const StrVec&);
public:
  StrVec():elements(nullptr),first_free(nullptr),cap(nullptr){}
  StrVec(const StrVec &);
  StrVec &operator=(const StrVec&);
  StrVec(StrVec&&) noexcept;
  StrVec &operator=(StrVec&&) noexcept;
  StrVec &operator=(std::initializer_list<std::string>);
  ~StrVec();

  std::string& operator[](size_t n){return elements[n];}
  const std::string& operator[](size_t n)const
  {
    return elements[n];
  }

  void push_back(const std::string &);
  std::size_t size()const{return first_free-elements;}
  std::size_t capacity()const{return cap-elements;}
  std::string *begin() const{return elements;}
  std::string *end() const{return first_free;}

  void alloc_n_move(std::size_t);
  void reserve(std::size_t);
  void resize(std::size_t);
  void resize(std::size_t,const std::string &);
  std::pair<char*,char*> alloc_n_copy(const char* b,const char*e);
private:
  static std::allocator<std::string> alloc;
  void chk_n_alloc()
  {
    if(size()==capacity())
      reallocate();
  }
  std::pair<std::string *,std::string *> alloc_n_copy(const std::string *,const std::string *);
  void free();
  void reallocate();
  std::string *elements;
  std::string *first_free;
  std::string *cap;
};

void StrVec::push_back(const std::string &s)
{
  chk_n_alloc();
  alloc.construct(first_free++,s);
}

std::pair<std::string *,std::string *> StrVec::alloc_n_copy(const std::string *b,const std::string *e)
{
  auto data=alloc.allocate(e-b);
  return {data,uninitialized_copy(b,e,data)};
}

void StrVec::free()
{
  if(elements)
  {
    for(auto p=first_free;p!=elements;)
      alloc.destroy(--p);
    alloc.deallocate(elements,cap-elements);
  }
}

StrVec::StrVec(const StrVec &s)
{
  auto newdata=alloc_n_copy(s.begin(),s.end());
  elements=newdata.first;
  first_free=cap=newdata.second;
}

StrVec &StrVec::operator=(const StrVec&rhs)
{
  auto newdata=alloc_n_copy(rhs.begin(),rhs.end());
  free();
  elements=newdata.first;
  first_free=cap=newdata.second;
  return *this;
}

StrVec::StrVec(StrVec&& s) noexcept
:elements(s.elements),first_free(s.first_free),cap(s.cap)
{
  s.elements=s.first_free=s.cap=nullptr;
}

StrVec &StrVec::operator=(StrVec&& s)noexcept
{
  if(this!=&s)
  {
    free();
    elements=s.elements;
    first_free=s.first_free;
    cap=s.cap;
    s.elements=s.first_free=s.cap=nullptr;
  }
  return *this;
}

StrVec &StrVec::operator=(std::initializer_list<std::string> il)
{
  auto data=alloc_n_copy(il.begin(),il.end());
  free();
  elements=data.first;
  first_free=cap=data.second;
  return *this;
}


StrVec::~StrVec()
{
  free();
}

void StrVec::reallocate()
{
  auto newcapacity=size()?2*size():1;
  auto newdata=alloc.allocate(newcapacity);
  auto dest=newdata;
  auto elem=elements;
  for(size_t i=0;i!=size();i++)
    alloc.construct(dest++,std::move(*elem++));
  free();
  elements=newdata;
  first_free=dest;
  cap=elements+newcapacity;
}

void StrVec::alloc_n_move(std::size_t n)
{
  auto newdata=alloc.allocate(n);
  auto dest=newdata;
  auto elem=elements;
  for(std::size_t i=0;i!=size();i++)
    alloc.construct(dest++,std::move(*elem++));
  free();
  elements=newdata;
  first_free=dest;
  cap=elements+n;
}

void StrVec::reserve(std::size_t n)
{
  if(n<=capacity())
    return;
  else
    alloc_n_move(n);
}

void StrVec::resize(std::size_t n,const std::string &s)
{
  if(n>size())
  {
    if(n>capacity())
      reserve(n*2);
      for(std::size_t i=size();i!=n;i++)
        alloc.construct(first_free++,s);
   }
  else if(n<size())
  {
    while(first_free!=elements+n)
      alloc.destroy(--first_free);
  }
}

void StrVec::resize(std::size_t n)
{
  resize(n,std::string());
}

bool operator==(const StrVec& lhs,const StrVec& rhs)
{
  if(lhs.size()==rhs.size() && lhs.capacity()==rhs.capacity())
  {
    for(auto i=lhs.elements,j=rhs.elements;i!=lhs.first_free,j!=rhs.first_free;i++,j++)
    {
      if((*i)!=(*j))
        return false;
    }
    return true;
   }
  else 
    return false;
}

bool operator!=(const StrVec& lhs,const StrVec& rhs)
{
  return !(lhs==rhs);
}
   

#endif
















