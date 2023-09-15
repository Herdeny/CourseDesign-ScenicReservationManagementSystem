//
// Created by 16531 on 2023/5/25.
//

#ifndef PROGRAMMDESIGN_SQLCONNECT_H
#define PROGRAMMDESIGN_SQLCONNECT_H
#include "sqlite3.h"
#include "iostream"
#include "../program/Visitor.h"
using namespace std;

int open_SQL(sqlite3 **ppDB);
int close_SQL(sqlite3 *pDB);
int creat_visitor_table_ifn_exit(sqlite3 *pDB,char *zErrMsg);
int creat_time_table_ifn_exit(sqlite3 *pDB, char *zErrMsg);
int check_Visitor_NO(sqlite3 *pDB, int type, const QString& text);
int RegisterVisitor(sqlite3 *pDB, QString Name, QString PhoneNum, QString ID, QString Password);
bool UpdateVisitor(sqlite3 *pDB, int type, const QString &text, int Visitor_NO);
int check_capacity(sqlite3 *pDB, int hour, int year, int month, int day);
int check_occupied(sqlite3 *pDB, int hour, int year, int month, int day);
string check_Visitor(sqlite3 *pDB, int NO,int type);
int set_capacity(sqlite3 *pDB, int hour, int year, int month, int day, int newCapacity);
int set_occupied(sqlite3 *pDB, int hour, int year, int month, int day, int newOccupied);
string getNowPeriod();
#endif //PROGRAMMDESIGN_SQLCONNECT_H
