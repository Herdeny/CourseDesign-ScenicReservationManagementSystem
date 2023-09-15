/********************************************************************************
** Form generated from reading UI file 'cancel_success.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANCEL_SUCCESS_H
#define UI_CANCEL_SUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cancel_success
{
public:
    QFrame *frame;
    QTextBrowser *textBrowser;
    QPushButton *Return_Login_Button;
    QLabel *label;

    void setupUi(QWidget *cancel_success)
    {
        if (cancel_success->objectName().isEmpty())
            cancel_success->setObjectName("cancel_success");
        cancel_success->resize(418, 205);
        frame = new QFrame(cancel_success);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 421, 201));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(100, 30, 201, 41));
        Return_Login_Button = new QPushButton(frame);
        Return_Login_Button->setObjectName("Return_Login_Button");
        Return_Login_Button->setGeometry(QRect(100, 150, 201, 41));
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
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 60, 201, 81));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 70, 70);"));

        retranslateUi(cancel_success);
        QObject::connect(Return_Login_Button, SIGNAL(clicked()), cancel_success, SLOT(on_Return_Login_PushButton_clicked()));

        QMetaObject::connectSlotsByName(cancel_success);
    } // setupUi

    void retranslateUi(QWidget *cancel_success)
    {
        cancel_success->setWindowTitle(QCoreApplication::translate("cancel_success", "cancel_success", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("cancel_success", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\346\210\220\345\212\237\345\217\226\346\266\210\351\242\204\347\272\246\357\274\201</span></p></body></html>", nullptr));
        Return_Login_Button->setText(QCoreApplication::translate("cancel_success", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("cancel_success", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">2022-03-05 </span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">14:00~15:00</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cancel_success: public Ui_cancel_success {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANCEL_SUCCESS_H
