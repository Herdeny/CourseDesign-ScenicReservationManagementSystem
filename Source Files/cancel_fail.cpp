//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_cancel_fail.h" resolved

#include "../Header Files/cancel_fail.h"



cancel_fail::cancel_fail(QWidget *parent) :
        QWidget(parent), ui(new Ui::cancel_fail) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
}

cancel_fail::~cancel_fail() {
    delete ui;
}

void cancel_fail::on_Return_Login_PushButton_clicked() {
    this->close();
}
