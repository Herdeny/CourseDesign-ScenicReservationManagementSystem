#include "User.h"

User::User(string pwd): Password(std::move(pwd)) {}

bool User::login(string pwd) {
    if (pwd.empty()){ throw "ÃÜÂë²»ÄÜÎª¿Õ£¡";}
    if (md5(pwd) == Password){
        return true;
    }else throw "ÃÜÂë´íÎó£¡";

}

User::User() {}

