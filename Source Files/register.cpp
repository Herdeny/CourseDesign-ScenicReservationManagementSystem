#include "../Header Files/register.h"
#include "../Header Files/mainwindow.h"
#include "../SQLite/sqlite3.h"
#include "../SQLite/SQLconnect.h"


bool Register::eventFilter(QObject *obj, QEvent *event) {
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

Register::Register(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::Register) {
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    setWindowFlags(Qt::FramelessWindowHint);
    setStyleSheet("border-radius:15px;");
    MainWindow *main = new MainWindow;
    connect(this, SIGNAL(on_Return_Login_Label_clicked()), main, SLOT(show_Window()));
    ui->Return_Login_Label->installEventFilter(this);
    ui->Input_Name_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
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
    ui->ID_Occupied_Label->close();
    ui->PhoneNum_Occupied_Label->close();
    ui->Not_Input_Name_Label->close();
    QPixmap pixmap(":/new/prefix1/image/register.png");
    pixmap.scaled(ui->Login_Menu_Image_Label->size());
    ui->Login_Menu_Image_Label->setStyleSheet("QLabel{border-radius:16px;}");
    ui->Login_Menu_Image_Label->setPixmap(pixmap);
}

Register::~Register() {
    delete ui;
}

void Register::on_Close_Button_clicked() {
    window()->close();
}

void Register::on_Hide_Button_clicked() {
    this->showMinimized();
}

void Register::on_Input_Name_EditText_textEdited(const QString &arg1) {
    ui->Not_Input_Name_Label->close();

    ui->Input_Name_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");

}

void Register::on_Input_PhoneNum_EditText_textEdited(const QString &arg1) {
    sqlite3 *sql;
    ui->Not_Input_PhoneNum_Label->close();
    ui->PhoneNum_Occupied_Label->close();
    if (IsValidPhoneNumber(arg1) || arg1 == "") {
        ui->Wrong_PhoneNum_Label->close();
        if (check_Visitor_NO(sql, 1, ui->Input_PhoneNum_EditText->text()) == 0 || arg1 == "") {
            cout << check_Visitor_NO(sql, 1, ui->Input_PhoneNum_EditText->text()) << endl;
            ui->Input_PhoneNum_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
        } else {
            ui->PhoneNum_Occupied_Label->show();
            ui->Input_PhoneNum_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        }
    } else {
        ui->Input_PhoneNum_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Wrong_PhoneNum_Label->show();
    }
}

void Register::on_Input_ID_EditText_textEdited(const QString &arg1) {
    sqlite3 *sql;
    ui->Not_Input_ID_Label->close();
    ui->ID_Occupied_Label->close();
    if (checkIDCard(arg1) || arg1 == "") {
        ui->Wrong_ID_Label->close();
        if (check_Visitor_NO(sql, 2, ui->Input_ID_EditText->text()) == 0 || arg1 == "") {
            ui->Input_ID_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
        } else {
            ui->ID_Occupied_Label->show();
            ui->Input_ID_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        }
    } else {
        ui->Input_ID_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Wrong_ID_Label->show();
    }
}

void Register::on_Input_Password_EditText_textEdited(const QString &arg1) {
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

void Register::on_Input_Password_Again_EditText_textEdited(const QString &arg1) {
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

void Register::on_Register_PushButton_clicked() {
    int flag = 0;
    sqlite3 *sql;
    if (ui->Input_Name_EditText->text() == "") {
        ui->Input_Name_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_Name_Label->show();
    } else flag++;
    if (ui->Input_PhoneNum_EditText->text() == "") {
        ui->Input_PhoneNum_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_PhoneNum_Label->show();

    } else flag++;
    if (ui->Input_ID_EditText->text() == "") {
        ui->Input_ID_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_ID_Label->show();
    } else flag++;
    if (ui->Input_Password_EditText->text() == "") {
        ui->Input_Password_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_Password_Label->show();
    } else flag++;
    if (ui->Input_Password_Again_EditText->text() == "") {
        ui->Input_Password_Again_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}");
        ui->Not_Input_Password_Label_2->show();
    } else flag++;
    if (checkPasswordType(ui->Input_Password_EditText->text()) &&
        ui->Input_Password_EditText->text() == ui->Input_Password_Again_EditText->text() &&
        checkIDCard(ui->Input_ID_EditText->text()) && IsValidPhoneNumber(ui->Input_PhoneNum_EditText->text()))
        flag++;
    if (check_Visitor_NO(sql, 1, ui->Input_PhoneNum_EditText->text()) == 0) {
        flag++;
    }
    if (check_Visitor_NO(sql, 2, ui->Input_ID_EditText->text()) == 0) {
        flag++;
    }
    if (flag == 8) {
        RegisterVisitor(sql, ui->Input_Name_EditText->text(), ui->Input_PhoneNum_EditText->text(),
                        ui->Input_ID_EditText->text(), ui->Input_Password_EditText->text());
        Register_success *regc = new Register_success;
        regc->show();
        this->close();
    }
}



