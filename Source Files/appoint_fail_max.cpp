//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Appoint_fail_max.h" resolved

#include "../Header Files/appoint_fail_max.h"



Appoint_fail_max::Appoint_fail_max(QWidget *parent) :
        QWidget(parent), ui(new Ui::Appoint_fail_max) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
}
void Appoint_fail_max::on_Return_Login_PushButton_clicked() {
    this->close();
}
Appoint_fail_max::~Appoint_fail_max() {
    delete ui;
}
