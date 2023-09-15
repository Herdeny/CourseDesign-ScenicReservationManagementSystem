//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Appoint_Success.h" resolved

#include "../Header Files/appoint_success.h"


Appoint_Success::Appoint_Success(QWidget *parent) :
        QWidget(parent), ui(new Ui::Appoint_Success) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
}

Appoint_Success::~Appoint_Success() {
    delete ui;
}

void Appoint_Success::on_Return_Login_PushButton_clicked() {
    this->close();
}

void Appoint_Success::setText(const string & date) {
    this->ui->label->setText(QString::fromStdString(date));
}
