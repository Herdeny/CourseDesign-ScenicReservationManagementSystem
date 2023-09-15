
#ifndef PROGRAMMDESIGN_ADMIN_LOGIN_H
#define PROGRAMMDESIGN_ADMIN_LOGIN_H

#include <QMainWindow>
#include "ui_Admin_Login.h"
#include "QMouseEvent"

class Admin_Login : public QMainWindow {
Q_OBJECT

public:
    explicit Admin_Login(QWidget *parent = nullptr);

    ~Admin_Login() override;

    bool eventFilter(QObject *obj, QEvent *event);

signals:

    void on_Visitor_Label_clicked();

private:
    Ui::Admin_Login *ui;
private slots:

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

    void on_Login_Button_clicked();

    void on_Input_Account_EditText_textEdited(const QString &arg1);

    void on_Input_Password_EditText_textEdited(const QString &arg1);

};


#endif //PROGRAMMDESIGN_ADMIN_LOGIN_H
