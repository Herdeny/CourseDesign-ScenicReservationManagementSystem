/********************************************************************************
** Form generated from reading UI file 'time_choose.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIME_CHOOSE_H
#define UI_TIME_CHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Time_choose
{
public:
    QFrame *LoginMenu;
    QLabel *Welcome_Label;
    QPushButton *Close_Button;
    QPushButton *Hide_Button;
    QPushButton *Exit_Button;
    QLabel *label;
    QComboBox *Time_comboBox;
    QLabel *Date_Label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *Visitor_ID;
    QLabel *Visitor_PhoneNum;
    QLabel *Visitor_name;
    QComboBox *Visitor_comboBox;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *Available_Account;
    QLabel *Max_Amount;
    QPushButton *Exit_Button_2;
    QLabel *Login_Menu_Image_Label;
    QLabel *Login_Menu_Image_Label_2;

    void setupUi(QWidget *Time_choose)
    {
        if (Time_choose->objectName().isEmpty())
            Time_choose->setObjectName("Time_choose");
        Time_choose->resize(952, 595);
        LoginMenu = new QFrame(Time_choose);
        LoginMenu->setObjectName("LoginMenu");
        LoginMenu->setGeometry(QRect(0, 0, 951, 591));
        LoginMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LoginMenu->setFrameShape(QFrame::NoFrame);
        LoginMenu->setFrameShadow(QFrame::Raised);
        Welcome_Label = new QLabel(LoginMenu);
        Welcome_Label->setObjectName("Welcome_Label");
        Welcome_Label->setGeometry(QRect(360, 10, 231, 61));
        Close_Button = new QPushButton(LoginMenu);
        Close_Button->setObjectName("Close_Button");
        Close_Button->setGeometry(QRect(920, 0, 31, 31));
        Close_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style:outset;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius:0px\n"
"}\n"
"\n"
"QPushButton:hover{ \n"
"	background-color: rgb(255, 0, 0);\n"
"}\n"
" \n"
"QPushButton:pressed{\n"
"	background-color: rgb(220,92,102);\n"
"}"));
        Hide_Button = new QPushButton(LoginMenu);
        Hide_Button->setObjectName("Hide_Button");
        Hide_Button->setGeometry(QRect(890, 0, 31, 31));
        Hide_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style:outset;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius:0px\n"
"}\n"
"\n"
"QPushButton:hover{ \n"
"	background-color: rgb(239, 231, 231);\n"
"}\n"
" \n"
"QPushButton:pressed{\n"
"	background-color: rgb(243,234,234);\n"
"}"));
        Exit_Button = new QPushButton(LoginMenu);
        Exit_Button->setObjectName("Exit_Button");
        Exit_Button->setGeometry(QRect(360, 530, 221, 41));
        Exit_Button->setCursor(QCursor(Qt::OpenHandCursor));
        Exit_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0076b4;\n"
"    border: 1px solid #dcdfe6;\n"
"    padding: 10px;\n"
"    border-radius: 5px;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 600 10pt \"Segoe UI Variable Text Semibold\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
""));
        label = new QLabel(LoginMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(370, 80, 41, 31));
        Time_comboBox = new QComboBox(LoginMenu);
        Time_comboBox->setObjectName("Time_comboBox");
        Time_comboBox->setGeometry(QRect(420, 130, 151, 31));
        Date_Label = new QLabel(LoginMenu);
        Date_Label->setObjectName("Date_Label");
        Date_Label->setGeometry(QRect(420, 80, 161, 31));
        label_3 = new QLabel(LoginMenu);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(370, 130, 41, 31));
        label_4 = new QLabel(LoginMenu);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(370, 180, 71, 31));
        label_6 = new QLabel(LoginMenu);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(370, 230, 71, 31));
        label_5 = new QLabel(LoginMenu);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(370, 280, 61, 31));
        label_7 = new QLabel(LoginMenu);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(370, 330, 41, 31));
        label_8 = new QLabel(LoginMenu);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(370, 380, 61, 31));
        label_9 = new QLabel(LoginMenu);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(370, 430, 81, 31));
        Visitor_ID = new QLabel(LoginMenu);
        Visitor_ID->setObjectName("Visitor_ID");
        Visitor_ID->setGeometry(QRect(450, 435, 141, 21));
        Visitor_PhoneNum = new QLabel(LoginMenu);
        Visitor_PhoneNum->setObjectName("Visitor_PhoneNum");
        Visitor_PhoneNum->setGeometry(QRect(430, 380, 151, 31));
        Visitor_name = new QLabel(LoginMenu);
        Visitor_name->setObjectName("Visitor_name");
        Visitor_name->setGeometry(QRect(420, 330, 151, 31));
        Visitor_comboBox = new QComboBox(LoginMenu);
        Visitor_comboBox->setObjectName("Visitor_comboBox");
        Visitor_comboBox->setGeometry(QRect(430, 280, 141, 31));
        label_13 = new QLabel(LoginMenu);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(480, 180, 31, 31));
        label_14 = new QLabel(LoginMenu);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(480, 230, 31, 31));
        Available_Account = new QLabel(LoginMenu);
        Available_Account->setObjectName("Available_Account");
        Available_Account->setGeometry(QRect(450, 230, 31, 31));
        Max_Amount = new QLabel(LoginMenu);
        Max_Amount->setObjectName("Max_Amount");
        Max_Amount->setGeometry(QRect(450, 180, 31, 31));
        Exit_Button_2 = new QPushButton(LoginMenu);
        Exit_Button_2->setObjectName("Exit_Button_2");
        Exit_Button_2->setGeometry(QRect(360, 470, 221, 41));
        Exit_Button_2->setCursor(QCursor(Qt::OpenHandCursor));
        Exit_Button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0076b4;\n"
"    border: 1px solid #dcdfe6;\n"
"    padding: 10px;\n"
"    border-radius: 5px;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 600 10pt \"Segoe UI Variable Text Semibold\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
""));
        Login_Menu_Image_Label = new QLabel(LoginMenu);
        Login_Menu_Image_Label->setObjectName("Login_Menu_Image_Label");
        Login_Menu_Image_Label->setGeometry(QRect(20, 30, 271, 541));
        Login_Menu_Image_Label->setStyleSheet(QString::fromUtf8(""));
        Login_Menu_Image_Label_2 = new QLabel(LoginMenu);
        Login_Menu_Image_Label_2->setObjectName("Login_Menu_Image_Label_2");
        Login_Menu_Image_Label_2->setGeometry(QRect(660, 30, 271, 541));
        Login_Menu_Image_Label_2->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(Time_choose);
        QObject::connect(Close_Button, SIGNAL(clicked()), Time_choose, SLOT(on_Close_Button_clicked()));
        QObject::connect(Hide_Button, SIGNAL(clicked()), Time_choose, SLOT(on_Hide_Button_clicked()));
        QObject::connect(Exit_Button, SIGNAL(clicked()), Time_choose, SLOT(on_Exit_Button_clicked()));

        QMetaObject::connectSlotsByName(Time_choose);
    } // setupUi

    void retranslateUi(QWidget *Time_choose)
    {
        Time_choose->setWindowTitle(QCoreApplication::translate("Time_choose", "Time_choose", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\350\257\267\351\200\211\346\213\251\351\242\204\347\272\246\346\227\266\346\256\265</span></p></body></html>", nullptr));
        Close_Button->setText(QCoreApplication::translate("Time_choose", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("Time_choose", "\342\200\224", nullptr));
        Exit_Button->setText(QCoreApplication::translate("Time_choose", "\345\217\226\346\266\210\351\242\204\347\272\246", nullptr));
        label->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\227\245\346\234\237\357\274\232</span></p></body></html>", nullptr));
        Date_Label->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\227\245\346\234\237\350\276\223\345\207\272\345\234\250\350\277\231\351\207\214</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\227\266\346\256\265\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\227\266\346\256\265\345\256\271\351\207\217\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\345\211\251\344\275\231\345\256\271\351\207\217\357\274\232</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\351\242\204\347\272\246\350\200\205\357\274\232</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\211\213\346\234\272\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232</span></p></body></html>", nullptr));
        Visitor_ID->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:10pt;\">220182200401182317</span></p></body></html>", nullptr));
        Visitor_PhoneNum->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:10pt;\">15998282926</span></p></body></html>", nullptr));
        Visitor_name->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\255\246\347\205\247\350\264\272</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\344\272\272</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\344\272\272</span></p></body></html>", nullptr));
        Available_Account->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:10pt;\">100</span></p></body></html>", nullptr));
        Max_Amount->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><span style=\" font-size:10pt;\">100</span></p></body></html>", nullptr));
        Exit_Button_2->setText(QCoreApplication::translate("Time_choose", "\351\242\204\347\272\246", nullptr));
        Login_Menu_Image_Label->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Login_Menu_Image_Label_2->setText(QCoreApplication::translate("Time_choose", "<html><head/><body><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Time_choose: public Ui_Time_choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIME_CHOOSE_H
