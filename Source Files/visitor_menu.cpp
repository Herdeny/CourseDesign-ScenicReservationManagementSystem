#include "../Header Files/visitor_menu.h"
#include "../Header Files/schedule.h"
#include "../Header Files/mainwindow.h"
#include "../Header Files/appoint_block.h"
#include "../Header Files/visitor_manager.h"

Visitor_Menu::Visitor_Menu(QWidget *parent) :
        QWidget(parent), ui(new Ui::Visitor_Menu) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
    QPixmap pixmap(":/new/prefix1/image/register.png");
    pixmap.scaled(ui->Login_Menu_Image_Label->size());
    ui->Login_Menu_Image_Label->setStyleSheet("QLabel{border-radius:16px;}");
    ui->Login_Menu_Image_Label->setPixmap(pixmap);
    ui->Login_Menu_Image_Label_2->setPixmap(pixmap);
}

Visitor_Menu::~Visitor_Menu() {
    delete ui;
}

void Visitor_Menu::on_Appoint_Button_clicked() {
    schedule *schedule_ = new schedule;
    schedule_->show();
}

void Visitor_Menu::on_Information_Button_clicked() {
    Appoint_Block *apb = new Appoint_Block;
    apb->show();
}

void Visitor_Menu::on_Manager_Button_clicked() {
    Visitor_Manager *visitorManager=new Visitor_Manager;
    visitorManager->show();
}

void Visitor_Menu::on_Exit_Button_clicked() {
    MainWindow *main = new MainWindow;
    main->show();
    delete this;
}

void Visitor_Menu::on_Close_Button_clicked() {
    delete this;
}

void Visitor_Menu::on_Hide_Button_clicked() {
    this->showMinimized();
}

