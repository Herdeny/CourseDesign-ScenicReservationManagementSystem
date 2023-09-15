#ifndef PROGRAMMDESIGN_TIME_H
#define PROGRAMMDESIGN_TIME_H

#include "ctime"
class Time {
private:
    int tno;
    int year;
    int month;
    int day;
    int hour;
    int capacity=0;//ÈÝÁ¿
public:
    Time(int,int,int,int,int,int);
    void setTno(int);
    void setYear(int);
    void setMonth(int);
    void setDay(int);
    void setCapacity(int);
    int getCapacity() const;
};


#endif //PROGRAMMDESIGN_TIME_H
