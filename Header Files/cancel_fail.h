//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_CANCEL_FAIL_H
#define PROGRAMMDESIGN_CANCEL_FAIL_H

#include <QWidget>
#include "ui_cancel_fail.h"

QT_BEGIN_NAMESPACE
namespace Ui { class cancel_fail; }
QT_END_NAMESPACE

class cancel_fail : public QWidget {
Q_OBJECT

public:
    explicit cancel_fail(QWidget *parent = nullptr);

    ~cancel_fail() override;
private slots:
    void on_Return_Login_PushButton_clicked();
private:
    Ui::cancel_fail *ui;
};


#endif //PROGRAMMDESIGN_CANCEL_FAIL_H
