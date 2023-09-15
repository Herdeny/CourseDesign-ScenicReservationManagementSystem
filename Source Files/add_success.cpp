//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_add_success.h" resolved

#include "../Header Files/add_success.h"


add_success::add_success(QWidget *parent) :
        QWidget(parent), ui(new Ui::add_success) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
}

add_success::~add_success() {
    delete ui;
}

void add_success::on_Return_Login_PushButton_clicked() {
    this->close();
}
