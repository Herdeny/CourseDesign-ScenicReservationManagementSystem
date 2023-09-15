//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_ADD_SUCCESS_H
#define PROGRAMMDESIGN_ADD_SUCCESS_H

#include <QWidget>
#include "ui_add_success.h"


QT_BEGIN_NAMESPACE
namespace Ui { class add_success; }
QT_END_NAMESPACE

class add_success : public QWidget {
Q_OBJECT
private slots:

    void on_Return_Login_PushButton_clicked();
public:
    explicit add_success(QWidget *parent = nullptr);

    ~add_success() override;

private:
    Ui::add_success *ui;
};


#endif //PROGRAMMDESIGN_ADD_SUCCESS_H
