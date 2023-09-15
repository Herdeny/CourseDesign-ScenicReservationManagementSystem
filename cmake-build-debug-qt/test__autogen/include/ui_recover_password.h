/********************************************************************************
** Form generated from reading UI file 'recover_password.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOVER_PASSWORD_H
#define UI_RECOVER_PASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recover_Password
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Recover_Password)
    {
        if (Recover_Password->objectName().isEmpty())
            Recover_Password->setObjectName("Recover_Password");
        Recover_Password->resize(800, 600);
        menubar = new QMenuBar(Recover_Password);
        menubar->setObjectName("menubar");
        Recover_Password->setMenuBar(menubar);
        centralwidget = new QWidget(Recover_Password);
        centralwidget->setObjectName("centralwidget");
        Recover_Password->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Recover_Password);
        statusbar->setObjectName("statusbar");
        Recover_Password->setStatusBar(statusbar);

        retranslateUi(Recover_Password);

        QMetaObject::connectSlotsByName(Recover_Password);
    } // setupUi

    void retranslateUi(QMainWindow *Recover_Password)
    {
        Recover_Password->setWindowTitle(QCoreApplication::translate("Recover_Password", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recover_Password: public Ui_Recover_Password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOVER_PASSWORD_H
