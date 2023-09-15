#ifndef PROGRAMMDESIGN_VISITOR_H
#define PROGRAMMDESIGN_VISITOR_H

#include "system.h"
#include "User.h"

class Visitor: public User{
private:
    int Visitor_NO;//游客代号
    string period;//时间段
    string ID;//身份证号
    string PhoneNum;//手机号
    string Name;//姓名
    vector<Visitor> Instead_Visitor;//代预约游客
public:
    explicit Visitor();
    explicit Visitor(int);
    void setNO(int);
    void setID(string);
    void setPhoneNum(string);
    void setName(string);
    void setPassword(const string&);
    void setPeriod(const string&);
    void initialized();
    int getNO()const;
    string getName() const;
    string getPhoneNum() const;
    string getID() const;
    string getPeriod()const;
    int compare_Period(const string&)const;
    vector<Visitor>& getInstead();
    void removeInstead(int Visitor_NO);
    string Instead_to_string();
};


#endif //PROGRAMMDESIGN_VISITOR_H
