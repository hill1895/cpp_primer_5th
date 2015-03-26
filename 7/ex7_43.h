#ifndef EX7_43_H
#define EX7_43_H

class NoDefault{
public:
  NoDefault(int);
};

class C{
public:
  C():mem(0){};
private:
  NoDefault mem;
};

#endif
