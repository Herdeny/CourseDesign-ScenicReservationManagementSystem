/********************************************************************************
** Form generated from reading UI file 'admin_choose_time.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_CHOOSE_TIME_H
#define UI_ADMIN_CHOOSE_TIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_choose_time
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
    QLabel *label_13;
    QLabel *label_14;
    QLabel *Available_Account;
    QPushButton *Exit_Button_2;
    QLabel *Login_Menu_Image_Label;
    QLabel *Login_Menu_Image_Label_2;
    QSpinBox *spinBox;
    QPushButton *Exit_Button_3;

    void setupUi(QWidget *admin_choose_time)
    {
        if (admin_choose_time->objectName().isEmpty())
            admin_choose_time->setObjectName("admin_choose_time");
        admin_choose_time->resize(951, 591);
        LoginMenu = new QFrame(admin_choose_time);
        LoginMenu->setObjectName("LoginMenu");
        LoginMenu->setGeometry(QRect(0, 0, 951, 591));
        LoginMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LoginMenu->setFrameShape(QFrame::NoFrame);
        LoginMenu->setFrameShadow(QFrame::Raised);
        Welcome_Label = new QLabel(LoginMenu);
        Welcome_Label->setObjectName("Welcome_Label");
        Welcome_Label->setGeometry(QRect(360, 70, 231, 61));
        Close_Button = new QPushButton(LoginMenu);
        Close_Button->setObjectName("Close_Button");
        Close_Button->setGeometry(QRect(910, 0, 31, 31));
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
        Hide_Button->setGeometry(QRect(880, 0, 31, 31));
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
        Exit_Button->setGeometry(QRect(360, 480, 241, 41));
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
        label->setGeometry(QRect(370, 140, 41, 31));
        Time_comboBox = new QComboBox(LoginMenu);
        Time_comboBox->setObjectName("Time_comboBox");
        Time_comboBox->setGeometry(QRect(420, 190, 151, 31));
        Time_comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 255, 250);\n"
"padding-left:10px"));
        Date_Label = new QLabel(LoginMenu);
        Date_Label->setObjectName("Date_Label");
        Date_Label->setGeometry(QRect(420, 140, 161, 31));
        label_3 = new QLabel(LoginMenu);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(370, 190, 41, 31));
        label_4 = new QLabel(LoginMenu);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(370, 240, 71, 31));
        label_6 = new QLabel(LoginMenu);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(370, 290, 71, 31));
        label_13 = new QLabel(LoginMenu);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(510, 240, 121, 31));
        label_14 = new QLabel(LoginMenu);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(480, 290, 31, 31));
        Available_Account = new QLabel(LoginMenu);
        Available_Account->setObjectName("Available_Account");
        Available_Account->setGeometry(QRect(450, 290, 31, 31));
        Exit_Button_2 = new QPushButton(LoginMenu);
        Exit_Button_2->setObjectName("Exit_Button_2");
        Exit_Button_2->setGeometry(QRect(360, 350, 241, 41));
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
        Login_Menu_Image_Label->setGeometry(QRect(20, 30, 271, 561));
        Login_Menu_Image_Label->setStyleSheet(QString::fromUtf8(""));
        Login_Menu_Image_Label_2 = new QLabel(LoginMenu);
        Login_Menu_Image_Label_2->setObjectName("Login_Menu_Image_Label_2");
        Login_Menu_Image_Label_2->setGeometry(QRect(660, 30, 271, 561));
        Login_Menu_Image_Label_2->setStyleSheet(QString::fromUtf8(""));
        spinBox = new QSpinBox(LoginMenu);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(450, 240, 51, 31));
        Exit_Button_3 = new QPushButton(LoginMenu);
        Exit_Button_3->setObjectName("Exit_Button_3");
        Exit_Button_3->setGeometry(QRect(360, 410, 241, 41));
        Exit_Button_3->setCursor(QCursor(Qt::OpenHandCursor));
        Exit_Button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(admin_choose_time);
        QObject::connect(Time_comboBox, SIGNAL(textActivated(QString)), admin_choose_time, SLOT(on_Time_combox_changed()));
        QObject::connect(Close_Button, SIGNAL(clicked()), admin_choose_time, SLOT(on_Close_Button_clicked()));
        QObject::connect(Hide_Button, SIGNAL(clicked()), admin_choose_time, SLOT(on_Hide_Button_clicked()));
        QObject::connect(Exit_Button, SIGNAL(clicked()), admin_choose_time, SLOT(on_Close_Button_clicked()));
        QObject::connect(Exit_Button_2, SIGNAL(clicked()), admin_choose_time, SLOT(on_change_Button_clicked()));
        QObject::connect(Exit_Button_3, SIGNAL(clicked()), admin_choose_time, SLOT(on_change_all_Button_clicked()));

        QMetaObject::connectSlotsByName(admin_choose_time);
    } // setupUi

    void retranslateUi(QWidget *admin_choose_time)
    {
        admin_choose_time->setWindowTitle(QCoreApplication::translate("admin_choose_time", "admin_choose_time", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("admin_choose_time", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\350\257\267\351\200\211\346\213\251\344\277\256\346\224\271\346\227\266\346\256\265</span></p></body></html>", nullptr));
        Close_Button->setText(QCoreApplication::translate("admin_choose_time", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("admin_choose_time", "\342\200\224", nullptr));
        Exit_Button->setText(QCoreApplication::translate("admin_choose_time", "\345\217\226\346\266\210\344\277\256\346\224\271", nullptr));
        label->setText(QCoreApplication::translate("admin_choose_time", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\227\245\346\234\237\357\274\232</span></p></body></html>", nullptr));
        Date_Label->setText(QCoreApplication::translate("admin_choose_time", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\227\245\346\234\237\350\276\223\345\207\272\345\234\250\350\277\231\351\207\214</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("admin_choose_time", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\227\266\346\256\265\357\274\232</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("admin_choose_time", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\227\266\346\256\265\345\256\271\351\207\217\357\274\232</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("admin_choose_time", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\351\242\204\347\272\246\344\272\272\346\225\260\357\274\232</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("admin_choose_time", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\344\272\272\357\274\210\345\210\240\351\231\244\350\257\267\345\241\2530\357\274\211</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("admin_choose_time", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\344\272\272</span></p></body></html>", nullptr));
        Available_Account->setText(QCoreApplication::translate("admin_choose_time", "<html><head/><body><p><span style=\" font-size:10pt;\">100</span></p></body></html>", nullptr));
        Exit_Button_2->setText(QCoreApplication::translate("admin_choose_time", "\344\277\256\346\224\271", nullptr));
        Login_Menu_Image_Label->setText(QCoreApplication::translate("admin_choose_time", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Login_Menu_Image_Label_2->setText(QCoreApplication::translate("admin_choose_time", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Exit_Button_3->setText(QCoreApplication::translate("admin_choose_time", "\345\205\250\351\203\250\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_choose_time: public Ui_admin_choose_time {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_CHOOSE_TIME_H
