#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person;
std::istream &read(std::istream &,Person &);

class Person{
  friend std::istream &read(std::istream &,Person &);
  friend std::ostream &print(std::ostream &,const Person &);

public:
  Person()=default;
  Person(const std::string &n,const std::string &add):name(n),address(add){}
  explicit Person(std::istream &is){read(is,*this);}

  std::string getName() const{return name;}
  std::string getAddress() const{return address;}
private:
  std::string name;
  std::string address;
};

std::istream &read(std::istream &is,Person &who)
{
  is>>who.name>>who.address;
  return is;
}

std::ostream &print(std::ostream &os,const Person &who)
{
  os<<who.name<<" "<<who.address;
  return os;
}


#endif

