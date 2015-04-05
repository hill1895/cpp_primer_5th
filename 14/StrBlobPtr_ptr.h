#ifndef STRBLOBPTR_PTR_H
#define STRBLOBPTR_PTR_H

class StrBlobPtr;

class StrBlobPtr_ptr
{
public:
  StrBlobPtr_ptr()=default;
  StrBlobPtr_ptr(StrBlobPtr *p):pointer(p){}

  StrBlobPtr &operator*()const
  {
    return *(this->pointer);
  }
  StrBlobPtr *operator->()const
  {
    return &this->operator*();
  }

private:
  StrBlobPtr *pointer=nullptr;
};



#endif


