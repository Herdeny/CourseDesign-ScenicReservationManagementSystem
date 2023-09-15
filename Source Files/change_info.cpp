//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_change_info.h" resolved

#include <fstream>
#include "../Header Files/change_info.h"
#include "../SQLite/sqlite3.h"
#include "../program/system.h"
#include "../SQLite/SQLconnect.h"
#include "../Header Files/change_success.h"


change_info::change_info(QWidget *parent) :
        QWidget(parent), ui(new Ui::change_info) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
    ui->Input_Name_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Input_ID_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Input_PhoneNum_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Input_Password_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Input_Password_Again_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Not_Input_Password_Label->close();
    ui->Not_Input_Password_Label_2->close();
    ui->Wrong_PhoneNum_Label->close();
    ui->Wrong_ID_Label->close();
    ui->Wrong_Password_Length_Label->close();
    ui->Wrong_Password_Type_Label->close();
    ui->Password_Different_Label->close();
    ui->ID_Occupied_Label->close();
    ui->PhoneNum_Occupied_Label->close();
    QPixmap pixmap(":/new/prefix1/image/register.png");
    pixmap.scaled(ui->Login_Menu_Image_Label->size());
    ui->Login_Menu_Image_Label->setStyleSheet("QLabel{border-radius:16px;}");
    ui->Login_Menu_Image_Label->setPixmap(pixmap);
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
}

change_info::~change_info() {
    delete ui;
}

void change_info::on_Close_Button_clicked() {
    window()->close();
}

void change_info::on_Hide_Button_clicked() {
    this->showMinimized();
}

void change_info::on_Input_Name_EditText_textEdited(const QString &arg1) {
    ui->Input_Name_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");

}

void change_info::on_Input_PhoneNum_EditText_textEdited(const QString &arg1) {
    sqlite3 *sql;
    ui->PhoneNum_Occupied_Label->close();
    if (IsValidPhoneNumber(arg1) || arg1 == "") {
        ui->Wrong_PhoneNum_Label->close();
        if (check_Visitor_NO(sql, 1, ui->Input_PhoneNum_EditText->text()) == 0 || arg1 == "") {
            cout << check_Visitor_NO(sql, 1, ui->Input_PhoneNum_EditText->text()) << endl;
            ui->Input_PhoneNum_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
        } else {
            ui->PhoneNum_Occupied_Label->show();
            ui->Input_PhoneNum_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        }
    } else {
        ui->Input_PhoneNum_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Wrong_PhoneNum_Label->show();
    }
}

void change_info::on_Input_ID_EditText_textEdited(const QString &arg1) {
    sqlite3 *sql;
    ui->ID_Occupied_Label->close();
    if (checkIDCard(arg1) || arg1 == "") {
        ui->Wrong_ID_Label->close();
        if (check_Visitor_NO(sql, 2, ui->Input_ID_EditText->text()) == 0 || arg1 == "") {
            ui->Input_ID_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
        } else {
            ui->ID_Occupied_Label->show();
            ui->Input_ID_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        }
    } else {
        ui->Input_ID_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Wrong_ID_Label->show();
    }
}

void change_info::on_Input_Password_EditText_textEdited(const QString &arg1) {
    ui->Not_Input_Password_Label->close();
    ui->Not_Input_Password_Label_2->close();
    if (ui->Input_Password_Again_EditText->text() != "") {
        on_Input_Password_Again_EditText_textEdited(ui->Input_Password_Again_EditText->text());
    } else {
        ui->Input_Password_Again_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    }
    if (checkPasswordLength(arg1) || arg1 == "") {
        ui->Wrong_Password_Length_Label->close();
        if (checkPasswordType(arg1) || arg1 == "") {
            ui->Wrong_Password_Type_Label->close();
            if (ui->Input_Password_Again_EditText->text() == "" || arg1 == "") {
                ui->Input_Password_EditText->setStyleSheet(
                        "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
                ui->Input_Password_Again_EditText->setStyleSheet(
                        "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
            } else {
                ui->Input_Password_EditText->setStyleSheet(
                        "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
                ui->Input_Password_Again_EditText->setStyleSheet(
                        "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
                ui->Password_Different_Label->show();
            }
        } else {
            ui->Wrong_Password_Type_Label->show();
            ui->Input_Password_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        }
    } else {
        ui->Wrong_Password_Type_Label->close();
        ui->Input_Password_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Wrong_Password_Length_Label->show();
    }
}

void change_info::on_Input_Password_Again_EditText_textEdited(const QString &arg1) {
    ui->Not_Input_Password_Label->close();
    ui->Not_Input_Password_Label_2->close();
    if (arg1 == "" || ui->Input_Password_EditText->text() == "" || arg1 == ui->Input_Password_EditText->text()) {
        ui->Password_Different_Label->close();
        ui->Input_Password_Again_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
        if (checkPasswordType(ui->Input_Password_EditText->text()) || ui->Input_Password_EditText->text() == "") {
            ui->Input_Password_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
        }
    } else {
        ui->Input_Password_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Input_Password_Again_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Password_Different_Label->show();
    }
}

void change_info::on_Person_combox_changed() {
    sqlite3 *sql;
    cout << this->ui->Visitor_comboBox->currentText().toStdString();
    Visitor newVisitor(check_Visitor_NO(sql, 4, this->ui->Visitor_comboBox->currentText()));
    newVisitor.initialized();
    this->ui->Visitor_ID->setText(QString::fromStdString(newVisitor.getID()));
    this->ui->Visitor_PhoneNum->setText(QString::fromStdString(newVisitor.getPhoneNum()));
    this->ui->Visitor_Name->setText(QString::fromStdString(newVisitor.getName()));
}

void change_info::on_Register_PushButton_clicked() {
    sqlite3 *sql;
    Visitor newVisitor(check_Visitor_NO(sql, 4, this->ui->Visitor_comboBox->currentText()));
    if (ui->Input_Name_EditText->text() != "" && checkIDCard(ui->Input_ID_EditText->text()) &&
        check_Visitor_NO(sql, 2, ui->Input_ID_EditText->text()) == 0) {
        UpdateVisitor(sql, 3, ui->Input_Name_EditText->text(), newVisitor.getNO());
    }
    if (ui->Input_PhoneNum_EditText->text() != "" && IsValidPhoneNumber(ui->Input_PhoneNum_EditText->text()) &&
        check_Visitor_NO(sql, 1, ui->Input_PhoneNum_EditText->text()) == 0) {
        UpdateVisitor(sql, 2, ui->Input_PhoneNum_EditText->text(), newVisitor.getNO());
    }
    if (ui->Input_ID_EditText->text() != "") {
        UpdateVisitor(sql, 1, ui->Input_ID_EditText->text(), newVisitor.getNO());
    }
    if (ui->Input_Password_EditText->text() != "" && ui->Input_Password_Again_EditText->text() != "" &&
        checkPasswordType(ui->Input_Password_EditText->text()) &&
        ui->Input_Password_EditText->text() == ui->Input_Password_Again_EditText->text()) {
        UpdateVisitor(sql, 4, ui->Input_Password_EditText->text(), newVisitor.getNO());
    }
    change_success *changeSuccess=new change_success;
    changeSuccess->show();
    this->close();
}



