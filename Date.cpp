//
// Created by Schiller Xu on 2020/12/13.
//
#include<iostream>
#include"Date.h"
using namespace std;

const int arr_month[12]={0,31,59,90,120,151,181,212,242,273,303,334};


Date::Date(int y,int m,int d){
    year=y;
    month=m;
    day=d;
    totalDays=365*(year-1)+int((year-1)/4)-int((year-1)/100)+int((year-1)/400)+arr_month[m-1]+d;
    if(isLeapYear()&&m>2){
        totalDays=totalDays+1;
    }
}

bool Date::isLeapYear()const{
    int year=getYear();
    if((year % 4 == 0 && year % 100 !=0)||(year % 400 ==0 )){
        return true;
    }
    else
    {
        return false;
    }
}

int Date::getMaxDay() const{
    int month=getMonth();
    if(isLeapYear() && month==2){
        return 28;
    }
    if(!isLeapYear()&& month==2){
        return 29;
    }
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        return 31;
    }
    else
    {
        return 30;
    }
}

void Date::show() const{
    cout<<"The time is:"<<getYear()<<"/"<<getMonth()<<"/"<<getDay()<<endl;
}

int Date::distance(Date d)const{
    int t=d.getTotalDays();
    int totaldays=getTotalDays();
    int result=totalDays-t;
    if(result>=0){
        return result;
    }
    else
    {
        return -result;
    }

}

