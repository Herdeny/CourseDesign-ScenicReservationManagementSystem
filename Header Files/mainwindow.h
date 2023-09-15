#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QMouseEvent"
#include "ui_mainwindow.h"
#include "register.h"
#include "../program/system.h"
#include "admin_login.h"
#include "recover_password.h"

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    //事件过滤器
    bool eventFilter(QObject *obj, QEvent *event);

    ~MainWindow();

private slots:

    void on_Input_Account_EditText_textEdited(const QString &arg1);

    void on_Close_Button_clicked();

    void on_Input_Password_EditText_textEdited(const QString &arg1);

    void on_Hide_Button_clicked();

    void on_Login_Button_clicked();

    void on_Register_Button_clicked();

    void show_Window();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
