#ifndef PROGRAMMDESIGN_ADMIN_H
#define PROGRAMMDESIGN_ADMIN_H
#include "User.h"
#include "Visitor.h"
#include "Time.h"

class Admin: public User{
private:
    string Username;
//    vector<Visitor> visitor_;//�洢�����ο���Ϣ
    vector<Time> time_;//�洢����ʱ����Ϣ
public:
    explicit Admin(string="root",string="root");
    bool setVisitor_();//��ʼ���ο���Ϣ
    bool insertVisitor();//�����ο���Ϣ
    bool deleteVisitor();//ɾ���ο���Ϣ
    bool updateVisitor();//�޸��ο���Ϣ
//    vector<Visitor>& getVisitor_();//��ȡ�ο���Ϣ
};


#endif //PROGRAMMDESIGN_ADMIN_H
