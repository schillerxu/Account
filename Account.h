//
// Created by Schiller Xu on 2020/12/13.
//

#ifndef UNTITLED_ACCOUNT_H
#define UNTITLED_ACCOUNT_H
#include<string>
#include"Date.h"
using namespace std;

class Account
{
private:
    string id;
    double balance;
    double total;
    Date day;
public:
//    Account();
//    Account(Date d,string ID);
    ~Account() {};
    string getID() const {return id;};
    double getBalance() const {return balance;};
    double getTotal() const {return total;};
    void setBalance(double b) { balance=b;};
    void setID(string ID) {id=ID;};
    void setDate(Date d) {day=d;};
    void show() const;
protected:
    Account(Date d,string ID);
    void record(Date d,double amount);
    void error(string msg);
};
#endif //UNTITLED_ACCOUNT_H
