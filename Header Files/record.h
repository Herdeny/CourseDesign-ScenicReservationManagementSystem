//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_RECORD_H
#define PROGRAMMDESIGN_RECORD_H

#include <QWidget>
#include "ui_record.h"

QT_BEGIN_NAMESPACE
namespace Ui { class record; }
QT_END_NAMESPACE

class record : public QWidget {
Q_OBJECT

public:
    explicit record(QWidget *parent = nullptr);

    ~record() override;

    void setText(QString const&);
private slots:
    void on_Return_Login_PushButton_clicked();

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

private:
    Ui::record *ui;
};


#endif //PROGRAMMDESIGN_RECORD_H
