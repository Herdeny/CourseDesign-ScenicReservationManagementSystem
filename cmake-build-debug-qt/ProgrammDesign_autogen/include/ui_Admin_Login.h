/********************************************************************************
** Form generated from reading UI file 'admin_login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_LOGIN_H
#define UI_ADMIN_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin_Login
{
public:
    QWidget *centralwidget;
    QFrame *LoginMenu;
    QLineEdit *Input_Account_EditText;
    QPushButton *Login;
    QLabel *Welcome_Label;
    QLabel *Login_Menu_Image_Label;
    QPushButton *Close_Button;
    QPushButton *Hide_Button;
    QLabel *Not_Input_Account_Label;
    QLabel *Not_Input_Password_Label;
    QLabel *Visitor_Login_Label;
    QLineEdit *Input_Password_EditText;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Admin_Login)
    {
        if (Admin_Login->objectName().isEmpty())
            Admin_Login->setObjectName("Admin_Login");
        Admin_Login->resize(633, 432);
        centralwidget = new QWidget(Admin_Login);
        centralwidget->setObjectName("centralwidget");
        LoginMenu = new QFrame(centralwidget);
        LoginMenu->setObjectName("LoginMenu");
        LoginMenu->setGeometry(QRect(0, 0, 631, 391));
        LoginMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LoginMenu->setFrameShape(QFrame::NoFrame);
        LoginMenu->setFrameShadow(QFrame::Raised);
        Input_Account_EditText = new QLineEdit(LoginMenu);
        Input_Account_EditText->setObjectName("Input_Account_EditText");
        Input_Account_EditText->setGeometry(QRect(220, 140, 371, 41));
        Input_Account_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_Account_EditText->setFrame(false);
        Input_Account_EditText->setEchoMode(QLineEdit::Password);
        Input_Account_EditText->setClearButtonEnabled(true);
        Login = new QPushButton(LoginMenu);
        Login->setObjectName("Login");
        Login->setGeometry(QRect(220, 290, 361, 41));
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
        Not_Input_Account_Label->setGeometry(QRect(230, 130, 121, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(11);
        Not_Input_Account_Label->setFont(font);
        Not_Input_Account_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Not_Input_Password_Label = new QLabel(LoginMenu);
        Not_Input_Password_Label->setObjectName("Not_Input_Password_Label");
        Not_Input_Password_Label->setGeometry(QRect(230, 190, 101, 16));
        Not_Input_Password_Label->setFont(font);
        Not_Input_Password_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Visitor_Login_Label = new QLabel(LoginMenu);
        Visitor_Login_Label->setObjectName("Visitor_Login_Label");
        Visitor_Login_Label->setGeometry(QRect(350, 10, 61, 16));
        Visitor_Login_Label->setCursor(QCursor(Qt::OpenHandCursor));
        Visitor_Login_Label->setStyleSheet(QString::fromUtf8("QLabel:hover { color:rgb(51, 144, 255);}"));
        Input_Password_EditText = new QLineEdit(LoginMenu);
        Input_Password_EditText->setObjectName("Input_Password_EditText");
        Input_Password_EditText->setGeometry(QRect(220, 200, 371, 41));
        Input_Password_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_Password_EditText->setFrame(false);
        Input_Password_EditText->setEchoMode(QLineEdit::Password);
        Input_Password_EditText->setClearButtonEnabled(true);
        Input_Password_EditText->raise();
        Input_Account_EditText->raise();
        Login->raise();
        Welcome_Label->raise();
        Login_Menu_Image_Label->raise();
        Close_Button->raise();
        Hide_Button->raise();
        Not_Input_Account_Label->raise();
        Visitor_Login_Label->raise();
        Not_Input_Password_Label->raise();
        Admin_Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Admin_Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 633, 22));
        Admin_Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Admin_Login);
        statusbar->setObjectName("statusbar");
        Admin_Login->setStatusBar(statusbar);

        retranslateUi(Admin_Login);
        QObject::connect(Login, SIGNAL(clicked()), Admin_Login, SLOT(on_Login_Button_clicked()));
        QObject::connect(Hide_Button, SIGNAL(clicked()), Admin_Login, SLOT(on_Hide_Button_clicked()));
        QObject::connect(Close_Button, SIGNAL(clicked()), Admin_Login, SLOT(on_Close_Button_clicked()));
        QObject::connect(Input_Account_EditText, SIGNAL(textEdited(QString)), Admin_Login, SLOT(on_Input_Account_EditText_textEdited()));
        QObject::connect(Input_Password_EditText, SIGNAL(textEdited(QString)), Admin_Login, SLOT(on_Input_Password_EditText_textEdited()));

        QMetaObject::connectSlotsByName(Admin_Login);
    } // setupUi

    void retranslateUi(QMainWindow *Admin_Login)
    {
        Admin_Login->setWindowTitle(QCoreApplication::translate("Admin_Login", "Admin_Login", nullptr));
        Input_Account_EditText->setPlaceholderText(QCoreApplication::translate("Admin_Login", "\347\224\250\346\210\267\345\220\215", nullptr));
        Login->setText(QCoreApplication::translate("Admin_Login", "\347\231\273\345\275\225", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("Admin_Login", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\346\254\242\350\277\216\344\275\277\347\224\250\351\242\204\347\272\246\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
        Login_Menu_Image_Label->setText(QCoreApplication::translate("Admin_Login", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Close_Button->setText(QCoreApplication::translate("Admin_Login", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("Admin_Login", "\342\200\224", nullptr));
        Not_Input_Account_Label->setText(QCoreApplication::translate("Admin_Login", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\357\274\201 </span></p></body></html>", nullptr));
        Not_Input_Password_Label->setText(QCoreApplication::translate("Admin_Login", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">  \303\227 \350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\357\274\201 </span></p></body></html>", nullptr));
        Visitor_Login_Label->setText(QCoreApplication::translate("Admin_Login", "<html><head/><body><p><span style=\" text-decoration: underline;\">\346\270\270\345\256\242\347\231\273\345\275\225</span></p></body></html>", nullptr));
        Input_Password_EditText->setPlaceholderText(QCoreApplication::translate("Admin_Login", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_Login: public Ui_Admin_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_LOGIN_H
