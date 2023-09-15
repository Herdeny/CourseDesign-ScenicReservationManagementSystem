//
// Created by 16531 on 2023/5/30.
//

#ifndef PROGRAMMDESIGN_ADMIN_MENU_H
#define PROGRAMMDESIGN_ADMIN_MENU_H

#include <QWidget>
#include "ui_Admin_Menu.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Admin_Menu; }
QT_END_NAMESPACE

class Admin_Menu : public QWidget {
Q_OBJECT

public:
    explicit Admin_Menu(QWidget *parent = nullptr);

    ~Admin_Menu() override;

private slots:

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

    void on_Appoint_Button_clicked();
    void on_Visitor_Button_clicked();
    void on_Exit_Button_clicked();

private:
    Ui::Admin_Menu *ui;
};


#endif //PROGRAMMDESIGN_ADMIN_MENU_H
