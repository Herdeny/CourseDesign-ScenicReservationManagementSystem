//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_ADD_OLD_H
#define PROGRAMMDESIGN_ADD_OLD_H

#include <QWidget>
#include "ui_add_old.h"
#include "../program/system.h"

QT_BEGIN_NAMESPACE
namespace Ui { class add_old; }
QT_END_NAMESPACE

class add_old : public QWidget {
Q_OBJECT

private slots:

    void on_Input_Account_EditText_textEdited(const QString &arg1);

    void on_Close_Button_clicked();

    void on_Input_Password_EditText_textEdited(const QString &arg1);

    void on_Hide_Button_clicked();

    void on_Login_Button_clicked();

public:
    explicit add_old(QWidget *parent = nullptr);

    ~add_old() override;

private:
    Ui::add_old *ui;
};


#endif //PROGRAMMDESIGN_ADD_OLD_H
