/********************************************************************************
** Form generated from reading UI file 'visitor_menu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISITOR_MENU_H
#define UI_VISITOR_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Visitor_Menu
{
public:
    QFrame *LoginMenu;
    QPushButton *Information;
    QLabel *Welcome_Label;
    QLabel *Login_Menu_Image_Label;
    QPushButton *Close_Button;
    QPushButton *Hide_Button;
    QPushButton *Manager;
    QPushButton *Exit_Button;
    QPushButton *Appoint;
    QLabel *Login_Menu_Image_Label_2;

    void setupUi(QWidget *Visitor_Menu)
    {
        if (Visitor_Menu->objectName().isEmpty())
            Visitor_Menu->setObjectName("Visitor_Menu");
        Visitor_Menu->resize(741, 417);
        LoginMenu = new QFrame(Visitor_Menu);
        LoginMenu->setObjectName("LoginMenu");
        LoginMenu->setGeometry(QRect(0, 0, 761, 421));
        LoginMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LoginMenu->setFrameShape(QFrame::NoFrame);
        LoginMenu->setFrameShadow(QFrame::Raised);
        Information = new QPushButton(LoginMenu);
        Information->setObjectName("Information");
        Information->setGeometry(QRect(260, 180, 221, 41));
        Information->setCursor(QCursor(Qt::OpenHandCursor));
        Information->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Login_Menu_Image_Label = new QLabel(LoginMenu);
        Login_Menu_Image_Label->setObjectName("Login_Menu_Image_Label");
        Login_Menu_Image_Label->setGeometry(QRect(10, 30, 201, 371));
        Login_Menu_Image_Label->setStyleSheet(QString::fromUtf8(""));
        Close_Button = new QPushButton(LoginMenu);
        Close_Button->setObjectName("Close_Button");
        Close_Button->setGeometry(QRect(700, 0, 31, 31));
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
        Hide_Button->setGeometry(QRect(670, 0, 31, 31));
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
        Manager = new QPushButton(LoginMenu);
        Manager->setObjectName("Manager");
        Manager->setGeometry(QRect(260, 250, 221, 41));
        Manager->setCursor(QCursor(Qt::OpenHandCursor));
        Manager->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Exit_Button = new QPushButton(LoginMenu);
        Exit_Button->setObjectName("Exit_Button");
        Exit_Button->setGeometry(QRect(260, 320, 221, 41));
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
        Appoint = new QPushButton(LoginMenu);
        Appoint->setObjectName("Appoint");
        Appoint->setGeometry(QRect(260, 110, 221, 41));
        Appoint->setCursor(QCursor(Qt::OpenHandCursor));
        Appoint->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Login_Menu_Image_Label_2 = new QLabel(LoginMenu);
        Login_Menu_Image_Label_2->setObjectName("Login_Menu_Image_Label_2");
        Login_Menu_Image_Label_2->setGeometry(QRect(530, 30, 201, 371));
        Login_Menu_Image_Label_2->setStyleSheet(QString::fromUtf8(""));
        QWidget::setTabOrder(Appoint, Information);
        QWidget::setTabOrder(Information, Manager);
        QWidget::setTabOrder(Manager, Exit_Button);
        QWidget::setTabOrder(Exit_Button, Hide_Button);
        QWidget::setTabOrder(Hide_Button, Close_Button);

        retranslateUi(Visitor_Menu);
        QObject::connect(Appoint, SIGNAL(clicked()), Visitor_Menu, SLOT(on_Appoint_Button_clicked()));
        QObject::connect(Exit_Button, SIGNAL(clicked()), Visitor_Menu, SLOT(on_Exit_Button_clicked()));
        QObject::connect(Manager, SIGNAL(clicked()), Visitor_Menu, SLOT(on_Manager_Button_clicked()));
        QObject::connect(Information, SIGNAL(clicked()), Visitor_Menu, SLOT(on_Information_Button_clicked()));
        QObject::connect(Close_Button, SIGNAL(clicked()), Visitor_Menu, SLOT(on_Close_Button_clicked()));
        QObject::connect(Hide_Button, SIGNAL(clicked()), Visitor_Menu, SLOT(on_Hide_Button_clicked()));

        QMetaObject::connectSlotsByName(Visitor_Menu);
    } // setupUi

    void retranslateUi(QWidget *Visitor_Menu)
    {
        Visitor_Menu->setWindowTitle(QCoreApplication::translate("Visitor_Menu", "Visitor_Menu", nullptr));
        Information->setText(QCoreApplication::translate("Visitor_Menu", "\347\224\237\346\210\220\347\224\265\345\255\220\351\242\204\347\272\246\345\215\225", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("Visitor_Menu", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\350\257\267\351\200\211\346\213\251\345\212\237\350\203\275\357\274\232</span></p></body></html>", nullptr));
        Login_Menu_Image_Label->setText(QCoreApplication::translate("Visitor_Menu", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Close_Button->setText(QCoreApplication::translate("Visitor_Menu", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("Visitor_Menu", "\342\200\224", nullptr));
        Manager->setText(QCoreApplication::translate("Visitor_Menu", "\346\270\270\345\256\242\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        Exit_Button->setText(QCoreApplication::translate("Visitor_Menu", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        Appoint->setText(QCoreApplication::translate("Visitor_Menu", "\351\242\204\347\272\246\346\227\266\346\256\265", nullptr));
        Login_Menu_Image_Label_2->setText(QCoreApplication::translate("Visitor_Menu", "<html><head/><body><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Visitor_Menu: public Ui_Visitor_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISITOR_MENU_H
