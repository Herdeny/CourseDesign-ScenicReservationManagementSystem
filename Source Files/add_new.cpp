//
// Created by 16531 on 2023/6/21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_add_new.h" resolved

#include <fstream>
#include "../Header Files/add_new.h"
#include "../SQLite/sqlite3.h"
#include "../program/system.h"
#include "../SQLite/SQLconnect.h"
#include "../Header Files/add_success.h"


add_new::add_new(QWidget *parent) :
        QWidget(parent), ui(new Ui::add_new) {
    ui->setupUi(this);
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
    ui->Not_Input_ID_Label->close();
    ui->Not_Input_PhoneNum_Label->close();
    ui->Not_Input_Password_Label->close();
    ui->Not_Input_Password_Label_2->close();
    ui->Wrong_PhoneNum_Label->close();
    ui->Wrong_ID_Label->close();
    ui->Wrong_Password_Length_Label->close();
    ui->Wrong_Password_Type_Label->close();
    ui->Password_Different_Label->close();
    ui->ID_Occupied_Label->close();
    ui->PhoneNum_Occupied_Label->close();
    ui->Not_Input_Name_Label->close();
    QPixmap pixmap(":/new/prefix1/image/register.png");
    pixmap.scaled(ui->Login_Menu_Image_Label->size());
    ui->Login_Menu_Image_Label->setStyleSheet("QLabel{border-radius:16px;}");
    ui->Login_Menu_Image_Label->setPixmap(pixmap);
}

add_new::~add_new() {
    delete ui;
}

void add_new::on_Close_Button_clicked() {
    window()->close();
}

void add_new::on_Hide_Button_clicked() {
    this->showMinimized();
}

void add_new::on_Input_Name_EditText_textEdited(const QString &arg1) {
    ui->Not_Input_Name_Label->close();

    ui->Input_Name_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");

}

void add_new::on_Input_PhoneNum_EditText_textEdited(const QString &arg1) {
    sqlite3 *sql;
    ui->Not_Input_PhoneNum_Label->close();
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

void add_new::on_Input_ID_EditText_textEdited(const QString &arg1) {
    sqlite3 *sql;
    ui->Not_Input_ID_Label->close();
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

void add_new::on_Input_Password_EditText_textEdited(const QString &arg1) {
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

void add_new::on_Input_Password_Again_EditText_textEdited(const QString &arg1) {
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

void add_new::on_Register_PushButton_clicked() {
    int flag = 0;
    sqlite3 *sql;
    if (ui->Input_Name_EditText->text() == "") {
        ui->Input_Name_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_Name_Label->show();
    } else flag++;
    if (ui->Input_PhoneNum_EditText->text() == "") {
        ui->Input_PhoneNum_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_PhoneNum_Label->show();

    } else flag++;
    if (ui->Input_ID_EditText->text() == "") {
        ui->Input_ID_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_ID_Label->show();
    } else flag++;
    if (ui->Input_Password_EditText->text() == "") {
        ui->Input_Password_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_Password_Label->show();
    } else flag++;
    if (ui->Input_Password_Again_EditText->text() == "") {
        ui->Input_Password_Again_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_Password_Label_2->show();
    } else flag++;
    if (checkPasswordType(ui->Input_Password_EditText->text()) &&
        ui->Input_Password_EditText->text() == ui->Input_Password_Again_EditText->text() &&
        checkIDCard(ui->Input_ID_EditText->text()) && IsValidPhoneNumber(ui->Input_PhoneNum_EditText->text()))
        flag++;
    if (check_Visitor_NO(sql, 1, ui->Input_PhoneNum_EditText->text()) == 0) {
        flag++;
    }
    if (check_Visitor_NO(sql, 2, ui->Input_ID_EditText->text()) == 0) {
        flag++;
    }
    if (flag == 8) {
        RegisterVisitor(sql, ui->Input_Name_EditText->text(), ui->Input_PhoneNum_EditText->text(),
                        ui->Input_ID_EditText->text(), ui->Input_Password_EditText->text());
        Visitor newVisitor(check_Visitor_NO(sql, 1, ui->Input_PhoneNum_EditText->text()));
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
