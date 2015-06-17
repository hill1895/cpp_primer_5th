#ifndef STRBLOB_H
#define STRBLOB_H

#include <iostream>
#include <vector>
#include <memory>
#include <initializer_list>
#include <stdexcept>
#include <string>

template<typename > class StrBlobPtr;

template<typename T>
class StrBlob
{
public:
  typedef typename std::vector<T>::size_type size_type;
  friend class StrBlobPtr<T>;
  StrBlobPtr<T> begin();
  StrBlobPtr<T> end();
  StrBlob();
  StrBlob(std::initializer_list<T> i1);

  StrBlob(const StrBlob &sb):data(std::make_shared<std::vector<T>>(*sb.data)){}
  StrBlob &operator=(const StrBlob &);

  size_type size() const {return data->size();}
  bool empty() const {return data->empty();}
  void push_back(const T &t) {data->push_back(t);}
  void pop_back();
  T& front() const;
  T& back() const;

private:
  std::shared_ptr<std::vector<T>> data;
  void check(size_type i,const std::string &msg) const;

};

template<typename T> 
class StrBlobPtr
{
public:
  StrBlobPtr():curr(0){}
  StrBlobPtr(StrBlob<T> &a,std::size_t sz=0):wptr(a.data),curr(sz){}
  T &deref() const;
  StrBlobPtr &incr();
private:
  std::shared_ptr<std::vector<T>> check(std::size_t,const std::string&)const;
  std::weak_ptr<std::vector<T>> wptr;
  std::size_t curr;
};

//class StrBlob
template<typename T> StrBlob<T>::StrBlob(): data(std::make_shared<std::vector<T>>()){}
template<typename T> StrBlob<T>::StrBlob(std::initializer_list<T> i1):data(std::make_shared<std::vector<T>>(i1)){}

template<typename T> StrBlob<T> &StrBlob<T>::operator=(const StrBlob<T> &sb)
{
  data=std::make_shared<std::vector<T>>(*sb.data);
  return *this;
}

template<typename T> void StrBlob<T>::check(size_type i,const std::string &msg) const
{
  if(i>=data->size())
    throw std::out_of_range(msg);
}

template<typename T>void StrBlob<T>::pop_back()
{
  check(0,"pop_back on empty StrBlob");//check if the vector is empty;
  data->pop_back();
}

template<typename T> T& StrBlob<T>::front() const
{
  check(0,"pop_back on empty StrBlob");//check if the vector is empty;
  return data->front();
}

template<typename T> T& StrBlob<T>::back() const
{
  check(0,"pop_back on empty StrBlob");//check if the vector is empty;
  return data->back();
}

template<typename T> StrBlobPtr<T> StrBlob<T>::begin()
{
return StrBlobPtr<T>(*this);
}
template<typename T> StrBlobPtr<T> StrBlob<T>::end()
{
  auto ret=StrBlobPtr<T>(*this,data->size());
  return ret;
}

//Class StrBlobPtr

template<typename T> std::shared_ptr<std::vector<T>> StrBlobPtr<T>::check(std::size_t i,const std::string &msg) const
{
  auto ret =wptr.lock();
  if(!ret)
    throw std::runtime_error("unbound_StrBlobPtr");
  if(i>=ret->size())
    throw std::out_of_range(msg);
  return ret;
}

template<typename T> T& StrBlobPtr<T>::deref() const
{
  auto p=check(curr,"dereference past end");
  return (*p)[curr];
}

template<typename T> StrBlobPtr<T>& StrBlobPtr<T>::incr()
{
  check(curr,"increment past end of StrBlobPtr");
  ++curr;
  return *this;
}
  
  
#endif




