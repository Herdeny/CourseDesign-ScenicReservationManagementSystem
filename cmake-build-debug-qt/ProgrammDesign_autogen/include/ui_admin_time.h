/********************************************************************************
** Form generated from reading UI file 'admin_time.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_TIME_H
#define UI_ADMIN_TIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_time
{
public:
    QFrame *LoginMenu;
    QLabel *Welcome_Label;
    QPushButton *Close_Button;
    QPushButton *Hide_Button;
    QPushButton *Exit_Button;
    QCalendarWidget *calendarWidget;
    QPushButton *Exit_Button_2;

    void setupUi(QWidget *admin_time)
    {
        if (admin_time->objectName().isEmpty())
            admin_time->setObjectName("admin_time");
        admin_time->resize(949, 593);
        LoginMenu = new QFrame(admin_time);
        LoginMenu->setObjectName("LoginMenu");
        LoginMenu->setGeometry(QRect(0, 0, 951, 591));
        LoginMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LoginMenu->setFrameShape(QFrame::NoFrame);
        LoginMenu->setFrameShadow(QFrame::Raised);
        Welcome_Label = new QLabel(LoginMenu);
        Welcome_Label->setObjectName("Welcome_Label");
        Welcome_Label->setGeometry(QRect(350, 30, 231, 61));
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
        Exit_Button->setGeometry(QRect(60, 520, 111, 41));
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
        calendarWidget = new QCalendarWidget(LoginMenu);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(60, 80, 811, 421));
        Exit_Button_2 = new QPushButton(LoginMenu);
        Exit_Button_2->setObjectName("Exit_Button_2");
        Exit_Button_2->setGeometry(QRect(270, 520, 401, 41));
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

        retranslateUi(admin_time);
        QObject::connect(calendarWidget, SIGNAL(activated(QDate)), admin_time, SLOT(on_Date_Choosed()));
        QObject::connect(Close_Button, SIGNAL(clicked()), admin_time, SLOT(on_Close_Button_clicked()));
        QObject::connect(Hide_Button, SIGNAL(clicked()), admin_time, SLOT(on_Close_Button_clicked()));
        QObject::connect(Exit_Button, SIGNAL(clicked()), admin_time, SLOT(on_Exit_Button_clicked()));
        QObject::connect(Exit_Button_2, SIGNAL(clicked()), admin_time, SLOT(on_Date_Choosed()));

        QMetaObject::connectSlotsByName(admin_time);
    } // setupUi

    void retranslateUi(QWidget *admin_time)
    {
        admin_time->setWindowTitle(QCoreApplication::translate("admin_time", "admin_time", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("admin_time", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\350\257\267\351\200\211\346\213\251\347\256\241\347\220\206\346\227\266\346\256\265</span></p></body></html>", nullptr));
        Close_Button->setText(QCoreApplication::translate("admin_time", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("admin_time", "\342\200\224", nullptr));
        Exit_Button->setText(QCoreApplication::translate("admin_time", "\345\217\226\346\266\210\351\242\204\347\272\246", nullptr));
        Exit_Button_2->setText(QCoreApplication::translate("admin_time", "\351\200\211\346\213\251\346\227\266\346\256\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_time: public Ui_admin_time {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_TIME_H
