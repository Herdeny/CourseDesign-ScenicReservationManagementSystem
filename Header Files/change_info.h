//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_CHANGE_INFO_H
#define PROGRAMMDESIGN_CHANGE_INFO_H

#include <QWidget>
#include "ui_change_info.h"

QT_BEGIN_NAMESPACE
namespace Ui { class change_info; }
QT_END_NAMESPACE

class change_info : public QWidget {
Q_OBJECT

public:
    explicit change_info(QWidget *parent = nullptr);

    ~change_info() override;

private slots:

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

    void on_Input_PhoneNum_EditText_textEdited(const QString &arg1);

    void on_Input_Name_EditText_textEdited(const QString &arg1);

    void on_Input_ID_EditText_textEdited(const QString &arg1);

    void on_Input_Password_EditText_textEdited(const QString &arg1);

    void on_Input_Password_Again_EditText_textEdited(const QString &arg1);

    void on_Register_PushButton_clicked();

    void on_Person_combox_changed();

private:
    Ui::change_info *ui;
};


#endif //PROGRAMMDESIGN_CHANGE_INFO_H
