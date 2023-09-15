//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_add_old.h" resolved

#include <fstream>
#include "../Header Files/add_old.h"
#include "../Header Files/add_success.h"
#include "../program/Visitor.h"
#include "../SQLite/sqlite3.h"
#include "../SQLite/SQLconnect.h"


add_old::add_old(QWidget *parent) :
        QWidget(parent), ui(new Ui::add_old) {
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setStyleSheet("border-radius:15px;");
    ui->Input_Account_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Input_Password_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Wrong_Account_Label->close();
    ui->Not_Exist_Account_Label->close();
    ui->Not_Input_Account_Label->close();
    ui->Wrong_Password_Label->close();
    ui->Not_Input_Password_Label->close();
    QPixmap pixmap(":/new/prefix1/image/login.png");
    pixmap.scaled(ui->Login_Menu_Image_Label->size());
    ui->Login_Menu_Image_Label->setStyleSheet("QLabel{border-radius:16px;}");
    ui->Login_Menu_Image_Label->setPixmap(pixmap);
}

add_old::~add_old() {
    delete ui;
}

void add_old::on_Input_Account_EditText_textEdited(const QString &arg1) {
    ui->Not_Input_Account_Label->close();
    ui->Not_Exist_Account_Label->close();
    if (checkIDCard(arg1) || arg1 == "" || IsValidPhoneNumber(arg1)) {
        ui->Input_Account_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
        ui->Wrong_Account_Label->close();
    } else {
        ui->Input_Account_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Wrong_Account_Label->show();
    }
}


void add_old::on_Input_Password_EditText_textEdited(const QString &arg1) {
    ui->Wrong_Password_Label->close();
    ui->Not_Input_Password_Label->close();
    ui->Input_Password_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
}

void add_old::on_Close_Button_clicked() {
    this->close();
}


void add_old::on_Hide_Button_clicked() {
    this->showMinimized();
}

void add_old::on_Login_Button_clicked() {
    int flag = 0, type, Visitor_NO;
    sqlite3 *sql;
    if (ui->Input_Account_EditText->text() == "") {
        ui->Input_Account_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);color:rgb(242, 115, 121);}");
        ui->Not_Input_Account_Label->show();
        return;
    } else flag++;
    if (ui->Input_Password_EditText->text() == "") {
        ui->Input_Password_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);color:rgb(242, 115, 121);}");
        ui->Not_Input_Password_Label->show();
        return;
    } else flag++;
    if (ui->Input_Account_EditText->text() != "" && ui->Input_Password_EditText->text() != "")
        flag++;
    else return;
    if (checkIDCard(ui->Input_Account_EditText->text())) {
        type = 2;
        flag++;
    } else if (IsValidPhoneNumber(ui->Input_Account_EditText->text())) {
        type = 1;
        flag++;
    } else return;
    if ((Visitor_NO = check_Visitor_NO(sql, type, ui->Input_Account_EditText->text()))) {
        ui->Not_Exist_Account_Label->close();
        if (md5(ui->Input_Password_EditText->text().toStdString()).compare(check_Visitor(sql, Visitor_NO, 4)) == 0) {
            flag++;
        } else {
            ui->Wrong_Password_Label->show();
            ui->Input_Password_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);color:rgb(242, 115, 121);}");
            return;
        }
    } else {
        ui->Input_Account_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);color:rgb(242, 115, 121);}");
        ui->Not_Exist_Account_Label->show();
    }

    if (flag == 5) {
        Visitor newVisitor(Visitor_NO);
        int Visitor_no;
        ifstream ifs;
        ifs.open("run.txt", ios::in);
        ifs >> Visitor_no;
        ifs.close();
        Visitor firstVisitor(Visitor_no);
        firstVisitor.initialized();
        firstVisitor.getInstead().push_back(newVisitor);
        UpdateVisitor(sql, 6, QString::fromStdString(firstVisitor.Instead_to_string()), firstVisitor.getNO());
        add_success *regc = new add_success;
        regc->show();
        this->close();
    }
}
