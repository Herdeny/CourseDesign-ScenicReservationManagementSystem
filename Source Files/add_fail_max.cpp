#include "../Header Files/add_fail_max.h"


add_fail_max::add_fail_max(QWidget *parent) :
        QWidget(parent), ui(new Ui::add_fail_max) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
}

add_fail_max::~add_fail_max() {
    delete ui;
}

void add_fail_max::on_Return_Login_PushButton_clicked() {
    this->close();
}
