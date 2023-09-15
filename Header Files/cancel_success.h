//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_CANCEL_SUCCESS_H
#define PROGRAMMDESIGN_CANCEL_SUCCESS_H

#include <QWidget>
#include "ui_cancel_success.h"
#include "../program/system.h"


QT_BEGIN_NAMESPACE
namespace Ui { class cancel_success; }
QT_END_NAMESPACE

class cancel_success : public QWidget {
Q_OBJECT

public:
    explicit cancel_success(QWidget *parent = nullptr);

    ~cancel_success() override;

    void setText(const string &);

private slots:

    void on_Return_Login_PushButton_clicked();

private:
    Ui::cancel_success *ui;
};


#endif //PROGRAMMDESIGN_CANCEL_SUCCESS_H
