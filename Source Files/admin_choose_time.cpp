//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_admin_choose_time.h" resolved

#include <QDate>
#include "../Header Files/admin_choose_time.h"
#include "../Header Files/change_success.h"
#include "../SQLite/sqlite3.h"
#include "../program/system.h"
#include "../SQLite/SQLconnect.h"


admin_choose_time::admin_choose_time(QWidget *parent) :
        QWidget(parent), ui(new Ui::admin_choose_time) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
    QPixmap pixmap(":/new/prefix1/image/admin.png");
    pixmap.scaled(ui->Login_Menu_Image_Label->size());
    ui->Login_Menu_Image_Label->setStyleSheet("QLabel{border-radius:16px;}");
    ui->Login_Menu_Image_Label->setPixmap(pixmap);
    ui->Login_Menu_Image_Label_2->setPixmap(pixmap);

}

admin_choose_time::~admin_choose_time() {
    delete ui;
}

QString admin_choose_time::showDate(const std::string string1) {
    this->ui->Date_Label->setText(QString::fromStdString(string1));
    vector<string> strLst;
    Stringsplit(string1, "-", strLst);
    for (int j = 0; j < 24; ++j) {
        sqlite3 *sql;
        QString string = QString::fromStdString((std::to_string(j) + ":00~" + std::to_string((j + 1)) + ":00"));
        if (check_capacity(sql, j, stoi(strLst[0]), stoi(strLst[1]), stoi(strLst[2]))) {
            this->ui->Time_comboBox->addItem(string);
        }
    }
}

void admin_choose_time::on_Time_combox_changed() {
    sqlite3 *sql;
    QString str;
    str.fromStdString(this->ui->Date_Label->text().toStdString());
    QDate date = QDate::fromString(this->ui->Date_Label->text(), "yyyy-MM-dd");
    int hour = stoi(ui->Time_comboBox->currentText().toStdString().substr(0,
                                                                          ui->Time_comboBox->currentText().toStdString().find(
                                                                                  ':')));
    this->ui->spinBox->setValue((check_capacity(sql, hour, date.year(), date.month(), date.day())));
    this->ui->Available_Account->setText(
            QString::number(check_occupied(sql, hour, date.year(), date.month(), date.day())));
}

void admin_choose_time::on_change_Button_clicked() {
    sqlite3 *sql;
    QString str;
    str.fromStdString(this->ui->Date_Label->text().toStdString());
    QDate date = QDate::fromString(this->ui->Date_Label->text(), "yyyy-MM-dd");
    int hour = stoi(ui->Time_comboBox->currentText().toStdString().substr(0,ui->Time_comboBox->currentText().toStdString().find(':')));
    set_capacity(sql, hour, date.year(), date.month(), date.day(), this->ui->spinBox->value());
    change_success *changeSuccess=new change_success;
    changeSuccess->show();
    this->close();
}

void admin_choose_time::on_change_all_Button_clicked() {
    sqlite3 *sql;
    QString str;
    str.fromStdString(this->ui->Date_Label->text().toStdString());
    int LEAP[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int nLEAP[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    QDate date = QDate::fromString(this->ui->Date_Label->text(), "yyyy-MM-dd");
    bool leap_year = false;
    if (date.year() % 4 == 0 && date.year() % 100 != 0 || date.year() % 400 == 0) leap_year = true;
    for (int i = 1; i < 13; ++i) {
        for (int j = 1; j <= (leap_year ? LEAP[i] : nLEAP[i]); ++j) {
            for (int k = 0; k < 24; ++k) {
                set_capacity(sql, k, date.year(), i, j, this->ui->spinBox->value());
            }
        }
    }
    change_success *changeSuccess=new change_success;
    changeSuccess->show();
    this->close();
}

void admin_choose_time::on_Close_Button_clicked() {
    this->close();
}

void admin_choose_time::on_Hide_Button_clicked() {
    this->minimumSize();

}
