#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account{
public:
  void calculate(){amount+=amount*interestRate;}
  static double rate(){return interestRate;}
  static void rate(double newRate){interestRate=newRate;}

private:
  std::string owner;
  double amount;
  static double interestRate;
  static constexpr double rateToday=0.05;
  static double initRate(){return rateToday;}
 };

double Account::interestRate=initRate();

#endif
