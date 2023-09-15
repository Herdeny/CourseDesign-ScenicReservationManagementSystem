//
// Created by 16531 on 2023/5/30.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Admin_Menu.h" resolved

#include "../Header Files/admin_menu.h"
#include "../Header Files/admin_time.h"
#include "../Header Files/admin_login.h"


Admin_Menu::Admin_Menu(QWidget *parent) :
        QWidget(parent), ui(new Ui::Admin_Menu) {
    ui->setupUi(this);
    QPixmap pixmap(":/new/prefix1/image/admin.png");
    pixmap.scaled(ui->Login_Menu_Image_Label->size());
    ui->Login_Menu_Image_Label->setStyleSheet("QLabel{border-radius:16px;}");
    ui->Login_Menu_Image_Label->setPixmap(pixmap);
    ui->Login_Menu_Image_Label_2->setPixmap(pixmap);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
}

Admin_Menu::~Admin_Menu() {
    delete ui;
}

void Admin_Menu::on_Close_Button_clicked() {
    this->close();
}

void Admin_Menu::on_Hide_Button_clicked() {
    this->minimumSize();
}

void Admin_Menu::on_Appoint_Button_clicked() {
    admin_time *adminChooseTime=new admin_time;
    adminChooseTime->show();
}
void Admin_Menu::on_Visitor_Button_clicked() {

}
void Admin_Menu::on_Exit_Button_clicked() {
    Admin_Login *adminLogin=new Admin_Login;
    adminLogin->show();
    this->close();
}


