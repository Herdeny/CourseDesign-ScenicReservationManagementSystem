//
// Created by 16531 on 2023/6/20.
//

#ifndef PROGRAMMDESIGN_SCHEDULE_H
#define PROGRAMMDESIGN_SCHEDULE_H

#include <QWidget>
#include "ui_schedule.h"

QT_BEGIN_NAMESPACE
namespace Ui { class schedule; }
QT_END_NAMESPACE

class schedule : public QWidget {
Q_OBJECT

public:
    explicit schedule(QWidget *parent = nullptr);

    ~schedule() override;

private:
    Ui::schedule *ui;
private slots:

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

    void on_Exit_Button_clicked();

    void on_Date_Choosed();

    void on_Choose_Time_Button_clicked();

};

#endif //PROGRAMMDESIGN_SCHEDULE_H
