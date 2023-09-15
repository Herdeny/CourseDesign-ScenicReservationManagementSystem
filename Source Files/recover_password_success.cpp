//
// Created by 16531 on 2023/5/29.
//

// You may need to build the project (run Qt uic code generator) to get "ui_recover_password_success.h" resolved

#include "../Header Files/recover_password_success.h"
#include "../Header Files/mainwindow.h"


recover_password_success::recover_password_success(QWidget *parent) :
        QWidget(parent), ui(new Ui::recover_password_success) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
}

recover_password_success::~recover_password_success() {
    delete ui;
}

void recover_password_success::on_Return_Login_PushButton_clicked() {
    MainWindow *main=new MainWindow;
    main->show();
    this->close();
}