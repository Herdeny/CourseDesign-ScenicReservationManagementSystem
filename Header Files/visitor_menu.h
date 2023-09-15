//
// Created by 16531 on 2023/5/30.
//

#ifndef PROGRAMMDESIGN_VISITOR_MENU_H
#define PROGRAMMDESIGN_VISITOR_MENU_H

#include <QWidget>
#include "ui_Visitor_Menu.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Visitor_Menu; }
QT_END_NAMESPACE

class Visitor_Menu : public QWidget {
Q_OBJECT

public:
    explicit Visitor_Menu(QWidget *parent = nullptr);

    ~Visitor_Menu() override;

private:
    Ui::Visitor_Menu *ui;
private slots:

    void on_Appoint_Button_clicked();

    void on_Information_Button_clicked();

    void on_Manager_Button_clicked();

    void on_Exit_Button_clicked();

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

};


#endif //PROGRAMMDESIGN_VISITOR_MENU_H
