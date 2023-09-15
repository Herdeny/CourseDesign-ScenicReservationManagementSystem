/********************************************************************************
** Form generated from reading UI file 'appoint_success.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOINT_SUCCESS_H
#define UI_APPOINT_SUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Appoint_Success
{
public:
    QFrame *frame;
    QTextBrowser *textBrowser;
    QPushButton *Return_Login_Button;
    QLabel *label;

    void setupUi(QWidget *Appoint_Success)
    {
        if (Appoint_Success->objectName().isEmpty())
            Appoint_Success->setObjectName("Appoint_Success");
        Appoint_Success->resize(423, 198);
        frame = new QFrame(Appoint_Success);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 421, 201));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(100, 90, 201, 51));
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
        label->setGeometry(QRect(100, 10, 201, 81));
        label->setStyleSheet(QString::fromUtf8("color: rgb(1, 190, 17);"));

        retranslateUi(Appoint_Success);
        QObject::connect(Return_Login_Button, SIGNAL(clicked()), Appoint_Success, SLOT(on_Return_Login_PushButton_clicked()));

        QMetaObject::connectSlotsByName(Appoint_Success);
    } // setupUi

    void retranslateUi(QWidget *Appoint_Success)
    {
        Appoint_Success->setWindowTitle(QCoreApplication::translate("Appoint_Success", "Appoint_Success", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Appoint_Success", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\351\242\204\347\272\246\346\210\220\345\212\237\357\274\201</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\347\245\235\346\202\250\346\270\270\347\216\251\346\204\211\345\277\253\357\274\201</span></p></"
                        "body></html>", nullptr));
        Return_Login_Button->setText(QCoreApplication::translate("Appoint_Success", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("Appoint_Success", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">2022-03-05 </span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">14:00~15:00</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Appoint_Success: public Ui_Appoint_Success {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINT_SUCCESS_H
