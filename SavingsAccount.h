//
// Created by Schiller Xu on 2020/12/26.
//

#ifndef ACCOUNT_SAVINGSACCOUNT_H
#define ACCOUNT_SAVINGSACCOUNT_H
#include <string>
#include "Accumulator.h"
#include "Account.h"

using namespace std;

class SavingsAccount: public Account{
public:
    SavingsAccount( Date d, string ID, double r);
    ~SavingsAccount() {};
    double getRate() const {return rate;};
    void setRate(double r) {rate=r;};
    void deposit(Date d,double amount);
    void withdraw(Date d,double amount);
    void settle(Date d);
    void record(Date d,double amount);
private:
    Accumulator acc;
    double rate;
};

#endif //ACCOUNT_SAVINGSACCOUNT_H
