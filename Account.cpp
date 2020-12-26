//
// Created by Schiller Xu on 2020/12/13.
//
#include<iostream>
#include<string>
#include"Account.h"
using namespace std;

Account::Account(Date d, string ID) {
    day=d;
    id=ID;
}
void Account::show() const {
    cout<<"ID: "+getID()<<endl;
    cout<<"Balance: "<<getBalance()<<endl;
}
