//
// Created by 16531 on 2023/5/29.
//

#ifndef PROGRAMMDESIGN_EXECUTE_FAILED_H
#define PROGRAMMDESIGN_EXECUTE_FAILED_H

#include <QWidget>
#include "ui_Execute_Failed.h"
#include "../program/system.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Execute_Failed; }
QT_END_NAMESPACE

class Execute_Failed : public QWidget {
Q_OBJECT

public:
    explicit Execute_Failed(QWidget *parent = nullptr);

    ~Execute_Failed() override;

    void setText(const string&);

private slots:

    void on_Return_Login_PushButton_clicked();

private:
    Ui::Execute_Failed *ui;
};


#endif //PROGRAMMDESIGN_EXECUTE_FAILED_H
