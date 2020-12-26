#include <iostream>
#include "SavingsAccount.h"

using namespace std;

int main() {
    Date d1(2020,3,1);
    Date d2(2020,3,6);
    SavingsAccount sa0(d1,"01",0.015);
    sa0.show();
    sa0.deposit(d2,5000);
    sa0.show();
    Date d3(2020,5,1);
    Date d4(2020,10,1);
    sa0.deposit(d3,5000);
    sa0.settle(d4);
    return 0;
}
