#include "User.h"

User::User(string pwd): Password(std::move(pwd)) {}

bool User::login(string pwd) {
    if (pwd.empty()){ throw "���벻��Ϊ�գ�";}
    if (md5(pwd) == Password){
        return true;
    }else throw "�������";

}

User::User() {}

