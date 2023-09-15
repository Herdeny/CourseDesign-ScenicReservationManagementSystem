#include "../Header Files/admin_login.h"
#include "../Header Files/mainwindow.h"
#include "../Header Files/admin_menu.h"

Admin_Login::Admin_Login(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::Admin_Login) {
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setStyleSheet("border-radius:15px;");
    ui->Visitor_Login_Label->installEventFilter(this);
    MainWindow *main = new MainWindow;
    connect(this, SIGNAL(on_Visitor_Label_clicked()), main, SLOT(show_Window()));
    ui->Input_Account_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Input_Password_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
    ui->Not_Input_Account_Label->close();
    ui->Not_Input_Password_Label->close();
    QPixmap pixmap(":/new/prefix1/image/admin.png");
    pixmap.scaled(ui->Login_Menu_Image_Label->size());
    ui->Login_Menu_Image_Label->setStyleSheet("QLabel{border-radius:16px;}");
    ui->Login_Menu_Image_Label->setPixmap(pixmap);

}

bool Admin_Login::eventFilter(QObject *obj, QEvent *event) {
    if (obj == ui->Visitor_Login_Label)//指定QLabel
    {
        if (event->type() == QEvent::MouseButtonPress &&
            ui->Visitor_Login_Label->geometry().contains(this->mapFromGlobal(QCursor::pos()))) //鼠标点击
        {
            QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event); // 事件转换

            if (mouseEvent->button() == Qt::LeftButton) {
                emit on_Visitor_Label_clicked();
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


Admin_Login::~Admin_Login() {
    delete ui;
}

void Admin_Login::on_Close_Button_clicked() {
    this->close();
}

void Admin_Login::on_Hide_Button_clicked() {
    this->hide();
}

void Admin_Login::on_Login_Button_clicked() {
    if (ui->Input_Account_EditText->text() == "") {
        ui->Input_Account_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);color:rgb(242, 115, 121);}");
        ui->Not_Input_Account_Label->show();
    }
    if (ui->Input_Password_EditText->text() == "") {
        ui->Input_Password_EditText->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121);color:rgb(242, 115, 121);}");
        ui->Not_Input_Password_Label->show();
    }
    if (ui->Input_Password_EditText->text()=="root" && ui->Input_Account_EditText->text()=="root"){
        Admin_Menu *adminMenu=new Admin_Menu;
        adminMenu->show();
        this->close();
    }
}

void Admin_Login::on_Input_Account_EditText_textEdited(const QString &arg1) {
    ui->Not_Input_Account_Label->close();
    ui->Input_Account_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
}

void Admin_Login::on_Input_Password_EditText_textEdited(const QString &arg1) {
    ui->Not_Input_Password_Label->close();
    ui->Input_Password_EditText->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:3px solid rgb(205,221,236)}");
}
