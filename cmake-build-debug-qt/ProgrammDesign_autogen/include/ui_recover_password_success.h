/********************************************************************************
** Form generated from reading UI file 'recover_password_success.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOVER_PASSWORD_SUCCESS_H
#define UI_RECOVER_PASSWORD_SUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recover_password_success
{
public:
    QFrame *frame;
    QTextBrowser *textBrowser;
    QPushButton *Return_Login_Button;

    void setupUi(QWidget *recover_password_success)
    {
        if (recover_password_success->objectName().isEmpty())
            recover_password_success->setObjectName("recover_password_success");
        recover_password_success->resize(416, 154);
        frame = new QFrame(recover_password_success);
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

        retranslateUi(recover_password_success);
        QObject::connect(Return_Login_Button, SIGNAL(clicked()), recover_password_success, SLOT(on_Return_Login_PushButton_clicked()));

        QMetaObject::connectSlotsByName(recover_password_success);
    } // setupUi

    void retranslateUi(QWidget *recover_password_success)
    {
        recover_password_success->setWindowTitle(QCoreApplication::translate("recover_password_success", "recover_password_success", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("recover_password_success", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\346\210\220\345\212\237\351\207\215\347\275\256\345\257\206\347\240\201\357\274\201</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\346\204\237\350\260\242\346\202\250\344\275\277\347\224\250\346\270\270\345"
                        "\256\242\351\242\204\347\272\246\347\263\273\347\273\237</span></p></body></html>", nullptr));
        Return_Login_Button->setText(QCoreApplication::translate("recover_password_success", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recover_password_success: public Ui_recover_password_success {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOVER_PASSWORD_SUCCESS_H
