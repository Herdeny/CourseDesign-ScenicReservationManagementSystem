#ifndef PROGRAMMDESIGN_USER_H
#define PROGRAMMDESIGN_USER_H
#include "system.h"
class User {
protected:
    string Password;
public:
    explicit User(string);

    User();

//��ʼ��-explicit��ֹ����ת��
    bool login(string);//��¼
    bool changePassword(string);//�޸�����
};


#endif //PROGRAMMDESIGN_USER_H
