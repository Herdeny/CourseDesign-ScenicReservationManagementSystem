//
// Created by 16531 on 2023/5/25.
//

#ifndef PROGRAMMDESIGN_REGISTER_SUCCESS_H
#define PROGRAMMDESIGN_REGISTER_SUCCESS_H

#include <QWidget>
#include "ui_Register_success.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Register_success; }
QT_END_NAMESPACE

class Register_success : public QWidget {
Q_OBJECT

public:
    explicit Register_success(QWidget *parent = nullptr);

    ~Register_success() override;

private slots:

    void on_Return_Login_PushButton_clicked();

private:
    Ui::Register_success *ui;
};


#endif //PROGRAMMDESIGN_REGISTER_SUCCESS_H
