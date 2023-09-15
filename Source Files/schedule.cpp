
#include "../Header Files/schedule.h"
#include "../Header Files/choose_time.h"
#include "../SQLite/SQLconnect.h"
#include "ctime"


schedule::schedule(QWidget *parent) :
        QWidget(parent), ui(new Ui::schedule) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
    time_t nowtime;
    time(&nowtime); //获取1970年1月1日0点0分0秒到现在经过的秒数
    tm *p = localtime(&nowtime);
    this->ui->calendarWidget->setMinimumDate(QDate(p->tm_year + 1900, p->tm_mon + 1, p->tm_mday));
    this->ui->calendarWidget->setMaximumDate(QDate(p->tm_year+1900, 12, 31));
}

schedule::~schedule() {
    delete ui;
}

void schedule::on_Close_Button_clicked() {
    delete this;
}

void schedule::on_Hide_Button_clicked() {
    this->showMinimized();
}

void schedule::on_Exit_Button_clicked() {
    delete this;
}

void schedule::on_Date_Choosed() {
    choose_time *chooseTime = new choose_time;
    chooseTime->show();
    chooseTime->showDate(this->ui->calendarWidget->selectedDate());
}

void schedule::on_Choose_Time_Button_clicked() {
    choose_time *chooseTime = new choose_time;
    chooseTime->show();
    chooseTime->showDate(this->ui->calendarWidget->selectedDate());
}
