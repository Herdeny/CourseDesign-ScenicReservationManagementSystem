//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Visitor_Manager.h" resolved

#include <fstream>
#include "../Header Files/visitor_manager.h"
#include "../SQLite/sqlite3.h"
#include "../program/Visitor.h"
#include "../SQLite/SQLconnect.h"
#include "../Header Files/add_menu.h"
#include "../Header Files/change_info.h"
#include "../Header Files/change_success.h"


Visitor_Manager::Visitor_Manager(QWidget *parent) :
        QWidget(parent), ui(new Ui::Visitor_Manager) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
    QPixmap pixmap(":/new/prefix1/image/recover.png");
    pixmap.scaled(ui->Login_Menu_Image_Label->size());
    ui->Login_Menu_Image_Label->setStyleSheet("QLabel{border-radius:16px;}");
    ui->Login_Menu_Image_Label->setPixmap(pixmap);
    ui->Login_Menu_Image_Label_2->setPixmap(pixmap);
    int Visitor_no;
    ifstream ifs;
    ifs.open("run.txt", ios::in);
    ifs >> Visitor_no;
    ifs.close();
    Visitor newVisitor(Visitor_no);
    newVisitor.initialized();
    this->ui->Visitor_comboBox->addItem(QString::fromStdString(newVisitor.getName()));
    for (const auto &i: newVisitor.getInstead()) {
        this->ui->Visitor_comboBox->addItem(QString::fromStdString(i.getName()));
    }
    this->ui->Visitor_ID->setText(QString::fromStdString(newVisitor.getID()));
    this->ui->Visitor_PhoneNum->setText(QString::fromStdString(newVisitor.getPhoneNum()));
    this->ui->Visitor_name->setText(QString::fromStdString(newVisitor.getName()));
}

void Visitor_Manager::on_Person_combox_changed() {
    sqlite3 *sql;
    cout << this->ui->Visitor_comboBox->currentText().toStdString();
    Visitor newVisitor(check_Visitor_NO(sql, 4, this->ui->Visitor_comboBox->currentText()));
    newVisitor.initialized();
    this->ui->Visitor_ID->setText(QString::fromStdString(newVisitor.getID()));
    this->ui->Visitor_PhoneNum->setText(QString::fromStdString(newVisitor.getPhoneNum()));
    this->ui->Visitor_name->setText(QString::fromStdString(newVisitor.getName()));
}

void Visitor_Manager::on_Close_Button_clicked() {
    delete this;
}

void Visitor_Manager::on_Hide_Button_clicked() {
    this->showMinimized();
}

Visitor_Manager::~Visitor_Manager() {
    delete ui;
}

void Visitor_Manager::on_Add_Button_clicked() {
    add_menu *addMenu = new add_menu;
    addMenu->show();
}

void Visitor_Manager::on_Change_Button_clicked() {
    change_info *changeInfo = new change_info;
    changeInfo->show();
    this->close();
}

void Visitor_Manager::on_Delete_Button_clicked() {
    int Visitor_no;
    ifstream ifs;
    ifs.open("run.txt", ios::in);
    ifs >> Visitor_no;
    ifs.close();
    Visitor newVisitor(Visitor_no);
    newVisitor.initialized();
    this->ui->Visitor_comboBox->addItem(QString::fromStdString(newVisitor.getName()));
    for (const auto &i: newVisitor.getInstead()) {
        this->ui->Visitor_comboBox->addItem(QString::fromStdString(i.getName()));
    }
    sqlite3 *sql;
    newVisitor.removeInstead(check_Visitor_NO(sql, 4, this->ui->Visitor_comboBox->currentText()));
    UpdateVisitor(sql,6,QString::fromStdString(newVisitor.Instead_to_string()),newVisitor.getNO());
    change_success *changeSuccess=new change_success;
    changeSuccess->show();
    this->close();
}