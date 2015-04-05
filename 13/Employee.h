#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
public:
  Employee();
  Employee(const std::string & s):name(s){num++;}
  Employee(const Employee &)=delete;
  Employee operator=(const Employee &)=delete;
private:
  std::string name;
  static int num;
};

#endif
