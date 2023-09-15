//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_cancel_success.h" resolved

#include "../Header Files/cancel_success.h"



cancel_success::cancel_success(QWidget *parent) :
        QWidget(parent), ui(new Ui::cancel_success) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
}

cancel_success::~cancel_success() {
    delete ui;
}

void cancel_success::on_Return_Login_PushButton_clicked() {
    delete this;
}

void cancel_success::setText(const string &date) {
    this->ui->label->setText(QString::fromStdString(date));
}
