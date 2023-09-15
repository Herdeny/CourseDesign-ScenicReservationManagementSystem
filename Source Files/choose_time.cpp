#include <fstream>
#include "../Header Files/choose_time.h"
#include "../SQLite/sqlite3.h"
#include "../SQLite/SQLconnect.h"
#include "../Header Files/appoint_fail_max.h"
#include "../Header Files/appoint_fail_occupied.h"
#include "../Header Files/appoint_success.h"


choose_time::choose_time(QWidget *parent) :
        QWidget(parent), ui(new Ui::choose_time) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
    QPixmap pixmap(":/new/prefix1/image/recover.png");
    pixmap.scaled(ui->Login_Menu_Image_Label->size());
    ui->Login_Menu_Image_Label->setStyleSheet("QLabel{border-radius:16px;}");
    ui->Login_Menu_Image_Label->setPixmap(pixmap);
    ui->Login_Menu_Image_Label_2->setPixmap(pixmap);
}

choose_time::~choose_time() {
    delete ui;
}

void choose_time::showDate(const QDate &date) {
    this->ui->Date_Label->setText(date.toString("yyyy-MM-dd"));
    for (int j = 0; j < 24; ++j) {
        sqlite3 *sql;
        QString string = QString::fromStdString((to_string(j) + ":00~" + to_string((j + 1)) + ":00"));
        if (check_capacity(sql, j, date.year(), date.month(), date.day()) > 0) {
            this->ui->Time_comboBox->addItem(string);
        }
    }
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

void choose_time::on_Time_combox_changed() {
    sqlite3 *sql;
    QString str;
    str.fromStdString(this->ui->Date_Label->text().toStdString());
    QDate date = QDate::fromString(this->ui->Date_Label->text(), "yyyy-MM-dd");
    int hour = stoi(ui->Time_comboBox->currentText().toStdString().substr(0,
                                                                          ui->Time_comboBox->currentText().toStdString().find(
                                                                                  ':')));
    this->ui->Max_Amount->setText(QString::number((check_capacity(sql, hour, date.year(), date.month(), date.day()))));
    this->ui->Available_Account->setText(
            QString::number((check_capacity(sql, hour, date.year(), date.month(), date.day())) -
                            check_occupied(sql, hour, date.year(), date.month(), date.day())));
}

void choose_time::on_Person_combox_changed() {
    sqlite3 *sql;
    cout << this->ui->Visitor_comboBox->currentText().toStdString();
    Visitor newVisitor(check_Visitor_NO(sql, 4, this->ui->Visitor_comboBox->currentText()));
    newVisitor.initialized();
    this->ui->Visitor_ID->setText(QString::fromStdString(newVisitor.getID()));
    this->ui->Visitor_PhoneNum->setText(QString::fromStdString(newVisitor.getPhoneNum()));
    this->ui->Visitor_name->setText(QString::fromStdString(newVisitor.getName()));
}

void choose_time::on_Close_Button_clicked() {
    delete this;
}

void choose_time::on_Hide_Button_clicked() {
    this->showMinimized();
}

void choose_time::on_Appoint_Button_clicked() {
    QString str = this->ui->Date_Label->text();
    sqlite3 *sql;
    QDate date = QDate::fromString(this->ui->Date_Label->text(), "yyyy-MM-dd");
    int hour = stoi(ui->Time_comboBox->currentText().toStdString().substr(0,
                                                                          ui->Time_comboBox->currentText().toStdString().find(
                                                                                  ':')));

    if ((check_capacity(sql, hour, date.year(), date.month(), date.day())) -
        check_occupied(sql, hour, date.year(), date.month(), date.day()) > 0) {
        Visitor newVisitor(check_Visitor_NO(sql, 4, this->ui->Visitor_comboBox->currentText()));
        newVisitor.initialized();
        if (newVisitor.compare_Period(getNowPeriod()) < 0) {
            string newPeriod =
                    to_string(date.year()) + "_" + to_string(date.month()) + "_" + to_string(date.day()) + "_" +
                    to_string(hour);
            newVisitor.setPeriod(newPeriod);
            int occupied = check_occupied(sql, hour, date.year(), date.month(), date.day()) + 1;
            set_occupied(sql, hour, date.year(), date.month(), date.day(), occupied);
            UpdateVisitor(sql, 5, QString::fromStdString(newVisitor.getPeriod()), newVisitor.getNO());
            Appoint_Success *exef = new Appoint_Success;
            exef->show();
            string str1 = this->ui->Date_Label->text().toStdString() + " " + to_string(hour) + ":00~" +
                          to_string((hour + 1)) + ":00";
            exef->setText(str1);
            this->close();
            ofstream ofstream1;
            ofstream1.open("recording.txt",ios::app | ios::out);
            ofstream1<<newVisitor.getName()<<"("<<newVisitor.getPhoneNum()<<") ordered "<<str1<<endl;
            ofstream1.close();
        } else {
            Appoint_fail_occupied *exef = new Appoint_fail_occupied;
            exef->show();
        }
    } else {
        Appoint_fail_max *exef = new Appoint_fail_max;
        exef->show();
    }

}
