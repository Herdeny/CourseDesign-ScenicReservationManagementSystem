#ifndef PROGRAMMDESIGN_SYSTEM_H
#define PROGRAMMDESIGN_SYSTEM_H

#include <QString>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QMainWindow>
#include "../SQLite/MD5.h"
#define DATABASE "Visitor_date.sqlite"
using namespace std;

bool checkPasswordType(const QString &Password);
bool checkPasswordLength(const QString &Password);
bool checkIDCard(QString cardNum);
bool IsValidPhoneNumber(const QString &phoneNum);
void Stringsplit(const string &str, const char *const split, vector<string> &res);

#endif //PROGRAMMDESIGN_SYSTEM_H
