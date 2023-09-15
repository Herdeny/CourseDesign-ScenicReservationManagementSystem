#include "Admin.h"

Admin::Admin(string name,string pwd):Username(std::move(name)), User(pwd){}

bool Admin::setVisitor_() {

    return true;
}
