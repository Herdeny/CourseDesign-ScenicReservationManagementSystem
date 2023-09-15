#include "../Header Files/mainwindow.h"
#include "../Header Files/visitor_menu.h"
#include "iostream"
#include "../SQLite/sqlite3.h"
#include "../SQLite/SQLconnect.h"
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->Forgot_Password_Label->installEventFilter(this);//安装事件过滤器
    ui->Admin_Login_Label->installEventFilter(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setStyleSheet("border-radius:15px;");
    ui->Input_Account_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Input_Password_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Wrong_Account_Label->close();
    ui->Not_Exist_Account_Label->close();
    ui->Not_Input_Account_Label->close();
    ui->Wrong_Password_Label->close();
    ui->Not_Input_Password_Label->close();
    QPixmap pixmap(":/new/prefix1/image/login.png");
    pixmap.scaled(ui->Login_Menu_Image_Label->size());
    ui->Login_Menu_Image_Label->setStyleSheet("QLabel{border-radius:16px;}");
    ui->Login_Menu_Image_Label->setPixmap(pixmap);
    bool isRememberMe;
    ifstream ifs;
    ifs.open("state.txt", ios::in);
    ifs >> isRememberMe;
    ifs.close();
    if (isRememberMe) {
        ifs.open("user.txt", ios::in);
        string User;
        ifs >> User;
        vector<string> strList;
        Stringsplit(User, "-", strList);
        ui->Remember_Me_CheckBox->setChecked(true);
        ui->Input_Account_EditText->setText(QString::fromStdString(strList[0]));
        ui->Input_Password_EditText->setText(QString::fromStdString(strList[1]));
    }
}

MainWindow::~MainWindow() {
    delete ui;
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event) {
    if (obj == ui->Admin_Login_Label)//指定QLabel
    {
        if (event->type() == QEvent::MouseButtonPress &&
            ui->Admin_Login_Label->geometry().contains(this->mapFromGlobal(QCursor::pos()))) //鼠标点击
        {
            QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event); // 事件转换

            if (mouseEvent->button() == Qt::LeftButton) {
                Admin_Login *admin_ = new Admin_Login;
                admin_->show();
                this->close();
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else if (obj == ui->Forgot_Password_Label) {
        if (event->type() == QEvent::MouseButtonPress &&
            ui->Forgot_Password_Label->geometry().contains(this->mapFromGlobal(QCursor::pos()))) //鼠标点击
        {
            QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event); // 事件转换

            if (mouseEvent->button() == Qt::LeftButton) {
                Recover_Password *rec = new Recover_Password;
                rec->show();
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


void MainWindow::on_Input_Account_EditText_textEdited(const QString &arg1) {
    ui->Not_Input_Account_Label->close();
    ui->Not_Exist_Account_Label->close();
    if (checkIDCard(arg1) || arg1 == "" || IsValidPhoneNumber(arg1)) {
        ui->Input_Account_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
        ui->Wrong_Account_Label->close();
    } else {
        ui->Input_Account_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);}");
        ui->Wrong_Account_Label->show();
    }
}


void MainWindow::on_Input_Password_EditText_textEdited(const QString &arg1) {
    ui->Wrong_Password_Label->close();
    ui->Not_Input_Password_Label->close();
    ui->Input_Password_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
}

void MainWindow::on_Close_Button_clicked() {
    this->close();
}


void MainWindow::on_Hide_Button_clicked() {
    this->showMinimized();
}

void MainWindow::on_Login_Button_clicked() {
    Visitor newVisitor;
    int flag = 0, type, Visitor_NO;
    sqlite3 *sql;
    if (ui->Input_Account_EditText->text() == "") {
        ui->Input_Account_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);color:rgb(242, 115, 121);}");
        ui->Not_Input_Account_Label->show();
        return;
    } else flag++;
    if (ui->Input_Password_EditText->text() == "") {
        ui->Input_Password_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);color:rgb(242, 115, 121);}");
        ui->Not_Input_Password_Label->show();
        return;
    } else flag++;
    if (ui->Input_Account_EditText->text() != "" && ui->Input_Password_EditText->text() != "")
        flag++;
    else return;
    if (checkIDCard(ui->Input_Account_EditText->text())) {
        type = 2;
        flag++;
    } else if (IsValidPhoneNumber(ui->Input_Account_EditText->text())) {
        type = 1;
        flag++;
    } else return;
    if ((Visitor_NO = check_Visitor_NO(sql, type, ui->Input_Account_EditText->text()))) {
        ui->Not_Exist_Account_Label->close();
        if (md5(ui->Input_Password_EditText->text().toStdString()).compare(check_Visitor(sql, Visitor_NO, 4)) == 0) {
            flag++;
        } else {
            ui->Wrong_Password_Label->show();
            ui->Input_Password_EditText->setStyleSheet(
                    "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);color:rgb(242, 115, 121);}");
            return;
        }
    } else {
        ui->Input_Account_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);color:rgb(242, 115, 121);}");
        ui->Not_Exist_Account_Label->show();
    }

    if (flag == 5) {
        ofstream ofs; //打开一个写的文件流
        if (ui->Remember_Me_CheckBox->isChecked()) {
            ofs.open("state.txt", ios::trunc);  //把这个流和文件关联起来
            ofs << true;
            ofs.close();
            ofs.open("user.txt", ios::trunc);
            ofs << ui->Input_Account_EditText->text().toStdString() << "-"
                << ui->Input_Password_EditText->text().toStdString();
            ofs.close();
        } else {
            ofs.open("state.txt", ios::trunc);  //把这个流和文件关联起来
            ofs << false;
            ofs.close();
        }
        ofs.open("run.txt", ios::trunc);
        ofs << Visitor_NO;
        ofs.close();
        Visitor_Menu *visitorMenu = new Visitor_Menu;
        visitorMenu->show();
        this->close();
    }
}

void MainWindow::on_Register_Button_clicked() {
    Register *reg = new Register;
    reg->show();
    this->close();
}

void MainWindow::show_Window() {
    this->show();
}


