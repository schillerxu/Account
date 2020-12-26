//
// Created by Schiller Xu on 2020/12/13.
//

#ifndef UNTITLED_ACCUMULATOR_H
#define UNTITLED_ACCUMULATOR_H
#include"Date.h"

class Accumulator
{
private:
    Date lastDate;
    double value;
    double sum;
public:
    Accumulator() {};
    Accumulator(Date d,double value);
    ~Accumulator() {};
    double getSum() const {return sum;};
    void change(Date d,double balance,double rate);
    void setSum(double s) {sum=s;};
    void reset(Date d,double value);
};
#endif //UNTITLED_ACCUMULATOR_H
