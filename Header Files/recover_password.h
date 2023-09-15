#ifndef RECOVER_PASSWORD_H
#define RECOVER_PASSWORD_H

#include "../program/system.h"
#include "ui_recover_password.h"
#include "QMouseEvent"
#include "recover_password_success.h"
#include "execute_failed.h"

namespace Ui {
    class Recover_Password;
}

class Recover_Password : public QMainWindow {
Q_OBJECT

public:
    explicit Recover_Password(QWidget *parent = nullptr);

    ~Recover_Password();

    bool eventFilter(QObject *obj, QEvent *event);
signals:

    void on_Return_Login_Label_clicked();

private slots:

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

    void on_Input_PhoneNum_EditText_textEdited(const QString &arg1);

    void on_Input_ID_EditText_textEdited(const QString &arg1);

    void on_Input_Password_EditText_textEdited(const QString &arg1);

    void on_Input_Password_Again_EditText_textEdited(const QString &arg1);

    void on_Recover_PushButton_clicked();

private:
    Ui::Recover_Password *ui;
};

#endif // RECOVER_PASSWORD_H
