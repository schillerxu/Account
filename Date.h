//
// Created by Schiller Xu on 2020/12/13.
//

#ifndef UNTITLED_DATE_H
#define UNTITLED_DATE_H
class Date{
public:
    Date() {};
    Date(int year,int month,int day);
    ~Date() {};
    int getYear() const { return year;};
    int getMonth() const {return month;};
    int getDay() const { return day;};
    int getTotalDays() const {return totalDays;}
    int getMaxDay() const;
    bool isLeapYear() const;
    void show() const;
    int distance(Date d) const;
private:
    int year;
    int month;
    int day;
    int totalDays;
};
#endif //UNTITLED_DATE_H
