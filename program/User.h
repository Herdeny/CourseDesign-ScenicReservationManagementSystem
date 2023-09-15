#ifndef PROGRAMMDESIGN_USER_H
#define PROGRAMMDESIGN_USER_H
#include "system.h"
class User {
protected:
    string Password;
public:
    explicit User(string);

    User();

//初始化-explicit放止隐形转换
    bool login(string);//登录
    bool changePassword(string);//修改密码
};


#endif //PROGRAMMDESIGN_USER_H
