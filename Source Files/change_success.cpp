//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_change_success.h" resolved

#include "../Header Files/change_success.h"



change_success::change_success(QWidget *parent) :
        QWidget(parent), ui(new Ui::change_success) {
    ui->setupUi(this);
}

change_success::~change_success() {
    delete ui;
}

void change_success::on_Return_Login_PushButton_clicked() {
    this->close();
}
