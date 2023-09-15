/********************************************************************************
** Form generated from reading UI file 'add_old.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_OLD_H
#define UI_ADD_OLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_old
{
public:
    QFrame *LoginMenu;
    QLineEdit *Input_Account_EditText;
    QPushButton *Login;
    QLabel *Welcome_Label;
    QLabel *Wrong_Account_Label;
    QLabel *Login_Menu_Image_Label;
    QPushButton *Close_Button;
    QPushButton *Hide_Button;
    QLabel *Not_Input_Account_Label;
    QLabel *Not_Input_Password_Label;
    QLineEdit *Input_Password_EditText;
    QLabel *Wrong_Password_Label;
    QLabel *Not_Exist_Account_Label;
    QPushButton *Login_Button_2;

    void setupUi(QWidget *add_old)
    {
        if (add_old->objectName().isEmpty())
            add_old->setObjectName("add_old");
        add_old->resize(631, 393);
        LoginMenu = new QFrame(add_old);
        LoginMenu->setObjectName("LoginMenu");
        LoginMenu->setGeometry(QRect(0, 0, 631, 391));
        LoginMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LoginMenu->setFrameShape(QFrame::NoFrame);
        LoginMenu->setFrameShadow(QFrame::Raised);
        Input_Account_EditText = new QLineEdit(LoginMenu);
        Input_Account_EditText->setObjectName("Input_Account_EditText");
        Input_Account_EditText->setGeometry(QRect(220, 150, 371, 41));
        Input_Account_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_Account_EditText->setFrame(false);
        Input_Account_EditText->setClearButtonEnabled(true);
        Login = new QPushButton(LoginMenu);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(220, 290, 201, 41));
        Login->setCursor(QCursor(Qt::ArrowCursor));
        Login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0076b4;\n"
"    border: 1px solid #dcdfe6;\n"
"    padding: 10px;\n"
"    border-radius: 5px;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"\351\273\221\344\275\223\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
""));
        Welcome_Label = new QLabel(LoginMenu);
        Welcome_Label->setObjectName("Welcome_Label");
        Welcome_Label->setGeometry(QRect(220, 60, 351, 61));
        Wrong_Account_Label = new QLabel(LoginMenu);
        Wrong_Account_Label->setObjectName("Wrong_Account_Label");
        Wrong_Account_Label->setGeometry(QRect(230, 140, 221, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(11);
        Wrong_Account_Label->setFont(font);
        Wrong_Account_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Login_Menu_Image_Label = new QLabel(LoginMenu);
        Login_Menu_Image_Label->setObjectName("Login_Menu_Image_Label");
        Login_Menu_Image_Label->setGeometry(QRect(10, 20, 171, 351));
        Login_Menu_Image_Label->setStyleSheet(QString::fromUtf8(""));
        Close_Button = new QPushButton(LoginMenu);
        Close_Button->setObjectName("Close_Button");
        Close_Button->setGeometry(QRect(590, 0, 31, 31));
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
        Hide_Button->setGeometry(QRect(560, 0, 31, 31));
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
        Not_Input_Account_Label = new QLabel(LoginMenu);
        Not_Input_Account_Label->setObjectName("Not_Input_Account_Label");
        Not_Input_Account_Label->setGeometry(QRect(230, 140, 111, 16));
        Not_Input_Account_Label->setFont(font);
        Not_Input_Account_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Not_Input_Password_Label = new QLabel(LoginMenu);
        Not_Input_Password_Label->setObjectName("Not_Input_Password_Label");
        Not_Input_Password_Label->setGeometry(QRect(230, 210, 101, 16));
        Not_Input_Password_Label->setFont(font);
        Not_Input_Password_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Input_Password_EditText = new QLineEdit(LoginMenu);
        Input_Password_EditText->setObjectName("Input_Password_EditText");
        Input_Password_EditText->setGeometry(QRect(220, 220, 371, 41));
        Input_Password_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_Password_EditText->setFrame(false);
        Input_Password_EditText->setEchoMode(QLineEdit::Password);
        Input_Password_EditText->setClearButtonEnabled(true);
        Wrong_Password_Label = new QLabel(LoginMenu);
        Wrong_Password_Label->setObjectName("Wrong_Password_Label");
        Wrong_Password_Label->setGeometry(QRect(230, 210, 101, 16));
        Wrong_Password_Label->setFont(font);
        Wrong_Password_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Not_Exist_Account_Label = new QLabel(LoginMenu);
        Not_Exist_Account_Label->setObjectName("Not_Exist_Account_Label");
        Not_Exist_Account_Label->setGeometry(QRect(230, 140, 241, 16));
        Not_Exist_Account_Label->setFont(font);
        Not_Exist_Account_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Login_Button_2 = new QPushButton(LoginMenu);
        Login_Button_2->setObjectName("Login_Button_2");
        Login_Button_2->setGeometry(QRect(440, 290, 101, 41));
        Login_Button_2->setCursor(QCursor(Qt::ArrowCursor));
        Login_Button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0076b4;\n"
"    border: 1px solid #dcdfe6;\n"
"    padding: 10px;\n"
"    border-radius: 5px;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 10pt \"\351\273\221\344\275\223\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
""));
        Input_Password_EditText->raise();
        Input_Account_EditText->raise();
        Login->raise();
        Welcome_Label->raise();
        Wrong_Account_Label->raise();
        Login_Menu_Image_Label->raise();
        Close_Button->raise();
        Hide_Button->raise();
        Not_Input_Account_Label->raise();
        Not_Input_Password_Label->raise();
        Wrong_Password_Label->raise();
        Not_Exist_Account_Label->raise();
        Login_Button_2->raise();

        retranslateUi(add_old);
        QObject::connect(Input_Account_EditText, SIGNAL(textEdited(QString)), add_old, SLOT(on_Input_Account_EditText_textEdited()));
        QObject::connect(Input_Password_EditText, SIGNAL(textEdited(QString)), add_old, SLOT(on_Input_Password_EditText_textEdited()));
        QObject::connect(Login, SIGNAL(clicked()), add_old, SLOT(on_Login_Button_clicked()));
        QObject::connect(Login_Button_2, SIGNAL(clicked()), add_old, SLOT(on_Close_Button_clicked()));
        QObject::connect(Close_Button, SIGNAL(clicked()), add_old, SLOT(on_Close_Button_clicked()));
        QObject::connect(Hide_Button, SIGNAL(clicked()), add_old, SLOT(on_Hide_Button_clicked()));

        QMetaObject::connectSlotsByName(add_old);
    } // setupUi

    void retranslateUi(QWidget *add_old)
    {
        add_old->setWindowTitle(QCoreApplication::translate("add_old", "add_old", nullptr));
        Input_Account_EditText->setPlaceholderText(QCoreApplication::translate("add_old", "\346\211\213\346\234\272\345\217\267\346\210\226\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201", nullptr));
        Login->setText(QCoreApplication::translate("add_old", "\347\231\273\345\275\225\345\271\266\346\267\273\345\212\240", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("add_old", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\347\231\273\345\275\225\345\271\266\346\267\273\345\212\240\346\270\270\345\256\242</span></p></body></html>", nullptr));
        Wrong_Account_Label->setText(QCoreApplication::translate("add_old", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\"> \303\227 \350\257\267\350\276\223\345\205\245\346\255\243\347\241\256\347\232\204\350\272\253\344\273\275\350\257\201\345\217\267\346\210\226\346\211\213\346\234\272\345\217\267\357\274\201 </span></p></body></html>", nullptr));
        Login_Menu_Image_Label->setText(QCoreApplication::translate("add_old", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Close_Button->setText(QCoreApplication::translate("add_old", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("add_old", "\342\200\224", nullptr));
        Not_Input_Account_Label->setText(QCoreApplication::translate("add_old", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\357\274\201 </span></p></body></html>", nullptr));
        Not_Input_Password_Label->setText(QCoreApplication::translate("add_old", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">  \303\227 \350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\357\274\201 </span></p></body></html>", nullptr));
        Input_Password_EditText->setPlaceholderText(QCoreApplication::translate("add_old", "\345\257\206\347\240\201", nullptr));
        Wrong_Password_Label->setText(QCoreApplication::translate("add_old", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \345\257\206\347\240\201\351\224\231\350\257\257\357\274\201 </span></p></body></html>", nullptr));
        Not_Exist_Account_Label->setText(QCoreApplication::translate("add_old", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \347\224\250\346\210\267\345\220\215\344\270\215\345\255\230\345\234\250\357\274\214\350\257\267\345\205\210\346\263\250\345\206\214\350\264\246\345\217\267\345\220\216\347\231\273\345\275\225</span></p></body></html>", nullptr));
        Login_Button_2->setText(QCoreApplication::translate("add_old", "\345\217\226\346\266\210\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_old: public Ui_add_old {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_OLD_H
