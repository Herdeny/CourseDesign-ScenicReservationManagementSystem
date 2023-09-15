//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_APPOINT_BLOCK_H
#define PROGRAMMDESIGN_APPOINT_BLOCK_H

#include <QWidget>
#include "ui_Appoint_Block.h"
#include "../program/system.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Appoint_Block; }
QT_END_NAMESPACE

class Appoint_Block : public QWidget {
Q_OBJECT

public:
    explicit Appoint_Block(QWidget *parent = nullptr);

    ~Appoint_Block() override;


private slots:

    void on_Person_combox_changed();

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

    void on_Cancel_Button_clicked();

    void on_record_Button_clicked();

private:
    Ui::Appoint_Block *ui;
};


#endif //PROGRAMMDESIGN_APPOINT_BLOCK_H
