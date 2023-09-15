//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Appoint_fail_occupied.h" resolved

#include "../Header Files/appoint_fail_occupied.h"



Appoint_fail_occupied::Appoint_fail_occupied(QWidget *parent) :
        QWidget(parent), ui(new Ui::Appoint_fail_occupied) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
}
void Appoint_fail_occupied::on_Return_Login_PushButton_clicked() {
    this->close();
}
Appoint_fail_occupied::~Appoint_fail_occupied() {
    delete ui;
}
