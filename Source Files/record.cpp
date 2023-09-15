//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_record.h" resolved

#include "../Header Files/record.h"


record::record(QWidget *parent) :
        QWidget(parent), ui(new Ui::record) {
    ui->setupUi(this);
}

record::~record() {
    delete ui;
}

void record::on_Close_Button_clicked() {
    this->close();
}

void record::on_Hide_Button_clicked() {
    this->minimumSize();
}

void record::on_Return_Login_PushButton_clicked() {
    this->close();
}

void record::setText(const QString &string) {
    this->ui->textBrowser->setText(string);
}
