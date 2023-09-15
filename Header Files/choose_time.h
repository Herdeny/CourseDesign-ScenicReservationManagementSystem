#ifndef PROGRAMMDESIGN_CHOOSE_TIME_H
#define PROGRAMMDESIGN_CHOOSE_TIME_H

#include <QWidget>
#include <QDate>
#include "ui_choose_time.h"
#include "../program/system.h"

QT_BEGIN_NAMESPACE
namespace Ui { class choose_time; }
QT_END_NAMESPACE

class choose_time : public QWidget {
Q_OBJECT

public:
    explicit choose_time(QWidget *parent = nullptr);

    ~choose_time() override;

    void showDate(const QDate &);

private slots:

    void on_Time_combox_changed();

    void on_Person_combox_changed();

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

    void on_Appoint_Button_clicked();

private:
    Ui::choose_time *ui;
};


#endif //PROGRAMMDESIGN_CHOOSE_TIME_H
