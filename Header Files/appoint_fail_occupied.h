//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_APPOINT_FAIL_OCCUPIED_H
#define PROGRAMMDESIGN_APPOINT_FAIL_OCCUPIED_H

#include <QWidget>
#include "ui_Appoint_fail_occupied.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Appoint_fail_occupied; }
QT_END_NAMESPACE

class Appoint_fail_occupied : public QWidget {
Q_OBJECT

public:
    explicit Appoint_fail_occupied(QWidget *parent = nullptr);

    ~Appoint_fail_occupied() override;

private slots:

    void on_Return_Login_PushButton_clicked();

private:
    Ui::Appoint_fail_occupied *ui;
};


#endif //PROGRAMMDESIGN_APPOINT_FAIL_OCCUPIED_H
