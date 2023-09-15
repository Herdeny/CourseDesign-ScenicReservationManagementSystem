/********************************************************************************
** Form generated from reading UI file 'appoint_fail_occupied.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOINT_FAIL_OCCUPIED_H
#define UI_APPOINT_FAIL_OCCUPIED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Appoint_fail_occupied
{
public:
    QFrame *frame;
    QTextBrowser *textBrowser;
    QPushButton *Return_Login_Button;

    void setupUi(QWidget *Appoint_fail_occupied)
    {
        if (Appoint_fail_occupied->objectName().isEmpty())
            Appoint_fail_occupied->setObjectName("Appoint_fail_occupied");
        Appoint_fail_occupied->resize(419, 150);
        frame = new QFrame(Appoint_fail_occupied);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 421, 151));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(100, 30, 201, 51));
        Return_Login_Button = new QPushButton(frame);
        Return_Login_Button->setObjectName("Return_Login_Button");
        Return_Login_Button->setGeometry(QRect(100, 90, 201, 41));
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

        retranslateUi(Appoint_fail_occupied);
        QObject::connect(Return_Login_Button, SIGNAL(clicked()), Appoint_fail_occupied, SLOT(on_Return_Login_PushButton_clicked()));

        QMetaObject::connectSlotsByName(Appoint_fail_occupied);
    } // setupUi

    void retranslateUi(QWidget *Appoint_fail_occupied)
    {
        Appoint_fail_occupied->setWindowTitle(QCoreApplication::translate("Appoint_fail_occupied", "Appoint_fail_occupied", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Appoint_fail_occupied", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\346\202\250\345\267\262\346\234\211\351\242\204\347\272\246\357\274\214\350\257\267\345\205\210\345\217\226\346\266\210\357\274\201</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\351\242\204\347\272\246\345"
                        "\244\261\350\264\245</span></p></body></html>", nullptr));
        Return_Login_Button->setText(QCoreApplication::translate("Appoint_fail_occupied", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Appoint_fail_occupied: public Ui_Appoint_fail_occupied {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINT_FAIL_OCCUPIED_H
