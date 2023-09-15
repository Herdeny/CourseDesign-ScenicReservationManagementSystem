//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_admin_time.h" resolved

#include "../Header Files/admin_time.h"
#include "../Header Files/admin_choose_time.h"


admin_time::admin_time(QWidget *parent) :
        QWidget(parent), ui(new Ui::admin_time) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
}

admin_time::~admin_time() {
    delete ui;
}

void admin_time::on_Close_Button_clicked() {
    delete this;
}

void admin_time::on_Hide_Button_clicked() {
    this->showMinimized();
}

void admin_time::on_Exit_Button_clicked() {
    delete this;
}

void admin_time::on_Date_Choosed() {
    admin_choose_time *chooseTime = new admin_choose_time;
    chooseTime->show();
    std::string string = this->ui->calendarWidget->selectedDate().toString("yyyy-MM-dd").toStdString();
    chooseTime->showDate(string);
}

void admin_time::on_Choose_Time_Button_clicked() {
    admin_choose_time *chooseTime = new admin_choose_time;
    chooseTime->show();
    chooseTime->showDate(this->ui->calendarWidget->selectedDate().toString("yyyy-MM-dd").toStdString());
}
