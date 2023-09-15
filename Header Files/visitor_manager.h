#ifndef PROGRAMMDESIGN_VISITOR_MANAGER_H
#define PROGRAMMDESIGN_VISITOR_MANAGER_H

#include <QWidget>
#include "../program/system.h"
#include "ui_Visitor_Manager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Visitor_Manager; }
QT_END_NAMESPACE

class Visitor_Manager : public QWidget {
Q_OBJECT

public:
    explicit Visitor_Manager(QWidget *parent = nullptr);

    ~Visitor_Manager() override;

private slots:

    void on_Person_combox_changed();

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

    void on_Add_Button_clicked();

    void on_Delete_Button_clicked();

    void on_Change_Button_clicked();


private:
    Ui::Visitor_Manager *ui;
};


#endif //PROGRAMMDESIGN_VISITOR_MANAGER_H
