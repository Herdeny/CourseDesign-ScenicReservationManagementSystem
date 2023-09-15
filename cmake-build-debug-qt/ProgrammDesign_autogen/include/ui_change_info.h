/********************************************************************************
** Form generated from reading UI file 'change_info.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_INFO_H
#define UI_CHANGE_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change_info
{
public:
    QFrame *LoginMenu;
    QLabel *Welcome_Label;
    QPushButton *Close_Button;
    QPushButton *Hide_Button;
    QPushButton *Exit_Button;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *Visitor_ID;
    QLabel *Visitor_PhoneNum;
    QPushButton *Exit_Button_2;
    QLabel *Login_Menu_Image_Label;
    QLabel *Login_Menu_Image_Label_2;
    QLineEdit *Input_Name_EditText;
    QLineEdit *Input_PhoneNum_EditText;
    QLabel *Visitor_PhoneNum_2;
    QLabel *Visitor_ID_2;
    QLineEdit *Input_ID_EditText;
    QLabel *Visitor_PhoneNum_3;
    QLabel *Visitor_Name;
    QComboBox *Visitor_comboBox;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *Not_Input_Password_Label_2;
    QLabel *Wrong_Password_Type_Label;
    QLineEdit *Input_Password_EditText;
    QLabel *Wrong_Password_Length_Label;
    QLabel *Password_Different_Label;
    QLabel *Not_Input_Password_Label;
    QLineEdit *Input_Password_Again_EditText;
    QLabel *Wrong_PhoneNum_Label;
    QLabel *PhoneNum_Occupied_Label;
    QLabel *ID_Occupied_Label;
    QLabel *Wrong_ID_Label;

    void setupUi(QWidget *change_info)
    {
        if (change_info->objectName().isEmpty())
            change_info->setObjectName("change_info");
        change_info->resize(948, 593);
        LoginMenu = new QFrame(change_info);
        LoginMenu->setObjectName("LoginMenu");
        LoginMenu->setGeometry(QRect(0, 0, 951, 591));
        LoginMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LoginMenu->setFrameShape(QFrame::NoFrame);
        LoginMenu->setFrameShadow(QFrame::Raised);
        Welcome_Label = new QLabel(LoginMenu);
        Welcome_Label->setObjectName("Welcome_Label");
        Welcome_Label->setGeometry(QRect(350, 50, 231, 61));
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
        Exit_Button->setGeometry(QRect(340, 520, 241, 41));
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
        label_7 = new QLabel(LoginMenu);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(370, 200, 41, 31));
        label_8 = new QLabel(LoginMenu);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(360, 260, 61, 31));
        label_9 = new QLabel(LoginMenu);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(350, 320, 81, 31));
        Visitor_ID = new QLabel(LoginMenu);
        Visitor_ID->setObjectName("Visitor_ID");
        Visitor_ID->setGeometry(QRect(430, 300, 201, 21));
        Visitor_PhoneNum = new QLabel(LoginMenu);
        Visitor_PhoneNum->setObjectName("Visitor_PhoneNum");
        Visitor_PhoneNum->setGeometry(QRect(420, 240, 151, 21));
        Exit_Button_2 = new QPushButton(LoginMenu);
        Exit_Button_2->setObjectName("Exit_Button_2");
        Exit_Button_2->setGeometry(QRect(340, 460, 241, 41));
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
        Input_Name_EditText = new QLineEdit(LoginMenu);
        Input_Name_EditText->setObjectName("Input_Name_EditText");
        Input_Name_EditText->setGeometry(QRect(430, 200, 371, 31));
        Input_Name_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_Name_EditText->setFrame(false);
        Input_Name_EditText->setClearButtonEnabled(true);
        Input_PhoneNum_EditText = new QLineEdit(LoginMenu);
        Input_PhoneNum_EditText->setObjectName("Input_PhoneNum_EditText");
        Input_PhoneNum_EditText->setGeometry(QRect(430, 260, 371, 31));
        Input_PhoneNum_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_PhoneNum_EditText->setFrame(false);
        Input_PhoneNum_EditText->setClearButtonEnabled(true);
        Visitor_PhoneNum_2 = new QLabel(LoginMenu);
        Visitor_PhoneNum_2->setObjectName("Visitor_PhoneNum_2");
        Visitor_PhoneNum_2->setGeometry(QRect(360, 240, 61, 21));
        Visitor_ID_2 = new QLabel(LoginMenu);
        Visitor_ID_2->setObjectName("Visitor_ID_2");
        Visitor_ID_2->setGeometry(QRect(360, 300, 71, 21));
        Input_ID_EditText = new QLineEdit(LoginMenu);
        Input_ID_EditText->setObjectName("Input_ID_EditText");
        Input_ID_EditText->setGeometry(QRect(430, 320, 371, 31));
        Input_ID_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_ID_EditText->setFrame(false);
        Input_ID_EditText->setClearButtonEnabled(true);
        Visitor_PhoneNum_3 = new QLabel(LoginMenu);
        Visitor_PhoneNum_3->setObjectName("Visitor_PhoneNum_3");
        Visitor_PhoneNum_3->setGeometry(QRect(370, 180, 41, 21));
        Visitor_Name = new QLabel(LoginMenu);
        Visitor_Name->setObjectName("Visitor_Name");
        Visitor_Name->setGeometry(QRect(420, 180, 111, 21));
        Visitor_comboBox = new QComboBox(LoginMenu);
        Visitor_comboBox->setObjectName("Visitor_comboBox");
        Visitor_comboBox->setGeometry(QRect(400, 130, 341, 31));
        Visitor_comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 255, 250);\n"
"padding-left:10px"));
        label_5 = new QLabel(LoginMenu);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(350, 130, 61, 31));
        label_10 = new QLabel(LoginMenu);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(380, 370, 41, 31));
        label_11 = new QLabel(LoginMenu);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(350, 410, 81, 31));
        Not_Input_Password_Label_2 = new QLabel(LoginMenu);
        Not_Input_Password_Label_2->setObjectName("Not_Input_Password_Label_2");
        Not_Input_Password_Label_2->setGeometry(QRect(440, 400, 121, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(11);
        Not_Input_Password_Label_2->setFont(font);
        Not_Input_Password_Label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Wrong_Password_Type_Label = new QLabel(LoginMenu);
        Wrong_Password_Type_Label->setObjectName("Wrong_Password_Type_Label");
        Wrong_Password_Type_Label->setGeometry(QRect(420, 360, 191, 16));
        Wrong_Password_Type_Label->setFont(font);
        Wrong_Password_Type_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Input_Password_EditText = new QLineEdit(LoginMenu);
        Input_Password_EditText->setObjectName("Input_Password_EditText");
        Input_Password_EditText->setGeometry(QRect(430, 370, 371, 31));
        Input_Password_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_Password_EditText->setFrame(false);
        Input_Password_EditText->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        Input_Password_EditText->setClearButtonEnabled(true);
        Wrong_Password_Length_Label = new QLabel(LoginMenu);
        Wrong_Password_Length_Label->setObjectName("Wrong_Password_Length_Label");
        Wrong_Password_Length_Label->setGeometry(QRect(420, 360, 161, 16));
        Wrong_Password_Length_Label->setFont(font);
        Wrong_Password_Length_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Password_Different_Label = new QLabel(LoginMenu);
        Password_Different_Label->setObjectName("Password_Different_Label");
        Password_Different_Label->setGeometry(QRect(420, 400, 161, 16));
        Password_Different_Label->setFont(font);
        Password_Different_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Not_Input_Password_Label = new QLabel(LoginMenu);
        Not_Input_Password_Label->setObjectName("Not_Input_Password_Label");
        Not_Input_Password_Label->setGeometry(QRect(420, 360, 101, 16));
        Not_Input_Password_Label->setFont(font);
        Not_Input_Password_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Input_Password_Again_EditText = new QLineEdit(LoginMenu);
        Input_Password_Again_EditText->setObjectName("Input_Password_Again_EditText");
        Input_Password_Again_EditText->setGeometry(QRect(430, 410, 371, 31));
        Input_Password_Again_EditText->setStyleSheet(QString::fromUtf8(""));
        Input_Password_Again_EditText->setFrame(false);
        Input_Password_Again_EditText->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        Input_Password_Again_EditText->setClearButtonEnabled(true);
        Wrong_PhoneNum_Label = new QLabel(LoginMenu);
        Wrong_PhoneNum_Label->setObjectName("Wrong_PhoneNum_Label");
        Wrong_PhoneNum_Label->setGeometry(QRect(410, 250, 151, 16));
        Wrong_PhoneNum_Label->setFont(font);
        Wrong_PhoneNum_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PhoneNum_Occupied_Label = new QLabel(LoginMenu);
        PhoneNum_Occupied_Label->setObjectName("PhoneNum_Occupied_Label");
        PhoneNum_Occupied_Label->setGeometry(QRect(410, 250, 131, 16));
        PhoneNum_Occupied_Label->setFont(font);
        PhoneNum_Occupied_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        ID_Occupied_Label = new QLabel(LoginMenu);
        ID_Occupied_Label->setObjectName("ID_Occupied_Label");
        ID_Occupied_Label->setGeometry(QRect(430, 310, 191, 16));
        ID_Occupied_Label->setFont(font);
        ID_Occupied_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Wrong_ID_Label = new QLabel(LoginMenu);
        Wrong_ID_Label->setObjectName("Wrong_ID_Label");
        Wrong_ID_Label->setGeometry(QRect(430, 310, 161, 16));
        Wrong_ID_Label->setFont(font);
        Wrong_ID_Label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Welcome_Label->raise();
        Close_Button->raise();
        Hide_Button->raise();
        Exit_Button->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        Visitor_ID->raise();
        Visitor_PhoneNum->raise();
        Exit_Button_2->raise();
        Login_Menu_Image_Label->raise();
        Login_Menu_Image_Label_2->raise();
        Input_Name_EditText->raise();
        Input_PhoneNum_EditText->raise();
        Visitor_PhoneNum_2->raise();
        Visitor_ID_2->raise();
        Input_ID_EditText->raise();
        Visitor_PhoneNum_3->raise();
        Visitor_Name->raise();
        Visitor_comboBox->raise();
        label_5->raise();
        label_10->raise();
        label_11->raise();
        Not_Input_Password_Label_2->raise();
        Wrong_Password_Type_Label->raise();
        Input_Password_EditText->raise();
        Wrong_Password_Length_Label->raise();
        Not_Input_Password_Label->raise();
        Input_Password_Again_EditText->raise();
        Password_Different_Label->raise();
        Wrong_PhoneNum_Label->raise();
        PhoneNum_Occupied_Label->raise();
        ID_Occupied_Label->raise();
        Wrong_ID_Label->raise();

        retranslateUi(change_info);
        QObject::connect(Close_Button, SIGNAL(clicked()), change_info, SLOT(on_Close_Button_clicked()));
        QObject::connect(Hide_Button, SIGNAL(clicked()), change_info, SLOT(on_Hide_Button_clicked()));
        QObject::connect(Input_PhoneNum_EditText, SIGNAL(textEdited(QString)), change_info, SLOT(on_Input_PhoneNum_EditText_textEdited()));
        QObject::connect(Input_ID_EditText, SIGNAL(textEdited(QString)), change_info, SLOT(on_Input_ID_EditText_textEdited()));
        QObject::connect(Input_Password_EditText, SIGNAL(textEdited(QString)), change_info, SLOT(on_Input_PassWord_EditText_textEdited()));
        QObject::connect(Input_Password_Again_EditText, SIGNAL(textEdited(QString)), change_info, SLOT(on_Input_PassWord_Again_EditText_textEdited()));
        QObject::connect(Exit_Button_2, SIGNAL(clicked()), change_info, SLOT(on_Register_PushButton_clicked()));
        QObject::connect(Exit_Button, SIGNAL(clicked()), change_info, SLOT(on_Close_Button_clicked()));
        QObject::connect(Visitor_comboBox, SIGNAL(currentTextChanged(QString)), change_info, SLOT(on_Person_combox_changed()));

        QMetaObject::connectSlotsByName(change_info);
    } // setupUi

    void retranslateUi(QWidget *change_info)
    {
        change_info->setWindowTitle(QCoreApplication::translate("change_info", "change_info", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\350\257\267\351\200\211\346\213\251\346\233\264\346\224\271\344\277\241\346\201\257</span></p></body></html>", nullptr));
        Close_Button->setText(QCoreApplication::translate("change_info", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("change_info", "\342\200\224", nullptr));
        Exit_Button->setText(QCoreApplication::translate("change_info", "\345\217\226\346\266\210\344\277\256\346\224\271", nullptr));
        label_7->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\211\213\346\234\272\345\217\267\357\274\232</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232</span></p></body></html>", nullptr));
        Visitor_ID->setText(QCoreApplication::translate("change_info", "<html><head/><body><p>\350\272\253\344\273\275\350\257\201\345\217\267\350\276\223\345\207\272\345\234\250\350\277\231\351\207\214</p></body></html>", nullptr));
        Visitor_PhoneNum->setText(QCoreApplication::translate("change_info", "<html><head/><body><p>\346\211\213\346\234\272\345\217\267\350\276\223\345\207\272\345\234\250\350\277\231\351\207\214</p></body></html>", nullptr));
        Exit_Button_2->setText(QCoreApplication::translate("change_info", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        Login_Menu_Image_Label->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Login_Menu_Image_Label_2->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Input_Name_EditText->setPlaceholderText(QCoreApplication::translate("change_info", "\346\227\240\346\233\264\346\224\271\345\210\231\344\270\215\345\241\253", nullptr));
        Input_PhoneNum_EditText->setPlaceholderText(QCoreApplication::translate("change_info", "\346\227\240\346\233\264\346\224\271\345\210\231\344\270\215\345\241\253", nullptr));
        Visitor_PhoneNum_2->setText(QCoreApplication::translate("change_info", "<html><head/><body><p>\345\216\237\346\211\213\346\234\272\345\217\267\357\274\232</p></body></html>", nullptr));
        Visitor_ID_2->setText(QCoreApplication::translate("change_info", "<html><head/><body><p>\345\216\237\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232</p></body></html>", nullptr));
        Input_ID_EditText->setPlaceholderText(QCoreApplication::translate("change_info", "\346\227\240\346\233\264\346\224\271\345\210\231\344\270\215\345\241\253", nullptr));
        Visitor_PhoneNum_3->setText(QCoreApplication::translate("change_info", "<html><head/><body><p>\345\216\237\345\247\223\345\220\215\357\274\232</p></body></html>", nullptr));
        Visitor_Name->setText(QCoreApplication::translate("change_info", "<html><head/><body><p>\345\247\223\345\220\215\350\276\223\345\207\272\345\234\250\350\277\231\351\207\214</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\346\270\270\345\256\242\357\274\232</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232</span></p></body></html>", nullptr));
        Not_Input_Password_Label_2->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201\357\274\201 </span></p></body></html>", nullptr));
        Wrong_Password_Type_Label->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \345\257\206\347\240\201\350\207\263\345\260\221\350\246\201\345\214\205\345\220\253\346\225\260\345\255\227\345\222\214\345\255\227\346\257\215\357\274\201 </span></p></body></html>", nullptr));
        Input_Password_EditText->setPlaceholderText(QCoreApplication::translate("change_info", "\350\257\267\350\256\276\347\275\2563-16\344\275\215\345\257\206\347\240\201\357\274\214\350\207\263\345\260\221\345\214\205\345\220\253\346\225\260\345\255\227\345\222\214\345\255\227\346\257\215", nullptr));
        Wrong_Password_Length_Label->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \345\257\206\347\240\201\351\225\277\345\272\246\345\277\205\351\241\273\344\270\2723-16\344\275\215\357\274\201 </span></p></body></html>", nullptr));
        Password_Different_Label->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \344\270\244\346\254\241\350\276\223\345\205\245\347\232\204\345\257\206\347\240\201\344\270\215\344\270\200\350\207\264\357\274\201 </span></p></body></html>", nullptr));
        Not_Input_Password_Label->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">  \303\227 \350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\357\274\201 </span></p></body></html>", nullptr));
        Input_Password_Again_EditText->setPlaceholderText(QCoreApplication::translate("change_info", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        Wrong_PhoneNum_Label->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\257\267\350\276\223\345\205\245\346\255\243\347\241\256\347\232\204\346\211\213\346\234\272\345\217\267\357\274\201 </span></p></body></html>", nullptr));
        PhoneNum_Occupied_Label->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \346\211\213\346\234\272\345\217\267\345\267\262\350\242\253\346\263\250\345\206\214\357\274\201 </span></p></body></html>", nullptr));
        ID_Occupied_Label->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\272\253\344\273\275\350\257\201\345\217\267\345\267\262\350\242\253\345\205\266\344\273\226\350\264\246\345\217\267\347\273\221\345\256\232\357\274\201 </span></p></body></html>", nullptr));
        Wrong_ID_Label->setText(QCoreApplication::translate("change_info", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">\303\227 \350\257\267\350\276\223\345\205\245\346\255\243\347\241\256\347\232\204\350\272\253\344\273\275\350\257\201\345\217\267\357\274\201 </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_info: public Ui_change_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_INFO_H
