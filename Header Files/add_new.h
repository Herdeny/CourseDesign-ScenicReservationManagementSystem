//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_ADD_NEW_H
#define PROGRAMMDESIGN_ADD_NEW_H

#include <QWidget>
#include "ui_add_new.h"


QT_BEGIN_NAMESPACE
namespace Ui { class add_new; }
QT_END_NAMESPACE

class add_new : public QWidget {
Q_OBJECT

public:
    explicit add_new(QWidget *parent = nullptr);

    ~add_new() override;

private slots:

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

    void on_Input_PhoneNum_EditText_textEdited(const QString &arg1);

    void on_Input_Name_EditText_textEdited(const QString &arg1);

    void on_Input_ID_EditText_textEdited(const QString &arg1);

    void on_Input_Password_EditText_textEdited(const QString &arg1);

    void on_Input_Password_Again_EditText_textEdited(const QString &arg1);

    void on_Register_PushButton_clicked();

private:
    Ui::add_new *ui;
};


#endif //PROGRAMMDESIGN_ADD_NEW_H
