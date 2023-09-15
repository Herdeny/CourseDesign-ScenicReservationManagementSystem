//
// Created by 16531 on 2023/6/20.
//

#include "Time.h"

void Time::setYear(int year_) {
    this->year = year_;
}

void Time::setMonth(int month_) {
    this->month = month_;
}

void Time::setDay(int day_) {
    this->day = day_;
}


Time::Time(int no, int y, int m, int d, int h, int c) : tno(no), year(y), month(m), day(d), hour(h), capacity(c) {}

void Time::setCapacity(int capacity_) {
    this->capacity = capacity_;
}

int Time::getCapacity() const {
    return capacity;
}

void Time::setTno(int tno_) {
    this->tno=tno_;
}

