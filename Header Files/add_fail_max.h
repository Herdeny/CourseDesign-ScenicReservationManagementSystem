//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_ADD_FAIL_MAX_H
#define PROGRAMMDESIGN_ADD_FAIL_MAX_H

#include <QWidget>
#include "ui_add_fail_max.h"


QT_BEGIN_NAMESPACE
namespace Ui { class add_fail_max; }
QT_END_NAMESPACE

class add_fail_max : public QWidget {
Q_OBJECT

public:
    explicit add_fail_max(QWidget *parent = nullptr);

    ~add_fail_max() override;
private slots:

    void on_Return_Login_PushButton_clicked();
private:
    Ui::add_fail_max *ui;
};


#endif //PROGRAMMDESIGN_ADD_FAIL_MAX_H
