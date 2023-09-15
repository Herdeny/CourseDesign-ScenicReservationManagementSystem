/********************************************************************************
** Form generated from reading UI file 'record.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_record
{
public:
    QFrame *LoginMenu;
    QPushButton *Recover_Button;
    QLabel *Welcome_Label;
    QLabel *Login_Menu_Image_Label;
    QPushButton *Close_Button;
    QPushButton *Hide_Button;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *record)
    {
        if (record->objectName().isEmpty())
            record->setObjectName("record");
        record->resize(677, 421);
        LoginMenu = new QFrame(record);
        LoginMenu->setObjectName("LoginMenu");
        LoginMenu->setGeometry(QRect(0, 0, 681, 421));
        LoginMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LoginMenu->setFrameShape(QFrame::NoFrame);
        LoginMenu->setFrameShadow(QFrame::Raised);
        Recover_Button = new QPushButton(LoginMenu);
        Recover_Button->setObjectName("Recover_Button");
        Recover_Button->setGeometry(QRect(220, 350, 221, 41));
        Recover_Button->setCursor(QCursor(Qt::OpenHandCursor));
        Recover_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Welcome_Label->setGeometry(QRect(260, 30, 131, 61));
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
        textBrowser = new QTextBrowser(LoginMenu);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(80, 90, 501, 241));

        retranslateUi(record);
        QObject::connect(Recover_Button, SIGNAL(clicked()), record, SLOT(on_Return_Login_PushButton_clicked()));

        QMetaObject::connectSlotsByName(record);
    } // setupUi

    void retranslateUi(QWidget *record)
    {
        record->setWindowTitle(QCoreApplication::translate("record", "record", nullptr));
        Recover_Button->setText(QCoreApplication::translate("record", "\347\241\256\345\256\232", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("record", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\351\242\204\345\256\232\350\256\260\345\275\225</span></p></body></html>", nullptr));
        Login_Menu_Image_Label->setText(QCoreApplication::translate("record", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Close_Button->setText(QCoreApplication::translate("record", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("record", "\342\200\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class record: public Ui_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
