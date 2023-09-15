//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_ADMIN_CHOOSE_TIME_H
#define PROGRAMMDESIGN_ADMIN_CHOOSE_TIME_H

#include <QWidget>
#include "ui_admin_choose_time.h"

QT_BEGIN_NAMESPACE
namespace Ui { class admin_choose_time; }
QT_END_NAMESPACE

class admin_choose_time : public QWidget {
Q_OBJECT

public:
    QString showDate(const std::string);

    explicit admin_choose_time(QWidget *parent = nullptr);

    ~admin_choose_time() override;

private slots:

    void on_Time_combox_changed();

    void on_change_Button_clicked();

    void on_Hide_Button_clicked();

    void on_Close_Button_clicked();

    void on_change_all_Button_clicked();

private:
    Ui::admin_choose_time *ui;
};


#endif //PROGRAMMDESIGN_ADMIN_CHOOSE_TIME_H
