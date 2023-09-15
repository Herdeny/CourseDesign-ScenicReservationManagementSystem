/********************************************************************************
** Form generated from reading UI file 'admin_manager.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_MANAGER_H
#define UI_ADMIN_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_manager
{
public:

    void setupUi(QWidget *admin_manager)
    {
        if (admin_manager->objectName().isEmpty())
            admin_manager->setObjectName("admin_manager");
        admin_manager->resize(400, 300);

        retranslateUi(admin_manager);

        QMetaObject::connectSlotsByName(admin_manager);
    } // setupUi

    void retranslateUi(QWidget *admin_manager)
    {
        admin_manager->setWindowTitle(QCoreApplication::translate("admin_manager", "admin_manager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_manager: public Ui_admin_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_MANAGER_H
