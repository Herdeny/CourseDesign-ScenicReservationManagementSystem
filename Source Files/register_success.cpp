//
// Created by 16531 on 2023/5/25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Register_success.h" resolved

#include "../Header Files/register_success.h"
#include "../Header Files/mainwindow.h"


Register_success::Register_success(QWidget *parent) :
        QWidget(parent), ui(new Ui::Register_success) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
}

Register_success::~Register_success() {
    delete ui;
}

void Register_success::on_Return_Login_PushButton_clicked() {
    MainWindow *main=new MainWindow;
    main->show();
    this->close();
}
