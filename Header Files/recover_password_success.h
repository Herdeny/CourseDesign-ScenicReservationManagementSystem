//
// Created by 16531 on 2023/5/29.
//

#ifndef PROGRAMMDESIGN_RECOVER_PASSWORD_SUCCESS_H
#define PROGRAMMDESIGN_RECOVER_PASSWORD_SUCCESS_H

#include <QWidget>
#include "ui_recover_password_success.h"

QT_BEGIN_NAMESPACE
namespace Ui { class recover_password_success; }
QT_END_NAMESPACE

class recover_password_success : public QWidget {
Q_OBJECT

public:
    explicit recover_password_success(QWidget *parent = nullptr);

    ~recover_password_success() override;

private slots:

    void on_Return_Login_PushButton_clicked();

private:
    Ui::recover_password_success *ui;
};


#endif //PROGRAMMDESIGN_RECOVER_PASSWORD_SUCCESS_H
