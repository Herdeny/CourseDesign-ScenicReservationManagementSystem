#include "../Header Files/recover_password.h"
#include "../Header Files/mainwindow.h"
#include "../SQLite/sqlite3.h"
#include "../SQLite/SQLconnect.h"

Recover_Password::Recover_Password(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::Recover_Password) {
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowCloseButtonHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setStyleSheet("border-radius:15px;");
    MainWindow *main = new MainWindow;
    connect(this, SIGNAL(on_Return_Login_Label_clicked()), main, SLOT(show_Window()));
    ui->Return_Login_Label->installEventFilter(this);
    ui->Input_ID_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Input_PhoneNum_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Input_Password_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Input_Password_Again_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Not_Input_ID_Label->close();
    ui->Not_Input_PhoneNum_Label->close();
    ui->Not_Input_Password_Label->close();
    ui->Not_Input_Password_Label_2->close();
    ui->Wrong_PhoneNum_Label->close();
    ui->Wrong_ID_Label->close();
    ui->Wrong_Password_Length_Label->close();
    ui->Wrong_Password_Type_Label->close();
    ui->Password_Different_Label->close();
    ui->Not_Exist_PhoneNum_Label->close();
    ui->Not_Exist_ID_Label->close();
    ui->Different_PhoneNum_Label->close();
    ui->Different_ID_Label->close();
    QPixmap pixmap(":/new/prefix1/image/recover.png");
    pixmap.scaled(ui->Login_Menu_Image_Label->size());
    ui->Login_Menu_Image_Label->setStyleSheet("QLabel{border-radius:16px;}");
    ui->Login_Menu_Image_Label->setPixmap(pixmap);
}

Recover_Password::~Recover_Password() {
    delete ui;
}

bool Recover_Password::eventFilter(QObject *obj, QEvent *event) {
    if (obj == ui->Return_Login_Label)//指定QLabel
    {
        if (event->type() == QEvent::MouseButtonRelease &&
            ui->Return_Login_Label->geometry().contains(this->mapFromGlobal(QCursor::pos()))) //鼠标点击
        {
            QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event); // 事件转换

            if (mouseEvent->button() == Qt::LeftButton) {
                emit on_Return_Login_Label_clicked();
                this->close();
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else {
        // pass the event on to the parent class
        return QWidget::eventFilter(obj, event);
    }
}

void Recover_Password::on_Close_Button_clicked() {
    window()->close();
}

void Recover_Password::on_Hide_Button_clicked() {
    this->showMinimized();
}

void Recover_Password::on_Input_PhoneNum_EditText_textEdited(const QString &arg1) {
    sqlite3 *sql;
    ui->Different_PhoneNum_Label->close();
    ui->Not_Input_PhoneNum_Label->close();
    ui->Not_Exist_PhoneNum_Label->close();
    ui->Different_ID_Label->close();
    ui->Input_PhoneNum_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    if (checkIDCard(ui->Input_ID_EditText->text()) && check_Visitor_NO(sql, 2, ui->Input_ID_EditText->text()) != 0 ||
        ui->Input_ID_EditText->text() == "") {
        ui->Input_ID_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    }
    if (IsValidPhoneNumber(arg1) || arg1 == "") {
        ui->Wrong_PhoneNum_Label->close();
        if (check_Visitor_NO(sql, 1, arg1) != 0 || arg1 == "") {
            ui->Input_PhoneNum_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
        } else {
            ui->Not_Exist_PhoneNum_Label->show();
            ui->Input_PhoneNum_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        }
    } else {
        ui->Input_PhoneNum_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Wrong_PhoneNum_Label->show();
    }
}

void Recover_Password::on_Input_ID_EditText_textEdited(const QString &arg1) {
    sqlite3 *sql;
    ui->Different_ID_Label->close();
    ui->Not_Input_ID_Label->close();
    ui->Not_Exist_ID_Label->close();
    ui->Different_PhoneNum_Label->close();
    if (IsValidPhoneNumber(ui->Input_PhoneNum_EditText->text()) &&
                check_Visitor_NO(sql, 1, ui->Input_PhoneNum_EditText->text()) != 0 || ui->Input_PhoneNum_EditText->text() == "") {
        ui->Input_PhoneNum_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    }
    ui->Input_ID_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");

    if (checkIDCard(arg1) || arg1 == "") {
        ui->Wrong_ID_Label->close();
        if (check_Visitor_NO(sql, 2, arg1) != 0 || arg1 == "") {
            ui->Input_ID_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
        } else {
            ui->Not_Exist_ID_Label->show();
            ui->Input_ID_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        }
    } else {
        ui->Input_ID_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Wrong_ID_Label->show();
    }
}

void Recover_Password::on_Input_Password_EditText_textEdited(const QString &arg1) {
    ui->Not_Input_Password_Label->close();
    ui->Not_Input_Password_Label_2->close();
    if (ui->Input_Password_Again_EditText->text() != "") {
        on_Input_Password_Again_EditText_textEdited(ui->Input_Password_Again_EditText->text());
    } else {
        ui->Input_Password_Again_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    }
    if (checkPasswordLength(arg1) || arg1 == "") {
        ui->Wrong_Password_Length_Label->close();
        if (checkPasswordType(arg1) || arg1 == "") {
            ui->Wrong_Password_Type_Label->close();
            if (ui->Input_Password_Again_EditText->text() == "" || arg1 == "") {
                ui->Input_Password_EditText->setStyleSheet(
                        "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
                ui->Input_Password_Again_EditText->setStyleSheet(
                        "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
            } else {
                ui->Input_Password_EditText->setStyleSheet(
                        "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
                ui->Input_Password_Again_EditText->setStyleSheet(
                        "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
                ui->Password_Different_Label->show();
            }
        } else {
            ui->Wrong_Password_Type_Label->show();
            ui->Input_Password_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        }
    } else {
        ui->Wrong_Password_Type_Label->close();
        ui->Input_Password_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Wrong_Password_Length_Label->show();
    }
}

void Recover_Password::on_Input_Password_Again_EditText_textEdited(const QString &arg1) {
    ui->Not_Input_Password_Label->close();
    ui->Not_Input_Password_Label_2->close();
    if (arg1 == "" || ui->Input_Password_EditText->text() == "" || arg1 == ui->Input_Password_EditText->text()) {
        ui->Password_Different_Label->close();
        ui->Input_Password_Again_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
        if (checkPasswordType(ui->Input_Password_EditText->text()) || ui->Input_Password_EditText->text() == "") {
            ui->Input_Password_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
        }
    } else {
        ui->Input_Password_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Input_Password_Again_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Password_Different_Label->show();
    }
}

void Recover_Password::on_Recover_PushButton_clicked() {
    int flag = 0, Visitor_NO;
    sqlite3 *sql;
    if (ui->Input_PhoneNum_EditText->text() == "") {
        ui->Input_PhoneNum_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_PhoneNum_Label->show();
        return;
    } else flag++;
    if (ui->Input_ID_EditText->text() == "") {
        ui->Input_ID_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_ID_Label->show();
        return;
    } else flag++;
    if (ui->Input_Password_EditText->text() == "") {
        ui->Input_Password_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_Password_Label->show();
        return;
    } else flag++;
    if (ui->Input_Password_Again_EditText->text() == "") {
        ui->Input_Password_Again_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_Password_Label_2->show();
        return;
    } else flag++;
    if (checkPasswordType(ui->Input_Password_EditText->text()) &&
        ui->Input_Password_EditText->text() == ui->Input_Password_Again_EditText->text() &&
        checkIDCard(ui->Input_ID_EditText->text()) && IsValidPhoneNumber(ui->Input_PhoneNum_EditText->text()))
        flag++;
    else return;
    if (check_Visitor_NO(sql, 1, ui->Input_PhoneNum_EditText->text()) !=
        check_Visitor_NO(sql, 2, ui->Input_ID_EditText->text())) {
        ui->Different_ID_Label->show();
        ui->Different_PhoneNum_Label->show();
        ui->Input_ID_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Input_PhoneNum_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
    } else {
        flag++;
        Visitor_NO = check_Visitor_NO(sql, 2, ui->Input_ID_EditText->text());
    }
    if (flag == 6) {
        if (UpdateVisitor(sql, 4, ui->Input_Password_EditText->text(),
                          Visitor_NO)) {
            recover_password_success *recs = new recover_password_success;
            recs->show();
            this->close();
        } else {
            Execute_Failed *exef = new Execute_Failed;
            exef->show();
        }
    }
}
