//
// Created by Schiller Xu on 2020/12/26.
//
#include <iostream>
#include "SavingsAccount.h"

using namespace std;

SavingsAccount::SavingsAccount(Date d, string ID, double r):Account(d,ID){
    setRate(r);
    setBalance(0);
    Accumulator accumulator(d,0);
    acc=accumulator;
}

void SavingsAccount::record(Date d, double amount){
    double rate=getRate();
    double balance=getBalance();
    acc.change(d,balance,rate);
    amount=floor(amount*100+0.5)/100;
    setBalance(balance+amount);
    d.show();
    cout<<"ID\tamount\tbalance"<<endl;
    cout<<"#"<<getID()<<"\t"<<amount<<"\t"<<getBalance()<<endl;
}

void SavingsAccount::deposit(Date d, double amount) {
    record(d,amount);
}

void SavingsAccount::withdraw(Date d, double amount) {
    double bal=getBalance();
    if(amount>bal){
        cout<<"Error: not enough money!"<<endl;
    } else{
        record(d,amount);
    }
}

void SavingsAccount::settle(Date d) {
    double interest=acc.getSum();
    record(d,interest);
}