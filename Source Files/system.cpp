#include "../program/system.h"
#include "../SQLite/SQLconnect.h"
bool checkIDCard(QString cardNum) {
    if (cardNum.length() != 18) return false;

    //加权因子
    int weight[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    //校验码表
    char validateCodes[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int sum = 0;
    for (int i = 0; i < 17; i++) {
        sum = sum + (cardNum.at(i).digitValue()) * weight[i];
    }
    int mod = sum % 11;
    if (mod == 2) {
        return validateCodes[mod] == 'x' || validateCodes[mod] == 'X';
    }
    return validateCodes[mod] == cardNum[17];
}
bool checkPasswordType(const QString &Password){
    QRegularExpression rP(R"(^(?=.*[a-zA-Z])(?=.*\d).{3,16}$)");
    QRegularExpressionValidator regs(rP, 0);
    QString pNum = Password;
    int pos = 0;
    QValidator::State res = regs.validate(pNum, pos);
    if (QValidator::Acceptable == res) {
        return true;
    } else {
        return false;
    }
}
bool checkPasswordLength(const QString &Password){
    QRegularExpression rP("^.{3,16}$");
    QRegularExpressionValidator regs(rP, 0);
    QString pNum = Password;
    int pos = 0;
    QValidator::State res = regs.validate(pNum, pos);
    if (QValidator::Acceptable == res) {
        return true;
    } else {
        return false;
    }
}
bool IsValidPhoneNumber(const QString &phoneNum) {

    //手机号
    QRegularExpression rC("^1([358][0-9]|4[579]|66|7[0135678]|9[89])[0-9]{8}$");
    QRegularExpressionValidator regs(rC,0);
    QString pNum = phoneNum;
    int pos=0;
    QValidator::State res = regs.validate(pNum,pos);
    if (QValidator::Acceptable == res) {

        return true;
    } else {
        return false;
    }
}
// 使用字符分割
void Stringsplit(const string &str, const char *const split, vector<string> &res) {
    if (str == "") return;
    //在字符串末尾也加入分隔符，方便截取最后一段
    string strs = str + split;
    size_t pos = strs.find(split);

    // 若找不到内容则字符串搜索函数返回 npos
    while (pos != strs.npos) {
        string temp = strs.substr(0, pos);
        res.push_back(temp);
        //去掉已分割的字符串,在剩下的字符串中进行分割
        strs = strs.substr(pos + 1, strs.size());
        pos = strs.find(split);
    }
}
