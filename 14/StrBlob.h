#ifndef STRBLOB_H
#define STRBLOB_H

#include <iostream>
#include <vector>
#include <memory>
#include <initializer_list>
#include <stdexcept>
#include <string>

class StrBlobPtr;

class StrBlob
{
  friend class StrBlobPtr;
  friend inline bool operator==(const StrBlob &,const StrBlob &);
  friend inline bool operator!=(const StrBlob &,const StrBlob &);
  friend inline bool operator>(const StrBlob &,const StrBlob &);
  friend inline bool operator<(const StrBlob &,const StrBlob &);
  friend inline bool operator>=(const StrBlob &,const StrBlob &);
  friend inline bool operator<=(const StrBlob &,const StrBlob &);
  

public:
  typedef std::vector<std::string>::size_type size_type;
  StrBlobPtr begin();
  StrBlobPtr end();
  StrBlob();
  StrBlob(std::initializer_list<std::string> i1);
  size_type size() const {return data->size();}
  bool empty() const {return data->empty();}
  void push_back(const std::string &t) {data->push_back(t);}
  void pop_back();
  std::string& front() const;
  std::string& back() const;
  std::string operator[](std::size_t t)const{return (*data)[t];}


private:
  std::shared_ptr<std::vector<std::string>> data;
  void check(size_type i,const std::string &msg) const;

};

class StrBlobPtr
{
  friend inline bool operator==(const StrBlobPtr &,const StrBlobPtr &);
  friend inline bool operator!=(const StrBlobPtr &,const StrBlobPtr &);
  friend inline bool operator>(const StrBlobPtr &,const StrBlobPtr &);
  friend inline bool operator<(const StrBlobPtr &,const StrBlobPtr &);
  friend inline bool operator>=(const StrBlobPtr &,const StrBlobPtr &);
  friend inline bool operator<=(const StrBlobPtr &,const StrBlobPtr &);
public:
  StrBlobPtr():curr(0){}
  StrBlobPtr(StrBlob &a,std::size_t sz=0):wptr(a.data),curr(sz){}
  std::string &deref() const;
  StrBlobPtr &incr();
  std::string operator[](std::size_t n)const;
  StrBlobPtr &operator++();
  StrBlobPtr &operator--();
  StrBlobPtr &operator++(int);
  StrBlobPtr &operator--(int);

private:
  std::shared_ptr<std::vector<std::string>> check(std::size_t,const std::string &)const;
  std::weak_ptr<std::vector<std::string>> wptr;
  bool valid() const;
  std::size_t curr;
};

//class StrBlob
StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>()){}
StrBlob::StrBlob(std::initializer_list<std::string> i1):data(std::make_shared<std::vector<std::string>>(i1)){}

bool operator==(const StrBlob &lhs,const StrBlob &rhs)
{
  return *lhs.data==*rhs.data;
}

bool operator!=(const StrBlob &lhs,const StrBlob &rhs)
{
  return !(lhs==rhs);
}

bool operator<(const StrBlob &lhs,const StrBlob &rhs)
{
  return *lhs.data<*rhs.data;
}

bool operator>(const StrBlob &lhs,const StrBlob &rhs)
{
  return *lhs.data>*rhs.data;
}

bool operator<=(const StrBlob &lhs,const StrBlob &rhs)
{
  return *lhs.data<=*rhs.data;
}

bool operator>=(const StrBlob &lhs,const StrBlob &rhs)
{
  return *lhs.data>=*rhs.data;
}


void StrBlob::check(size_type i,const std::string &msg) const
{
  if(i>=data->size())
    throw std::out_of_range(msg);
}

void StrBlob::pop_back()
{
  check(0,"pop_back on empty StrBlob");//check if the vector is empty;
  data->pop_back();
}

std::string& StrBlob::front() const
{
  check(0,"pop_back on empty StrBlob");//check if the vector is empty;
  return data->front();
}

std::string& StrBlob::back() const
{
  check(0,"pop_back on empty StrBlob");//check if the vector is empty;
  return data->back();
}

StrBlobPtr StrBlob::begin()
{
return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end()
{
  auto ret=StrBlobPtr(*this,data->size());
  return ret;
}

//Class StrBlobPtr

std::shared_ptr<std::vector<std::string>> StrBlobPtr::check(std::size_t i,const std::string &msg) const
{
  auto ret =wptr.lock();
  if(!ret)
    throw std::runtime_error("unbound_StrBlobPtr");
  if(i>=ret->size())
    throw std::out_of_range(msg);
  return ret;
}

bool StrBlobPtr::valid() const
{
  auto ret=wptr.lock();
  if(ret && curr<=ret->size())
    return true;
  else
    return false;
}

bool operator==(const StrBlobPtr &lhs,const StrBlobPtr &rhs)
{
  if(lhs.valid() && rhs.valid() &&lhs.wptr.lock()==rhs.wptr.lock())
    return lhs.curr==rhs.curr;
  else
    throw std::logic_error("StrBlobPtr incompatible");
}

bool operator!=(const StrBlobPtr &lhs,const StrBlobPtr &rhs)
{
  return !(lhs==rhs);
}

bool operator>(const StrBlobPtr &lhs,const StrBlobPtr &rhs)
{
  if(lhs.valid() && rhs.valid() &&lhs.wptr.lock()==rhs.wptr.lock())
    return lhs.curr>rhs.curr;
  else
    throw std::logic_error("StrBlobPtr incompatible");
}

bool operator<(const StrBlobPtr &lhs,const StrBlobPtr &rhs)
{
  if(lhs.valid() && rhs.valid() &&lhs.wptr.lock()==rhs.wptr.lock())
    return lhs.curr<rhs.curr;
  else
    throw std::logic_error("StrBlobPtr incompatible");
}

bool operator>=(const StrBlobPtr &lhs,const StrBlobPtr &rhs)
{
  if(lhs.valid() && rhs.valid() &&lhs.wptr.lock()==rhs.wptr.lock())
    return lhs.curr>=rhs.curr;
  else
    throw std::logic_error("StrBlobPtr incompatible");
}

bool operator<=(const StrBlobPtr &lhs,const StrBlobPtr &rhs)
{
  if(lhs.valid() && rhs.valid() &&lhs.wptr.lock()==rhs.wptr.lock())
    return lhs.curr<=rhs.curr;
  else
    throw std::logic_error("StrBlobPtr incompatible");
}

std::string StrBlobPtr::operator[](std::size_t n)const
{
  check(n,"unbound or out of range");
  auto sp=wptr.lock();
  return (*sp)[n];
}

std::string &StrBlobPtr::deref() const
{
  auto p=check(curr,"dereference past end");
  return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr()
{
  check(curr,"increment past end of StrBlobPtr");
  ++curr;
  return *this;
}
  
StrBlobPtr &StrBlobPtr::operator++()
{
  check(curr,"increment past end of StrBlobPtr");
  ++curr;
  return *this;
}

StrBlobPtr &StrBlobPtr::operator--()
{
  --curr;
  check(curr,"decrement past begin of StrBlobPtr");
  return *this;
}
 
StrBlobPtr &StrBlobPtr::operator++(int)
{
  StrBlobPtr ret=*this;
  ++*this;//check() in this step
  return ret;
}
 
StrBlobPtr &StrBlobPtr::operator--(int)
{
  StrBlobPtr ret=*this;
  --*this;//check() in this step
  return ret;
}

  
#endif




