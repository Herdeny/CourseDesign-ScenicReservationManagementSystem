/********************************************************************************
** Form generated from reading UI file 'add_fail_max.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_FAIL_MAX_H
#define UI_ADD_FAIL_MAX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_fail_max
{
public:
    QFrame *frame;
    QTextBrowser *textBrowser;
    QPushButton *Return_Login_Button;

    void setupUi(QWidget *add_fail_max)
    {
        if (add_fail_max->objectName().isEmpty())
            add_fail_max->setObjectName("add_fail_max");
        add_fail_max->resize(417, 150);
        frame = new QFrame(add_fail_max);
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

        retranslateUi(add_fail_max);
        QObject::connect(Return_Login_Button, SIGNAL(clicked()), add_fail_max, SLOT(on_Return_Login_PushButton_clicked()));

        QMetaObject::connectSlotsByName(add_fail_max);
    } // setupUi

    void retranslateUi(QWidget *add_fail_max)
    {
        add_fail_max->setWindowTitle(QCoreApplication::translate("add_fail_max", "add_fail_max", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("add_fail_max", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\346\226\260\345\242\236\346\270\270\345\256\242\344\277\241\346\201\257\345\244\261\350\264\245\357\274\201</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\345\267\262\350\276\276\345\210\260\346\234\200\345"
                        "\244\247\346\267\273\345\212\240\346\225\260\351\207\217</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        Return_Login_Button->setText(QCoreApplication::translate("add_fail_max", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_fail_max: public Ui_add_fail_max {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_FAIL_MAX_H
