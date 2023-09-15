//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_ADMIN_TIME_H
#define PROGRAMMDESIGN_ADMIN_TIME_H

#include <QWidget>
#include "ui_admin_time.h"

QT_BEGIN_NAMESPACE
namespace Ui { class admin_time; }
QT_END_NAMESPACE

class admin_time : public QWidget {
Q_OBJECT

public:
    explicit admin_time(QWidget *parent = nullptr);

    ~admin_time() override;
private slots:
private slots:

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

    void on_Exit_Button_clicked();

    void on_Date_Choosed();

    void on_Choose_Time_Button_clicked();

private:
    Ui::admin_time *ui;
};


#endif //PROGRAMMDESIGN_ADMIN_TIME_H
