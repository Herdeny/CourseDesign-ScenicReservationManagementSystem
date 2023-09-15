//
// Created by 16531 on 2023/5/23.
//

#ifndef PROGRAMMDESIGN_REGISTER_H
#define PROGRAMMDESIGN_REGISTER_H

#include "ui_Register.h"
#include "../program/system.h"
#include "QMouseEvent"
#include "register_success.h"



class Register : public QMainWindow {
Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);


    ~Register() override;

    bool eventFilter(QObject *obj, QEvent *event);


signals:

    void on_Return_Login_Label_clicked();

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
    Ui::Register *ui;
};


#endif //PROGRAMMDESIGN_REGISTER_H
