/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

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

class Ui_Register
{
public:
    QWidget *centralwidget;
    QFrame *LoginMenu;
    QLineEdit *Input_ID_EditText;
    QPushButton *Register_Button;
    QLabel *Welcome_Label;
    QLabel *Wrong_PhoneNum_Label;
    QLabel *Login_Menu_Image_Label;
    QPushButton *Close_Button;
    QPushButton *Hide_Button;
    QLabel *Not_Input_PhoneNum_Label;
    QLabel *Not_Input_Password_Label;
    QLineEdit *Input_Password_EditText;
    QLineEdit *Input_PhoneNum_EditText;
    QLineEdit *Input_Password_Again_EditText;
    QLabel *ID_Occupied_Label;
    QLabel *Not_Input_Password_Label_2;
    QLabel *Return_Login_Label;
    QLabel *Wrong_ID_Label;
    QLabel *Wrong_Password_Length_Label;
    QLabel *Wrong_Password_Type_Label;
    QLabel *Password_Different_Label;
    QLabel *PhoneNum_Occupied_Label;
    QLabel *Not_Input_ID_Label;
    QLineEdit *Input_Name_EditText;
    QLabel *Not_Input_Name_Label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(683, 464);
        centralwidget = new QWidget(Register);
        centralwidget->setObjectName("centralwidget");
        LoginMenu = new QFrame(centralwidget);
        LoginMenu->setObjectName("LoginMenu");
        LoginMenu->setGeometry(QRect(0, 0, 681, 421));
        LoginMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LoginMenu->setFrameShape(QFrame::NoFrame);
        LoginMenu->setFrameShadow(QFrame::Raised);
        Input_ID_EditText = new QLineEdit(LoginMenu);
        Input_ID_EditText->setObjectName("Input_ID_EditText");
        Input_ID_EditText->setGeometry(QRect(260, 160, 371, 41));
        Input_ID_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_ID_EditText->setFrame(false);
        Input_ID_EditText->setClearButtonEnabled(true);
        Register_Button = new QPushButton(LoginMenu);
        Register_Button->setObjectName("Register_Button");
        Register_Button->setGeometry(QRect(260, 340, 221, 41));
        Register_Button->setCursor(QCursor(Qt::OpenHandCursor));
        Register_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Welcome_Label = new QLabel(LoginMenu);
        Welcome_Label->setObjectName("Welcome_Label");
        Welcome_Label->setGeometry(QRect(260, 30, 351, 61));
        Wrong_PhoneNum_Label = new QLabel(LoginMenu);
        Wrong_PhoneNum_Label->setObjectName("Wrong_PhoneNum_Label");
        Wrong_PhoneNum_Label->setGeometry(QRect(410, 90, 151, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(11);
        Wrong_PhoneNum_Label->setFont(font);
        Wrong_PhoneNum_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Login_Menu_Image_Label = new QLabel(LoginMenu);
        Login_Menu_Image_Label->setObjectName("Login_Menu_Image_Label");
        Login_Menu_Image_Label->setGeometry(QRect(10, 20, 201, 381));
        Login_Menu_Image_Label->setStyleSheet(QString::fromUtf8(""));
        Close_Button = new QPushButton(LoginMenu);
        Close_Button->setObjectName("Close_Button");
        Close_Button->setGeometry(QRect(650, 0, 31, 31));
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
        Hide_Button->setGeometry(QRect(620, 0, 31, 31));
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
        Not_Input_PhoneNum_Label = new QLabel(LoginMenu);
        Not_Input_PhoneNum_Label->setObjectName("Not_Input_PhoneNum_Label");
        Not_Input_PhoneNum_Label->setGeometry(QRect(410, 90, 111, 16));
        Not_Input_PhoneNum_Label->setFont(font);
        Not_Input_PhoneNum_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Not_Input_Password_Label = new QLabel(LoginMenu);
        Not_Input_Password_Label->setObjectName("Not_Input_Password_Label");
        Not_Input_Password_Label->setGeometry(QRect(270, 210, 101, 16));
        Not_Input_Password_Label->setFont(font);
        Not_Input_Password_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Input_Password_EditText = new QLineEdit(LoginMenu);
        Input_Password_EditText->setObjectName("Input_Password_EditText");
        Input_Password_EditText->setGeometry(QRect(260, 220, 371, 41));
        Input_Password_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_Password_EditText->setFrame(false);
        Input_Password_EditText->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        Input_Password_EditText->setClearButtonEnabled(true);
        Input_PhoneNum_EditText = new QLineEdit(LoginMenu);
        Input_PhoneNum_EditText->setObjectName("Input_PhoneNum_EditText");
        Input_PhoneNum_EditText->setGeometry(QRect(400, 100, 231, 41));
        Input_PhoneNum_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_PhoneNum_EditText->setFrame(false);
        Input_PhoneNum_EditText->setClearButtonEnabled(true);
        Input_Password_Again_EditText = new QLineEdit(LoginMenu);
        Input_Password_Again_EditText->setObjectName("Input_Password_Again_EditText");
        Input_Password_Again_EditText->setGeometry(QRect(260, 280, 371, 41));
        Input_Password_Again_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_Password_Again_EditText->setFrame(false);
        Input_Password_Again_EditText->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        Input_Password_Again_EditText->setClearButtonEnabled(true);
        ID_Occupied_Label = new QLabel(LoginMenu);
        ID_Occupied_Label->setObjectName("ID_Occupied_Label");
        ID_Occupied_Label->setGeometry(QRect(270, 150, 191, 16));
        ID_Occupied_Label->setFont(font);
        ID_Occupied_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Not_Input_Password_Label_2 = new QLabel(LoginMenu);
        Not_Input_Password_Label_2->setObjectName("Not_Input_Password_Label_2");
        Not_Input_Password_Label_2->setGeometry(QRect(270, 270, 121, 16));
        Not_Input_Password_Label_2->setFont(font);
        Not_Input_Password_Label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Return_Login_Label = new QLabel(LoginMenu);
        Return_Login_Label->setObjectName("Return_Login_Label");
        Return_Login_Label->setGeometry(QRect(510, 320, 121, 21));
        Return_Login_Label->setCursor(QCursor(Qt::OpenHandCursor));
        Return_Login_Label->setStyleSheet(QString::fromUtf8("QLabel{background-color:transparent;}\n"
"QLabel:hover {color:rgb(51, 144, 255);}\n"
""));
        Wrong_ID_Label = new QLabel(LoginMenu);
        Wrong_ID_Label->setObjectName("Wrong_ID_Label");
        Wrong_ID_Label->setGeometry(QRect(270, 150, 161, 16));
        Wrong_ID_Label->setFont(font);
        Wrong_ID_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Wrong_Password_Length_Label = new QLabel(LoginMenu);
        Wrong_Password_Length_Label->setObjectName("Wrong_Password_Length_Label");
        Wrong_Password_Length_Label->setGeometry(QRect(270, 210, 161, 16));
        Wrong_Password_Length_Label->setFont(font);
        Wrong_Password_Length_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Wrong_Password_Type_Label = new QLabel(LoginMenu);
        Wrong_Password_Type_Label->setObjectName("Wrong_Password_Type_Label");
        Wrong_Password_Type_Label->setGeometry(QRect(270, 210, 191, 16));
        Wrong_Password_Type_Label->setFont(font);
        Wrong_Password_Type_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Password_Different_Label = new QLabel(LoginMenu);
        Password_Different_Label->setObjectName("Password_Different_Label");
        Password_Different_Label->setGeometry(QRect(270, 270, 161, 16));
        Password_Different_Label->setFont(font);
        Password_Different_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PhoneNum_Occupied_Label = new QLabel(LoginMenu);
        PhoneNum_Occupied_Label->setObjectName("PhoneNum_Occupied_Label");
        PhoneNum_Occupied_Label->setGeometry(QRect(410, 90, 131, 16));
        PhoneNum_Occupied_Label->setFont(font);
        PhoneNum_Occupied_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Not_Input_ID_Label = new QLabel(LoginMenu);
        Not_Input_ID_Label->setObjectName("Not_Input_ID_Label");
        Not_Input_ID_Label->setGeometry(QRect(270, 150, 131, 16));
        Not_Input_ID_Label->setFont(font);
        Not_Input_ID_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Input_Name_EditText = new QLineEdit(LoginMenu);
        Input_Name_EditText->setObjectName("Input_Name_EditText");
        Input_Name_EditText->setGeometry(QRect(260, 100, 131, 41));
        Input_Name_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_Name_EditText->setFrame(false);
        Input_Name_EditText->setClearButtonEnabled(true);
        Not_Input_Name_Label = new QLabel(LoginMenu);
        Not_Input_Name_Label->setObjectName("Not_Input_Name_Label");
        Not_Input_Name_Label->setGeometry(QRect(270, 90, 101, 16));
        Not_Input_Name_Label->setFont(font);
        Not_Input_Name_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Input_Password_EditText->raise();
        Input_ID_EditText->raise();
        Register_Button->raise();
        Welcome_Label->raise();
        Login_Menu_Image_Label->raise();
        Close_Button->raise();
        Hide_Button->raise();
        Input_PhoneNum_EditText->raise();
        Input_Password_Again_EditText->raise();
        Return_Login_Label->raise();
        Wrong_PhoneNum_Label->raise();
        Wrong_ID_Label->raise();
        Wrong_Password_Type_Label->raise();
        Wrong_Password_Length_Label->raise();
        Password_Different_Label->raise();
        ID_Occupied_Label->raise();
        Not_Input_Password_Label->raise();
        Not_Input_Password_Label_2->raise();
        Not_Input_PhoneNum_Label->raise();
        PhoneNum_Occupied_Label->raise();
        Not_Input_ID_Label->raise();
        Input_Name_EditText->raise();
        Not_Input_Name_Label->raise();
        Register->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Register);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 683, 22));
        Register->setMenuBar(menubar);
        statusbar = new QStatusBar(Register);
        statusbar->setObjectName("statusbar");
        Register->setStatusBar(statusbar);
        QWidget::setTabOrder(Input_PhoneNum_EditText, Input_ID_EditText);
        QWidget::setTabOrder(Input_ID_EditText, Input_Password_EditText);
        QWidget::setTabOrder(Input_Password_EditText, Input_Password_Again_EditText);
        QWidget::setTabOrder(Input_Password_Again_EditText, Register_Button);
        QWidget::setTabOrder(Register_Button, Close_Button);
        QWidget::setTabOrder(Close_Button, Hide_Button);

        retranslateUi(Register);
        QObject::connect(Hide_Button, SIGNAL(clicked()), Register, SLOT(on_Hide_Button_clicked()));
        QObject::connect(Close_Button, SIGNAL(clicked()), Register, SLOT(on_Close_Button_clicked()));
        QObject::connect(Input_PhoneNum_EditText, SIGNAL(textEdited(QString)), Register, SLOT(on_Input_PhoneNum_EditText_textEdited()));
        QObject::connect(Input_ID_EditText, SIGNAL(textEdited(QString)), Register, SLOT(on_Input_ID_EditText_textEdited()));
        QObject::connect(Input_Password_EditText, SIGNAL(textEdited(QString)), Register, SLOT(on_Input_PassWord_EditText_textEdited()));
        QObject::connect(Input_Password_Again_EditText, SIGNAL(textEdited(QString)), Register, SLOT(on_Input_PassWord_Again_EditText_textEdited()));
        QObject::connect(Register_Button, SIGNAL(clicked()), Register, SLOT(on_Register_PushButton_clicked()));

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QMainWindow *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Register", nullptr));
        Input_ID_EditText->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201", nullptr));
        Register_Button->setText(QCoreApplication::translate("Register", "\346\263\250\345\206\214", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\346\263\250\345\206\214\350\264\246\345\217\267</span></p></body></html>", nullptr));
        Wrong_PhoneNum_Label->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\257\267\350\276\223\345\205\245\346\255\243\347\241\256\347\232\204\346\211\213\346\234\272\345\217\267\357\274\201 </span></p></body></html>", nullptr));
        Login_Menu_Image_Label->setText(QCoreApplication::translate("Register", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Close_Button->setText(QCoreApplication::translate("Register", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("Register", "\342\200\224", nullptr));
        Not_Input_PhoneNum_Label->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267\357\274\201 </span></p></body></html>", nullptr));
        Not_Input_Password_Label->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">  \303\227 \350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\357\274\201 </span></p></body></html>", nullptr));
        Input_Password_EditText->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\256\276\347\275\2563-16\344\275\215\345\257\206\347\240\201\357\274\214\350\207\263\345\260\221\345\214\205\345\220\253\346\225\260\345\255\227\345\222\214\345\255\227\346\257\215", nullptr));
        Input_PhoneNum_EditText->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267", nullptr));
        Input_Password_Again_EditText->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        ID_Occupied_Label->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\272\253\344\273\275\350\257\201\345\217\267\345\267\262\350\242\253\345\205\266\344\273\226\350\264\246\345\217\267\347\273\221\345\256\232\357\274\201 </span></p></body></html>", nullptr));
        Not_Input_Password_Label_2->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201\357\274\201 </span></p></body></html>", nullptr));
        Return_Login_Label->setText(QCoreApplication::translate("Register", "\345\267\262\346\234\211\350\264\246\345\217\267\357\274\237\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        Wrong_ID_Label->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\257\267\350\276\223\345\205\245\346\255\243\347\241\256\347\232\204\350\272\253\344\273\275\350\257\201\345\217\267\357\274\201 </span></p></body></html>", nullptr));
        Wrong_Password_Length_Label->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \345\257\206\347\240\201\351\225\277\345\272\246\345\277\205\351\241\273\344\270\2723-16\344\275\215\357\274\201 </span></p></body></html>", nullptr));
        Wrong_Password_Type_Label->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \345\257\206\347\240\201\350\207\263\345\260\221\350\246\201\345\214\205\345\220\253\346\225\260\345\255\227\345\222\214\345\255\227\346\257\215\357\274\201 </span></p></body></html>", nullptr));
        Password_Different_Label->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \344\270\244\346\254\241\350\276\223\345\205\245\347\232\204\345\257\206\347\240\201\344\270\215\344\270\200\350\207\264\357\274\201 </span></p></body></html>", nullptr));
        PhoneNum_Occupied_Label->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \346\211\213\346\234\272\345\217\267\345\267\262\350\242\253\346\263\250\345\206\214\357\274\201 </span></p></body></html>", nullptr));
        Not_Input_ID_Label->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\257\267\350\276\223\345\205\245\350\272\253\344\273\275\350\257\201\345\217\267\357\274\201 </span></p></body></html>", nullptr));
        Input_Name_EditText->setPlaceholderText(QCoreApplication::translate("Register", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        Not_Input_Name_Label->setText(QCoreApplication::translate("Register", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\257\267\350\276\223\345\205\245\345\247\223\345\220\215\357\274\201 </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
