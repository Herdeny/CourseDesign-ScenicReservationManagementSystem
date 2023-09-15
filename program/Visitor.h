#ifndef PROGRAMMDESIGN_VISITOR_H
#define PROGRAMMDESIGN_VISITOR_H

#include "system.h"
#include "User.h"

class Visitor: public User{
private:
    int Visitor_NO;//�οʹ���
    string period;//ʱ���
    string ID;//���֤��
    string PhoneNum;//�ֻ���
    string Name;//����
    vector<Visitor> Instead_Visitor;//��ԤԼ�ο�
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
