#ifndef PROGRAMMDESIGN_ADMIN_H
#define PROGRAMMDESIGN_ADMIN_H
#include "User.h"
#include "Visitor.h"
#include "Time.h"

class Admin: public User{
private:
    string Username;
//    vector<Visitor> visitor_;//存储所有游客信息
    vector<Time> time_;//存储所有时间信息
public:
    explicit Admin(string="root",string="root");
    bool setVisitor_();//初始化游客信息
    bool insertVisitor();//新增游客信息
    bool deleteVisitor();//删除游客信息
    bool updateVisitor();//修改游客信息
//    vector<Visitor>& getVisitor_();//获取游客信息
};


#endif //PROGRAMMDESIGN_ADMIN_H
