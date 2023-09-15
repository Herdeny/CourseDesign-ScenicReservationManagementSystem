//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Appoint_Block.h" resolved

#include <QDate>
#include "../Header Files/appoint_block.h"
#include "../SQLite/sqlite3.h"
#include "../SQLite/SQLconnect.h"
#include "fstream"
#include "../Header Files/cancel_fail.h"
#include "../Header Files/cancel_success.h"
#include "../Header Files/record.h"

Appoint_Block::Appoint_Block(QWidget *parent) :
        QWidget(parent), ui(new Ui::Appoint_Block) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
    QPixmap pixmap(":/new/prefix1/image/login.png");
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
    vector<string> strList;
    Stringsplit(newVisitor.getPeriod(), "_", strList);
    string date = strList[0] + "-" + strList[1] + "-" + strList[2] + " ";
    this->ui->Date_Label->setText(QString::fromStdString(date));
    date = strList[3] + ":00~" + to_string((stoi(strList[3]) + 1)) + ":00";
    this->ui->Date_Label_2->setText(QString::fromStdString(date));
}

Appoint_Block::~Appoint_Block() {
    delete ui;
}

void Appoint_Block::on_Person_combox_changed() {
    sqlite3 *sql;
    cout << this->ui->Visitor_comboBox->currentText().toStdString();
    Visitor newVisitor(check_Visitor_NO(sql, 4, this->ui->Visitor_comboBox->currentText()));
    newVisitor.initialized();
    this->ui->Visitor_ID->setText(QString::fromStdString(newVisitor.getID()));
    this->ui->Visitor_PhoneNum->setText(QString::fromStdString(newVisitor.getPhoneNum()));
    this->ui->Visitor_name->setText(QString::fromStdString(newVisitor.getName()));
    vector<string> strList;
    Stringsplit(newVisitor.getPeriod(), "_", strList);
    string date = strList[0] + "-" + strList[1] + "-" + strList[2] + " ";
    this->ui->Date_Label->setText(QString::fromStdString(date));
    date = strList[3] + ":00~" + to_string((stoi(strList[3]) + 1)) + ":00";
    this->ui->Date_Label_2->setText(QString::fromStdString(date));
}

void Appoint_Block::on_Close_Button_clicked() {
    delete this;
}

void Appoint_Block::on_Hide_Button_clicked() {
    this->minimumSize();
}

void Appoint_Block::on_Cancel_Button_clicked() {
    sqlite3 *sql;
    cout << this->ui->Visitor_comboBox->currentText().toStdString();
    Visitor newVisitor(check_Visitor_NO(sql, 4, this->ui->Visitor_comboBox->currentText()));
    newVisitor.initialized();
    if (newVisitor.compare_Period(getNowPeriod()) > 0) {
        vector<string> strLst;
        Stringsplit(newVisitor.getPeriod(), "_", strLst);
        int occupied = check_occupied(sql, stoi(strLst[3]), stoi(strLst[0]), stoi(strLst[1]), stoi(strLst[2])) - 1;
        set_occupied(sql, stoi(strLst[3]), stoi(strLst[0]), stoi(strLst[1]), stoi(strLst[2]), occupied);
        string newPeriod = "1900_12_31_0";
        newVisitor.setPeriod(newPeriod);
        UpdateVisitor(sql, 5, QString::fromStdString(newVisitor.getPeriod()), newVisitor.getNO());
        cancel_success *cancelSuccess = new cancel_success;
        cancelSuccess->show();
        string str1 = this->ui->Date_Label->text().toStdString() + " " + strLst[3] + ":00~" +
                      to_string((stoi(strLst[3]) + 1)) + ":00";
        cancelSuccess->setText(str1);
        ofstream ofstream1;
        ofstream1.open("recording.txt", ios::app | ios::out);
        ofstream1 << newVisitor.getName() << "(" << newVisitor.getPhoneNum() << ") disordered " << str1 << endl;
        ofstream1.close();
    } else {
        cancel_fail *cancelFail = new cancel_fail;
        cancelFail->show();
    }
}

void Appoint_Block::on_record_Button_clicked() {
    ifstream ifstream1;
    ifstream1.open("recording.txt", ios::in);
    record *record = new class record;
    record->show();
    string str1, str2;
    int x=0;
    while (!ifstream1.eof()) {
        ifstream1 >> str2;
        if (ifstream1.eof())break;
        str1 += str2;
        x++;
        if (x==4){
            str1+='\n';
            x=0;
        }else{
            str1+=' ';
        }

    }
    record->setText(QString::fromStdString(str1));
    ifstream1.close();
}
