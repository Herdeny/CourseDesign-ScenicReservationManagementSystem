/********************************************************************************
** Form generated from reading UI file 'add_menu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_MENU_H
#define UI_ADD_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_menu
{
public:
    QLabel *Welcome_Label;
    QFrame *frame;
    QPushButton *Return_Login_Button;
    QPushButton *Return_Login_Button_2;
    QPushButton *Return_Login_Button_3;
    QLabel *label;

    void setupUi(QWidget *add_menu)
    {
        if (add_menu->objectName().isEmpty())
            add_menu->setObjectName("add_menu");
        add_menu->resize(523, 269);
        Welcome_Label = new QLabel(add_menu);
        Welcome_Label->setObjectName("Welcome_Label");
        Welcome_Label->setGeometry(QRect(140, 50, 231, 61));
        frame = new QFrame(add_menu);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 521, 271));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Return_Login_Button = new QPushButton(frame);
        Return_Login_Button->setObjectName("Return_Login_Button");
        Return_Login_Button->setGeometry(QRect(20, 130, 221, 41));
        Return_Login_Button->setCursor(QCursor(Qt::OpenHandCursor));
        Return_Login_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Return_Login_Button_2 = new QPushButton(frame);
        Return_Login_Button_2->setObjectName("Return_Login_Button_2");
        Return_Login_Button_2->setGeometry(QRect(280, 130, 221, 41));
        Return_Login_Button_2->setCursor(QCursor(Qt::OpenHandCursor));
        Return_Login_Button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Return_Login_Button_3 = new QPushButton(frame);
        Return_Login_Button_3->setObjectName("Return_Login_Button_3");
        Return_Login_Button_3->setGeometry(QRect(200, 200, 131, 41));
        Return_Login_Button_3->setCursor(QCursor(Qt::OpenHandCursor));
        Return_Login_Button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 40, 121, 20));
        frame->raise();
        Welcome_Label->raise();

        retranslateUi(add_menu);
        QObject::connect(Return_Login_Button, SIGNAL(clicked()), add_menu, SLOT(on_add_old_Button_clicked()));
        QObject::connect(Return_Login_Button_2, SIGNAL(clicked()), add_menu, SLOT(on_add_new_Button_clicked()));
        QObject::connect(Return_Login_Button_3, SIGNAL(clicked()), add_menu, SLOT(on_Exit_Button_clicked()));

        QMetaObject::connectSlotsByName(add_menu);
    } // setupUi

    void retranslateUi(QWidget *add_menu)
    {
        add_menu->setWindowTitle(QCoreApplication::translate("add_menu", "add_menu", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("add_menu", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\350\257\267\351\200\211\346\213\251\346\267\273\345\212\240\346\226\271\345\274\217</span></p></body></html>", nullptr));
        Return_Login_Button->setText(QCoreApplication::translate("add_menu", "\346\267\273\345\212\240\345\267\262\346\234\211\350\264\246\345\217\267\347\232\204\346\270\270\345\256\242", nullptr));
        Return_Login_Button_2->setText(QCoreApplication::translate("add_menu", "\344\270\272\346\226\260\346\270\270\345\256\242\346\263\250\345\206\214\345\271\266\346\267\273\345\212\240", nullptr));
        Return_Login_Button_3->setText(QCoreApplication::translate("add_menu", "\345\217\226\346\266\210\346\267\273\345\212\240", nullptr));
        label->setText(QCoreApplication::translate("add_menu", "(\346\234\200\345\244\232\345\217\257\346\267\273\345\212\240\344\270\211\344\275\215\346\270\270\345\256\242)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_menu: public Ui_add_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_MENU_H
