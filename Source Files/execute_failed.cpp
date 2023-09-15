//
// Created by 16531 on 2023/5/29.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Execute_Failed.h" resolved

#include "../Header Files/execute_failed.h"
#include "../Header Files/mainwindow.h"


Execute_Failed::Execute_Failed(QWidget *parent) :
        QWidget(parent), ui(new Ui::Execute_Failed) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
}

Execute_Failed::~Execute_Failed() {
    delete ui;
}
void Execute_Failed::on_Return_Login_PushButton_clicked() {
    this->close();
}

void Execute_Failed::setText(const string& str) {
    this->ui->textBrowser->setText(QString::fromStdString(str));
}
