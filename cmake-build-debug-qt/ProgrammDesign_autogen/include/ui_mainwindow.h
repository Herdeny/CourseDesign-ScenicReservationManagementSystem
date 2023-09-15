/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *LoginMenu;
    QLineEdit *Input_Account_EditText;
    QCheckBox *Remember_Me_CheckBox;
    QPushButton *Login_Button;
    QPushButton *Register_Button;
    QLabel *Forgot_Password_Label;
    QLabel *Welcome_Label;
    QLabel *Wrong_Account_Label;
    QLabel *Login_Menu_Image_Label;
    QPushButton *Close_Button;
    QPushButton *Hide_Button;
    QLabel *Not_Input_Account_Label;
    QLabel *Not_Input_Password_Label;
    QLabel *Admin_Login_Label;
    QLineEdit *Input_Password_EditText;
    QLabel *Wrong_Password_Label;
    QLabel *Not_Exist_Account_Label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(633, 432);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
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
        Input_Account_EditText->setClearButtonEnabled(true);
        Remember_Me_CheckBox = new QCheckBox(LoginMenu);
        Remember_Me_CheckBox->setObjectName("Remember_Me_CheckBox");
        Remember_Me_CheckBox->setGeometry(QRect(230, 250, 61, 18));
        Remember_Me_CheckBox->setStyleSheet(QString::fromUtf8(""));
        Login_Button = new QPushButton(LoginMenu);
        Login_Button->setObjectName("Login_Button");
        Login_Button->setGeometry(QRect(220, 290, 171, 41));
        Login_Button->setCursor(QCursor(Qt::ArrowCursor));
        Login_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Register_Button = new QPushButton(LoginMenu);
        Register_Button->setObjectName("Register_Button");
        Register_Button->setGeometry(QRect(410, 290, 171, 41));
        Register_Button->setCursor(QCursor(Qt::ArrowCursor));
        Register_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #dcdfe6;\n"
"    padding: 10px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
""));
        Forgot_Password_Label = new QLabel(LoginMenu);
        Forgot_Password_Label->setObjectName("Forgot_Password_Label");
        Forgot_Password_Label->setGeometry(QRect(520, 250, 61, 21));
        Forgot_Password_Label->setCursor(QCursor(Qt::OpenHandCursor));
        Forgot_Password_Label->setStyleSheet(QString::fromUtf8("QLabel:hover { color:rgb(51, 144, 255);}"));
        Welcome_Label = new QLabel(LoginMenu);
        Welcome_Label->setObjectName("Welcome_Label");
        Welcome_Label->setGeometry(QRect(220, 60, 351, 61));
        Wrong_Account_Label = new QLabel(LoginMenu);
        Wrong_Account_Label->setObjectName("Wrong_Account_Label");
        Wrong_Account_Label->setGeometry(QRect(230, 130, 221, 16));
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
        Not_Input_Account_Label->setGeometry(QRect(230, 130, 111, 16));
        Not_Input_Account_Label->setFont(font);
        Not_Input_Account_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Not_Input_Password_Label = new QLabel(LoginMenu);
        Not_Input_Password_Label->setObjectName("Not_Input_Password_Label");
        Not_Input_Password_Label->setGeometry(QRect(230, 190, 101, 16));
        Not_Input_Password_Label->setFont(font);
        Not_Input_Password_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Admin_Login_Label = new QLabel(LoginMenu);
        Admin_Login_Label->setObjectName("Admin_Login_Label");
        Admin_Login_Label->setGeometry(QRect(340, 10, 61, 16));
        Admin_Login_Label->setCursor(QCursor(Qt::OpenHandCursor));
        Admin_Login_Label->setStyleSheet(QString::fromUtf8("QLabel:hover { color:rgb(51, 144, 255);}"));
        Input_Password_EditText = new QLineEdit(LoginMenu);
        Input_Password_EditText->setObjectName("Input_Password_EditText");
        Input_Password_EditText->setGeometry(QRect(220, 200, 371, 41));
        Input_Password_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_Password_EditText->setFrame(false);
        Input_Password_EditText->setEchoMode(QLineEdit::Password);
        Input_Password_EditText->setClearButtonEnabled(true);
        Wrong_Password_Label = new QLabel(LoginMenu);
        Wrong_Password_Label->setObjectName("Wrong_Password_Label");
        Wrong_Password_Label->setGeometry(QRect(230, 190, 101, 16));
        Wrong_Password_Label->setFont(font);
        Wrong_Password_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Not_Exist_Account_Label = new QLabel(LoginMenu);
        Not_Exist_Account_Label->setObjectName("Not_Exist_Account_Label");
        Not_Exist_Account_Label->setGeometry(QRect(230, 130, 241, 16));
        Not_Exist_Account_Label->setFont(font);
        Not_Exist_Account_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Input_Password_EditText->raise();
        Input_Account_EditText->raise();
        Remember_Me_CheckBox->raise();
        Login_Button->raise();
        Register_Button->raise();
        Forgot_Password_Label->raise();
        Welcome_Label->raise();
        Wrong_Account_Label->raise();
        Login_Menu_Image_Label->raise();
        Close_Button->raise();
        Hide_Button->raise();
        Not_Input_Account_Label->raise();
        Admin_Login_Label->raise();
        Not_Input_Password_Label->raise();
        Wrong_Password_Label->raise();
        Not_Exist_Account_Label->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 633, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(Input_Account_EditText, Input_Password_EditText);
        QWidget::setTabOrder(Input_Password_EditText, Remember_Me_CheckBox);
        QWidget::setTabOrder(Remember_Me_CheckBox, Login_Button);
        QWidget::setTabOrder(Login_Button, Register_Button);
        QWidget::setTabOrder(Register_Button, Hide_Button);
        QWidget::setTabOrder(Hide_Button, Close_Button);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Input_Account_EditText->setPlaceholderText(QCoreApplication::translate("MainWindow", "\346\211\213\346\234\272\345\217\267\346\210\226\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201", nullptr));
        Remember_Me_CheckBox->setText(QCoreApplication::translate("MainWindow", "\350\256\260\344\275\217\346\210\221", nullptr));
        Login_Button->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        Register_Button->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        Forgot_Password_Label->setText(QCoreApplication::translate("MainWindow", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\346\254\242\350\277\216\344\275\277\347\224\250\346\270\270\345\256\242\351\242\204\347\272\246\347\263\273\347\273\237</span></p></body></html>", nullptr));
        Wrong_Account_Label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\"> \303\227 \350\257\267\350\276\223\345\205\245\346\255\243\347\241\256\347\232\204\350\272\253\344\273\275\350\257\201\345\217\267\346\210\226\346\211\213\346\234\272\345\217\267\357\274\201 </span></p></body></html>", nullptr));
        Login_Menu_Image_Label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Close_Button->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("MainWindow", "\342\200\224", nullptr));
        Not_Input_Account_Label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\357\274\201 </span></p></body></html>", nullptr));
        Not_Input_Password_Label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">  \303\227 \350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\357\274\201 </span></p></body></html>", nullptr));
        Admin_Login_Label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" text-decoration: underline;\">\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225</span></p></body></html>", nullptr));
        Input_Password_EditText->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        Wrong_Password_Label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \345\257\206\347\240\201\351\224\231\350\257\257\357\274\201 </span></p></body></html>", nullptr));
        Not_Exist_Account_Label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \347\224\250\346\210\267\345\220\215\344\270\215\345\255\230\345\234\250\357\274\214\350\257\267\345\205\210\346\263\250\345\206\214\350\264\246\345\217\267\345\220\216\347\231\273\345\275\225</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
