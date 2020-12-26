//
// Created by Schiller Xu on 2020/12/13.
//
#include<iostream>
#include<string>
#include"Date.h"
#include"Accumulator.h"
using namespace std;


Accumulator::Accumulator(Date d,double v){
    lastDate=d;
    value=v;
    sum=0;
}

void Accumulator::change(Date d,double balance,double rate){
    sum=sum+d.distance(lastDate)*balance*rate/365;
    lastDate=d;
}

