//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_APPOINT_SUCCESS_H
#define PROGRAMMDESIGN_APPOINT_SUCCESS_H

#include <QWidget>
#include "ui_Appoint_Success.h"
#include "../program/system.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Appoint_Success; }
QT_END_NAMESPACE

class Appoint_Success : public QWidget {
Q_OBJECT

public:
    explicit Appoint_Success(QWidget *parent = nullptr);

    ~Appoint_Success() override;

    void setText(const string&);

private slots:

    void on_Return_Login_PushButton_clicked();

private:
    Ui::Appoint_Success *ui;
};


#endif //PROGRAMMDESIGN_APPOINT_SUCCESS_H
