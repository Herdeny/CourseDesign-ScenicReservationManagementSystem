//
// Created by 16531 on 2023/6/21.
//

#ifndef PROGRAMMDESIGN_ADD_MENU_H
#define PROGRAMMDESIGN_ADD_MENU_H

#include <QWidget>
#include "ui_add_menu.h"


QT_BEGIN_NAMESPACE
namespace Ui { class add_menu; }
QT_END_NAMESPACE

class add_menu : public QWidget {
Q_OBJECT

public:
    explicit add_menu(QWidget *parent = nullptr);

    ~add_menu() override;
private slots:
    void on_add_old_Button_clicked();
    void on_add_new_Button_clicked();
    void on_Exit_Button_clicked();
private:
    Ui::add_menu *ui;
};


#endif //PROGRAMMDESIGN_ADD_MENU_H
