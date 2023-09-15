#include "Visitor.h"
#include "../SQLite/SQLconnect.h"

void Visitor::setID(string id) {
    this->ID = std::move(id);
}

void Visitor::setPhoneNum(string phoneNum) {
    this->PhoneNum = std::move(phoneNum);
}

void Visitor::setName(string name) {
    this->Name = std::move(name);
}

void Visitor::setPassword(const string &password) {
    this->Password = password;
}

void Visitor::setPeriod(const string &per) {
    this->period = per;
}

void Visitor::initialized() {
    sqlite3 *sql;
    vector<string> strList;
    setPhoneNum(check_Visitor(sql, Visitor_NO, 1));
    setID(check_Visitor(sql, Visitor_NO, 2));
    setName(check_Visitor(sql, Visitor_NO, 3));
    setPassword(check_Visitor(sql, Visitor_NO, 4));
    setPeriod(check_Visitor(sql, Visitor_NO, 6));
    if (check_Visitor(sql, Visitor_NO, 5) == "0") return;
    string str= check_Visitor(sql, Visitor_NO, 5);
    str=str.substr(0,str.find_last_of(','));
    cout<<str;
    Stringsplit(str, ",", strList);
    for (const auto &s: strList) {
        try {
            Visitor newVisitor(stoi(s));
            newVisitor.setPhoneNum(check_Visitor(sql, newVisitor.Visitor_NO, 1));
            newVisitor.setID(check_Visitor(sql, newVisitor.Visitor_NO, 2));
            newVisitor.setName(check_Visitor(sql, newVisitor.Visitor_NO, 3));
            newVisitor.setPeriod(check_Visitor(sql, newVisitor.Visitor_NO, 6));
            Instead_Visitor.push_back(newVisitor);
        } catch (const string &exception) {
            cerr << exception << endl;
        }
    }
}

Visitor::Visitor(int no) : Visitor_NO(no) {

}

Visitor::Visitor() {

}

void Visitor::setNO(int no) {
    this->Visitor_NO = no;
}

string Visitor::getName() const {
    return Name;
}

string Visitor::getPhoneNum() const {
    return PhoneNum;
}

string Visitor::getID() const {
    return ID;
}

string Visitor::getPeriod() const {
    return period;
}

vector<Visitor> &Visitor::getInstead() {
    return this->Instead_Visitor;
}

int Visitor::compare_Period(const string &per) const {
    vector<string> strList1, strList2;
    Stringsplit(period, "_", strList1);
    Stringsplit(per, "_", strList2);
    for (int i = 0; i < 4; ++i) {
        cout << stoi(strList1[i]) << "   " << stoi(strList2[i]) << endl;
        if (stoi(strList1[i]) != stoi(strList2[i])) return stoi(strList1[i]) - stoi(strList2[i]);
    }
    return 0;
}

int Visitor::getNO() const {
    return Visitor_NO;
}

void Visitor::removeInstead(int no) {
    for (int i=0;i<Instead_Visitor.size();i++) {
        if (Instead_Visitor[i].getNO() == no) {
            Instead_Visitor.erase(Instead_Visitor.begin()+i);
            break;
        }
    }
}

string Visitor::Instead_to_string() {
    string string1;
    for (auto const& i:Instead_Visitor) {
        string1+=std::to_string(i.getNO());
        string1+=',';
    }
    return string1;
}



