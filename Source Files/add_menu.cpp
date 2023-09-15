#include "../Header Files/add_menu.h"
#include "fstream"
#include "../program/system.h"
#include "../program/Visitor.h"
#include "../Header Files/add_new.h"
#include "../Header Files/add_fail_max.h"
#include "../Header Files/add_old.h"

add_menu::add_menu(QWidget *parent) :
        QWidget(parent), ui(new Ui::add_menu) {
    ui->setupUi(this);
}

add_menu::~add_menu() {
    delete ui;
}

void add_menu::on_Exit_Button_clicked() {
    this->close();
}

void add_menu::on_add_old_Button_clicked() {
    int Visitor_no;
    ifstream ifs;
    ifs.open("run.txt", ios::in);
    ifs >> Visitor_no;
    ifs.close();
    Visitor newVisitor(Visitor_no);
    newVisitor.initialized();
    if (newVisitor.getInstead().size() < 3) {
        add_old *addold = new add_old;
        addold->show();
        delete this;
    } else {
        add_fail_max *addFailMax = new add_fail_max;
        addFailMax->show();
        delete this;
    }
}

void add_menu::on_add_new_Button_clicked() {
    int Visitor_no;
    ifstream ifs;
    ifs.open("run.txt", ios::in);
    ifs >> Visitor_no;
    ifs.close();
    Visitor newVisitor(Visitor_no);
    newVisitor.initialized();
    if (newVisitor.getInstead().size() < 3) {
        add_new *addNew = new add_new;
        addNew->show();
        delete this;
    } else {
        add_fail_max *addFailMax = new add_fail_max;
        addFailMax->show();
        delete this;
    }
}
