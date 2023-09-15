//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_CHANGE_SUCCESS_H
#define PROGRAMMDESIGN_CHANGE_SUCCESS_H

#include <QWidget>
#include "ui_change_success.h"

QT_BEGIN_NAMESPACE
namespace Ui { class change_success; }
QT_END_NAMESPACE

class change_success : public QWidget {
Q_OBJECT

public:
    explicit change_success(QWidget *parent = nullptr);

    ~change_success() override;
private slots:

    void on_Return_Login_PushButton_clicked();
private:
    Ui::change_success *ui;
};


#endif //PROGRAMMDESIGN_CHANGE_SUCCESS_H
