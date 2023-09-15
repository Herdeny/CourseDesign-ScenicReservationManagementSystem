#include "../Header Files/mainwindow.h"
#include <QApplication>
#include "../SQLite/sqlite3.h"
#include "../SQLite/SQLconnect.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    sqlite3 *sql;
    char *zErrMsg = 0;
    creat_visitor_table_ifn_exit(sql,zErrMsg);
    creat_time_table_ifn_exit(sql,zErrMsg);

    w.show();
    return a.exec();
}

