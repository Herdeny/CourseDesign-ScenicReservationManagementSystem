/********************************************************************************
** Form generated from reading UI file 'visitor_manager.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISITOR_MANAGER_H
#define UI_VISITOR_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Visitor_Manager
{
public:
    QFrame *LoginMenu;
    QLabel *Welcome_Label;
    QPushButton *Close_Button;
    QPushButton *Hide_Button;
    QPushButton *Exit_Button;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *Visitor_ID;
    QLabel *Visitor_PhoneNum;
    QLabel *Visitor_name;
    QComboBox *Visitor_comboBox;
    QPushButton *Exit_Button_2;
    QLabel *Login_Menu_Image_Label;
    QLabel *Login_Menu_Image_Label_2;
    QPushButton *Exit_Button_3;
    QPushButton *Exit_Button_4;

    void setupUi(QWidget *Visitor_Manager)
    {
        if (Visitor_Manager->objectName().isEmpty())
            Visitor_Manager->setObjectName("Visitor_Manager");
        Visitor_Manager->resize(946, 592);
        LoginMenu = new QFrame(Visitor_Manager);
        LoginMenu->setObjectName("LoginMenu");
        LoginMenu->setGeometry(QRect(0, 0, 951, 591));
        LoginMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LoginMenu->setFrameShape(QFrame::NoFrame);
        LoginMenu->setFrameShadow(QFrame::Raised);
        Welcome_Label = new QLabel(LoginMenu);
        Welcome_Label->setObjectName("Welcome_Label");
        Welcome_Label->setGeometry(QRect(360, 20, 231, 61));
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
        Exit_Button->setGeometry(QRect(360, 400, 241, 41));
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
        label_5 = new QLabel(LoginMenu);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(370, 100, 61, 31));
        label_7 = new QLabel(LoginMenu);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(370, 160, 41, 31));
        label_8 = new QLabel(LoginMenu);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(370, 220, 61, 31));
        label_9 = new QLabel(LoginMenu);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(370, 280, 81, 31));
        Visitor_ID = new QLabel(LoginMenu);
        Visitor_ID->setObjectName("Visitor_ID");
        Visitor_ID->setGeometry(QRect(450, 280, 141, 31));
        Visitor_PhoneNum = new QLabel(LoginMenu);
        Visitor_PhoneNum->setObjectName("Visitor_PhoneNum");
        Visitor_PhoneNum->setGeometry(QRect(430, 220, 151, 31));
        Visitor_name = new QLabel(LoginMenu);
        Visitor_name->setObjectName("Visitor_name");
        Visitor_name->setGeometry(QRect(420, 160, 151, 31));
        Visitor_comboBox = new QComboBox(LoginMenu);
        Visitor_comboBox->setObjectName("Visitor_comboBox");
        Visitor_comboBox->setGeometry(QRect(420, 100, 151, 31));
        Visitor_comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 255, 250);\n"
"padding-left:10px"));
        Exit_Button_2 = new QPushButton(LoginMenu);
        Exit_Button_2->setObjectName("Exit_Button_2");
        Exit_Button_2->setGeometry(QRect(360, 520, 241, 41));
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
        Exit_Button_3 = new QPushButton(LoginMenu);
        Exit_Button_3->setObjectName("Exit_Button_3");
        Exit_Button_3->setGeometry(QRect(360, 460, 241, 41));
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
        Exit_Button_4 = new QPushButton(LoginMenu);
        Exit_Button_4->setObjectName("Exit_Button_4");
        Exit_Button_4->setGeometry(QRect(360, 340, 241, 41));
        Exit_Button_4->setCursor(QCursor(Qt::OpenHandCursor));
        Exit_Button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(Visitor_Manager);
        QObject::connect(Close_Button, SIGNAL(clicked()), Visitor_Manager, SLOT(on_Close_Button_clicked()));
        QObject::connect(Hide_Button, SIGNAL(clicked()), Visitor_Manager, SLOT(on_Hide_Button_clicked()));
        QObject::connect(Exit_Button_2, SIGNAL(clicked()), Visitor_Manager, SLOT(on_Close_Button_clicked()));
        QObject::connect(Visitor_comboBox, SIGNAL(currentTextChanged(QString)), Visitor_Manager, SLOT(on_Person_combox_changed()));
        QObject::connect(Exit_Button_4, SIGNAL(clicked()), Visitor_Manager, SLOT(on_Add_Button_clicked()));
        QObject::connect(Exit_Button, SIGNAL(clicked()), Visitor_Manager, SLOT(on_Change_Button_clicked()));
        QObject::connect(Exit_Button_3, SIGNAL(clicked()), Visitor_Manager, SLOT(on_Delete_Button_clicked()));

        QMetaObject::connectSlotsByName(Visitor_Manager);
    } // setupUi

    void retranslateUi(QWidget *Visitor_Manager)
    {
        Visitor_Manager->setWindowTitle(QCoreApplication::translate("Visitor_Manager", "Visitor_Manager", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("Visitor_Manager", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\346\270\270\345\256\242\344\277\241\346\201\257\347\256\241\347\220\206</span></p></body></html>", nullptr));
        Close_Button->setText(QCoreApplication::translate("Visitor_Manager", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("Visitor_Manager", "\342\200\224", nullptr));
        Exit_Button->setText(QCoreApplication::translate("Visitor_Manager", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        label_5->setText(QCoreApplication::translate("Visitor_Manager", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\270\270\345\256\242\357\274\232</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Visitor_Manager", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Visitor_Manager", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\211\213\346\234\272\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Visitor_Manager", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232</span></p></body></html>", nullptr));
        Visitor_ID->setText(QCoreApplication::translate("Visitor_Manager", "<html><head/><body><p><span style=\" font-size:10pt;\">\350\272\253\344\273\275\350\257\201\345\217\267\350\276\223\345\207\272\345\234\250\350\277\231\351\207\214</span></p></body></html>", nullptr));
        Visitor_PhoneNum->setText(QCoreApplication::translate("Visitor_Manager", "<html><head/><body><p><span style=\" font-size:10pt;\">\346\211\213\346\234\272\345\217\267\350\276\223\345\207\272\345\234\250\350\277\231\351\207\214</span></p></body></html>", nullptr));
        Visitor_name->setText(QCoreApplication::translate("Visitor_Manager", "<html><head/><body><p><span style=\" font-size:10pt;\">\345\247\223\345\220\215\350\276\223\345\207\272\345\234\250\350\277\231\351\207\214</span></p></body></html>", nullptr));
        Exit_Button_2->setText(QCoreApplication::translate("Visitor_Manager", "\350\277\224\345\233\236\350\217\234\345\215\225", nullptr));
        Login_Menu_Image_Label->setText(QCoreApplication::translate("Visitor_Manager", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Login_Menu_Image_Label_2->setText(QCoreApplication::translate("Visitor_Manager", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Exit_Button_3->setText(QCoreApplication::translate("Visitor_Manager", "\345\210\240\351\231\244\346\270\270\345\256\242", nullptr));
        Exit_Button_4->setText(QCoreApplication::translate("Visitor_Manager", "\346\226\260\345\242\236\346\270\270\345\256\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Visitor_Manager: public Ui_Visitor_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISITOR_MANAGER_H
