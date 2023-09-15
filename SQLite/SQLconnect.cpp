#include <QString>
#include "windows.h"
#include "SQLconnect.h"
#include "iostream"
#include "string"

using namespace std;

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    int i;
    string str;
    for (i = 0; i < argc; i++) {
        str = argv[i] ? argv[i] : "NULL";
        cout << azColName[i] << "=" << str << endl;
    }
    cout << endl;
    return 0;
}

int open_SQL(sqlite3 **ppDB) {
    int return_code = sqlite3_open(DATABASE, ppDB);
    if (return_code) {
        cerr << "Can't open database: " << sqlite3_errmsg(*ppDB) << endl;
        return -1;
    } else {

        return 0;
    }

}

int close_SQL(sqlite3 *pDB) {
    int return_code = sqlite3_close(pDB);
    if (return_code) {
        cerr << "Can't close database: " << sqlite3_errmsg(pDB) << endl;
        return -1;
    } else {
        cout << "Close database successfully" << endl;
        return 0;
    }
}

int creat_visitor_table_ifn_exit(sqlite3 *pDB, char *zErrMsg) {
    open_SQL(&pDB);
    const char *sql = "create table if not exists visitor_data" \
               "(" \
               "    Visitor_NO          integer not null" \
               "        constraint visitor_data_pk" \
               "            primary key autoincrement" \
               "        constraint visitor_data_pk2" \
               "            unique," \
               "    ID                  TEXT" \
               "        constraint visitor_data_pk3" \
               "            unique," \
               "    PhoneNum            TEXT" \
               "        constraint visitor_data_pk4" \
               "            unique," \
               "    Password            TEXT," \
               "    Name                TEXT," \
               "    instead_NO          TEXT," \
               "    Period              TEXT" \
               ");";
    int return_code;
    return_code = sqlite3_exec(pDB, sql, callback, 0, &zErrMsg);
    if (return_code != SQLITE_OK) {
        cerr << "SQL error: " << zErrMsg << endl;
        sqlite3_free(zErrMsg);
        close_SQL(pDB);
        return 1;
    } else {

        sqlite3_free(zErrMsg);
        close_SQL(pDB);
        return 0;
    }
}

int creat_time_table_ifn_exit(sqlite3 *pDB, char *zErrMsg) {
    open_SQL(&pDB);
    int LEAP[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int nLEAP[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    SYSTEMTIME time;
    GetLocalTime(&time);
    bool leap_year = false;
    if (time.wYear % 4 == 0 && time.wYear % 100 != 0 || time.wYear % 400 == 0) leap_year = true;
    for (int i = 1; i < 13; ++i) {
        for (int j = 1; j <= (leap_year ? LEAP[i] : nLEAP[i]); ++j) {
            string str =
                    "create table if not exists \"" + to_string(time.wYear) + "_" + to_string(i) + "_" + to_string(j) +
                    +"\"" + \
               "(" \
               "    hour                  int" \
               "        constraint visitor_data_pk3" \
               "            unique," \
               "    capacity              int," \
               "    occupied              int" \
               ");";
            const char *sql = data(str);
            int return_code;
            return_code = sqlite3_exec(pDB, sql, callback, 0, &zErrMsg);
            if (return_code != SQLITE_OK) {
                cerr << "SQL error: " << zErrMsg << endl;
                sqlite3_free(zErrMsg);
                close_SQL(pDB);
                return 1;
            }
            for (int k = 0; k < 24; ++k) {
                str = "INSERT INTO \"" + to_string(time.wYear) + "_" + to_string(i) + "_" + to_string(j) +
                      "\"" + " (hour,capacity,occupied) "  \
         "VALUES (" + to_string(k) + "," + to_string(5) + "," + to_string(0) + "); ";
                sql = data(str);
                return_code = sqlite3_exec(pDB, sql, callback, 0, &zErrMsg);
                if (return_code != SQLITE_OK) {
                    cerr << "SQL error: " << zErrMsg << endl;
                    sqlite3_free(zErrMsg);
                    close_SQL(pDB);
                    return 0;
                }
            }
        }
    }
    cout << "create table successfully " << zErrMsg << endl;
    sqlite3_free(zErrMsg);
    close_SQL(pDB);
    return 1;
}

//1-PhoneNum 2-ID 3-Name 4-Password 5-instead_NO 6-Period
string check_Visitor(sqlite3 *pDB, int NO, int type) {
    open_SQL(&pDB);
    string str = "";
    int return_code;
    string result;
    string exception;
    sqlite3_stmt *stmt;
    switch (type) {
        case 1: {
            str = "select PhoneNum from visitor_data where Visitor_NO = " + to_string(NO) + ";";
            const char *sql = data(str);
            return_code = sqlite3_prepare_v2(pDB, sql, strlen(sql), &stmt, NULL);
            if (return_code != SQLITE_OK) {
                exception = "Select failed: return_code: " + to_string(return_code);
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                throw exception;
            }
            while (SQLITE_ROW == sqlite3_step(stmt)) {
                cout << "Select PhoneNum_NO£º" << to_string(NO) << " success,return: "
                     << sqlite3_column_text(stmt, 0) << endl;
                result = (char *) sqlite3_column_text(stmt, 0);
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return result;
            }
            sqlite3_finalize(stmt);
            close_SQL(pDB);
            return "NotFound";
        }
        case 2: {
            str = "select ID from visitor_data where Visitor_NO = " + to_string(NO) + ";";
            const char *sql = data(str);
            return_code = sqlite3_prepare_v2(pDB, sql, strlen(sql), &stmt, NULL);
            if (return_code != SQLITE_OK || NULL == stmt) {
                exception = "Select failed: return_code: " + to_string(return_code);
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                throw exception;
            }
            while (SQLITE_ROW == sqlite3_step(stmt)) {
                cout << "Select ID_NO£º" << to_string(NO) << " success,return: " << sqlite3_column_text(stmt, 0)
                     << endl;
                result = (char *) sqlite3_column_text(stmt, 0);
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return result;
            }
            sqlite3_finalize(stmt);
            close_SQL(pDB);
            return "NotFound";
        }
        case 3: {
            str = "select Name from visitor_data where Visitor_NO = " + to_string(NO) + ";";
            const char *sql = data(str);
            return_code = sqlite3_prepare_v2(pDB, sql, strlen(sql), &stmt, NULL);
            if (return_code != SQLITE_OK || NULL == stmt) {
                exception = "Select failed: return_code: " + to_string(return_code);
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                throw exception;
            }
            while (SQLITE_ROW == sqlite3_step(stmt)) {
                cout << "Select Name£º" << to_string(NO) << " success,return: "
                     << sqlite3_column_text(stmt, 0) << endl;
                result = (char *) sqlite3_column_text(stmt, 0);
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return result;
            }
            sqlite3_finalize(stmt);
            close_SQL(pDB);
            return "NotFound";
        }
        case 4: {
            str = "select Password from visitor_data where Visitor_NO = " + to_string(NO) + ";";
            const char *sql = data(str);
            return_code = sqlite3_prepare_v2(pDB, sql, strlen(sql), &stmt, NULL);
            if (return_code != SQLITE_OK || NULL == stmt) {
                cout << "Select failed: return_code: " << return_code << endl;
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return "failed";
            }
            while (SQLITE_ROW == sqlite3_step(stmt)) {
                result = (char *) sqlite3_column_text(stmt, 0);
                cout << "Select NO_Password " << "success,return: " << to_string(NO) << " - " << result << endl;
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return result;
            }
            sqlite3_finalize(stmt);
            close_SQL(pDB);
            return "NotFound";
        }
        case 5: {
            str = "select instead_NO from visitor_data where Visitor_NO = " + to_string(NO) + ";";
            const char *sql = data(str);
            return_code = sqlite3_prepare_v2(pDB, sql, strlen(sql), &stmt, NULL);
            if (return_code != SQLITE_OK || stmt == nullptr) {
                cout << "Select failed: return_code: " << return_code << endl;
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return "failed";
            }
            while (SQLITE_ROW == sqlite3_step(stmt)) {
                if (sqlite3_column_bytes(stmt, 0) == 0) {
                    sqlite3_finalize(stmt);
                    close_SQL(pDB);
                    return "0";
                }
                result = (char *) sqlite3_column_text(stmt, 0);
                cout << "Select NO_instead " << "success,return: " << to_string(NO) << " - " << result << endl;
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return result;
            }
            sqlite3_finalize(stmt);
            close_SQL(pDB);
            return "NotFound";
        }
        case 6: {
            str = "select Period from visitor_data where Visitor_NO = " + to_string(NO) + ";";
            const char *sql = data(str);
            return_code = sqlite3_prepare_v2(pDB, sql, strlen(sql), &stmt, NULL);
            if (return_code != SQLITE_OK || stmt == nullptr) {
                cout << "Select failed: return_code: " << return_code << endl;
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return "failed";
            }
            while (SQLITE_ROW == sqlite3_step(stmt)) {
                if (sqlite3_column_bytes(stmt, 0) == 0) {
                    sqlite3_finalize(stmt);
                    close_SQL(pDB);
                    return "0";
                }
                result = (char *) sqlite3_column_text(stmt, 0);
                cout << "Select Period " << "success,return: " << to_string(NO) << " - " << result << endl;
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return result;
            }
            sqlite3_finalize(stmt);
            close_SQL(pDB);
            return "NotFound";
        }
    }
}

//1-PhoneNum 2-ID 3-Password 4-Name
int check_Visitor_NO(sqlite3 *pDB, int type, const QString &text) {
    open_SQL(&pDB);
    string str;
    int return_code, result;
    sqlite3_stmt *stmt;
    switch (type) {
        case 1: {
            str = "select Visitor_NO from visitor_data where PhoneNum = " + text.toStdString() + ";";
            const char *sql = data(str);
            return_code = sqlite3_prepare_v2(pDB, sql, strlen(sql), &stmt, NULL);
            if (return_code != SQLITE_OK) {
                cout << "Select failed: return_code: " << return_code << endl;
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return -1;
            }
            while (SQLITE_ROW == sqlite3_step(stmt)) {
                cout << "Select PhoneNum_NO£º" << text.toStdString() << " success,return: "
                     << sqlite3_column_int(stmt, 0) << endl;
                result = sqlite3_column_int(stmt, 0);
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return result;
            }
            sqlite3_finalize(stmt);
            close_SQL(pDB);
            return 0;
        }
        case 2: {
            str = "select Visitor_NO from visitor_data where ID = " + text.toStdString() + ";";
            const char *sql = data(str);
            return_code = sqlite3_prepare_v2(pDB, sql, strlen(sql), &stmt, NULL);
            if (return_code != SQLITE_OK || NULL == stmt) {
                cout << "Select failed: return_code: " << return_code << endl;
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return -1;
            }
            while (SQLITE_ROW == sqlite3_step(stmt)) {
                cout << "Select ID_NO£º" << text.toStdString() << " success,return: " << sqlite3_column_int(stmt, 0)
                     << endl;
                result = sqlite3_column_int(stmt, 0);
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return result;
            }
            sqlite3_finalize(stmt);
            close_SQL(pDB);
            return 0;
        }
        case 3: {
            string Password_md5 = md5(text.toStdString());
            str = "select Visitor_NO from visitor_data where Password = " + Password_md5 + ";";
            cout << str << endl;
            const char *sql = data(str);
            return_code = sqlite3_prepare_v2(pDB, sql, strlen(sql), &stmt, NULL);
            if (return_code != SQLITE_OK || NULL == stmt) {
                cout << Password_md5 << "Select failed: return_code: " << return_code << endl;
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return -1;
            }
            while (SQLITE_ROW == sqlite3_step(stmt)) {
                cout << "Select Password_NO£º" << text.toStdString() << " success,return: "
                     << sqlite3_column_int(stmt, 0) << endl;
                result = sqlite3_column_int(stmt, 0);
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return result;
            }
            sqlite3_finalize(stmt);
            close_SQL(pDB);
            return 0;
        }
        case 4: {
            str = "select Visitor_NO from visitor_data where Name = \"" + text.toStdString() + "\";";
            cout << str << endl;
            const char *sql = data(str);
            return_code = sqlite3_prepare_v2(pDB, sql, strlen(sql), &stmt, NULL);
            if (return_code != SQLITE_OK || NULL == stmt) {
                cout << "Select failed: return_code: " << return_code << endl;
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return -1;
            }
            while (SQLITE_ROW == sqlite3_step(stmt)) {
                cout << "Select Name£º" << text.toStdString() << " success,return: "
                     << sqlite3_column_int(stmt, 0) << endl;
                result = sqlite3_column_int(stmt, 0);
                sqlite3_finalize(stmt);
                close_SQL(pDB);
                return result;
            }
            sqlite3_finalize(stmt);
            close_SQL(pDB);
            return 0;
        }
    }
}

int RegisterVisitor(sqlite3 *pDB, QString Name, QString PhoneNum, QString ID, QString Password) {
    open_SQL(&pDB);
    string str, Password_md5;
    Password_md5 = md5(Password.toStdString());
    char *zErrMsg;
    str = "INSERT INTO visitor_data (Name,PhoneNum,ID,Password,Period) "  \
         "VALUES (\"" + Name.toStdString() + "\",\"" + PhoneNum.toStdString() + "\",\"" + ID.toStdString() + "\",\"" +
          Password_md5 + "\",\"1900_12_31_0\"); ";
    const char *sql = data(str);
    int return_code = sqlite3_exec(pDB, sql, callback, 0, &zErrMsg);
    if (return_code != SQLITE_OK) {
        cerr << "SQL error: " << zErrMsg << endl;
        sqlite3_free(zErrMsg);
        close_SQL(pDB);
        return 0;
    } else {
        cout << "insert to visitor_data successfully" << endl;
        sqlite3_free(zErrMsg);
        close_SQL(pDB);
        return 1;
    }
}

//type 1-ID 2-PhoneNum 3-Name 4-Password 5-Period 6-Instead
bool UpdateVisitor(sqlite3 *pDB, int type, const QString &text, int Visitor_NO) {
    string str;
    char *zErrMsg;
    switch (type) {
        case 1: {
            str = "UPDATE Visitor_data set ID = \"" + text.toStdString() +
                  "\" WHERE Visitor_NO = " + to_string(Visitor_NO) + ";";
            const char *sql = data(str);
            open_SQL(&pDB);
            int rc = sqlite3_exec(pDB, sql, callback, 0, &zErrMsg);
            if (rc != SQLITE_OK) {
                cerr << "SQL error: " << zErrMsg << endl;
                sqlite3_free(zErrMsg);
                close_SQL(pDB);
                return false;
            } else {
                cout << "Update visitor_data successfully\nNew ID is: " << text.toStdString().c_str() << endl;
                sqlite3_free(zErrMsg);
                close_SQL(pDB);
                return true;
            }
        }
        case 2: {
            str = "UPDATE Visitor_data set PhoneNum = \"" + text.toStdString() +
                  "\" WHERE Visitor_NO = " + to_string(Visitor_NO) + ";";
            const char *sql = data(str);
            open_SQL(&pDB);
            int rc = sqlite3_exec(pDB, sql, callback, 0, &zErrMsg);
            if (rc != SQLITE_OK) {
                cerr << "SQL error: " << zErrMsg << endl;
                sqlite3_free(zErrMsg);
                close_SQL(pDB);
                return false;
            } else {
                cout << "Update visitor_data successfully\nNew PhoneNum is: " << text.toStdString().c_str() << endl;
                sqlite3_free(zErrMsg);
                close_SQL(pDB);
                return true;
            }
        }
        case 3: {
            str = "UPDATE Visitor_data set Name = \"" + text.toStdString() +
                  "\" WHERE Visitor_NO = " + to_string(Visitor_NO) + ";";
            const char *sql = data(str);
            open_SQL(&pDB);
            int rc = sqlite3_exec(pDB, sql, callback, 0, &zErrMsg);
            if (rc != SQLITE_OK) {
                cerr << "SQL error: " << zErrMsg << endl;
                sqlite3_free(zErrMsg);
                close_SQL(pDB);
                return false;
            } else {
                cout << "Update visitor_data successfully\nNew Name is: " << text.toStdString().c_str() << endl;
                sqlite3_free(zErrMsg);
                close_SQL(pDB);
                return true;
            }
        }
        case 4: {
            string Password_md5 = md5(text.toStdString());
            str = "UPDATE Visitor_data set Password = \"" + Password_md5 +
                  "\" WHERE Visitor_NO = " + to_string(Visitor_NO) + ";";
            const char *sql = data(str);
            open_SQL(&pDB);
            int rc = sqlite3_exec(pDB, sql, callback, 0, &zErrMsg);
            if (rc != SQLITE_OK) {
                cerr << "SQL error: " << zErrMsg << endl;
                sqlite3_free(zErrMsg);
                close_SQL(pDB);
                return false;
            } else {
                cout << "Update visitor_data successfully\nNew Password is: " << text.toStdString().c_str() << endl;
                close_SQL(pDB);
                sqlite3_free(zErrMsg);
                return true;
            }
        }
        case 5: {
            str = "UPDATE Visitor_data set Period = \"" + text.toStdString() +
                  "\" WHERE Visitor_NO = " + to_string(Visitor_NO) + ";";
            const char *sql = data(str);
            open_SQL(&pDB);
            int rc = sqlite3_exec(pDB, sql, callback, 0, &zErrMsg);
            if (rc != SQLITE_OK) {
                cerr << "SQL error: " << zErrMsg << endl;
                sqlite3_free(zErrMsg);
                close_SQL(pDB);
                return false;
            } else {
                cout << "Update visitor_data successfully\nNew Period is: " << text.toStdString().c_str() << endl;
                sqlite3_free(zErrMsg);
                close_SQL(pDB);
                return true;
            }
        }
        case 6: {
            str = "UPDATE Visitor_data set instead_NO = \"" + text.toStdString() +
                  "\" WHERE Visitor_NO = " + to_string(Visitor_NO) + ";";
            const char *sql = data(str);
            open_SQL(&pDB);
            int rc = sqlite3_exec(pDB, sql, callback, 0, &zErrMsg);
            if (rc != SQLITE_OK) {
                cerr << "SQL error: " << zErrMsg << endl;
                sqlite3_free(zErrMsg);
                close_SQL(pDB);
                return false;
            } else {
                cout << "Update visitor_data successfully\nNew Instead is: " << text.toStdString().c_str() << endl;
                sqlite3_free(zErrMsg);
                close_SQL(pDB);
                return true;
            }
        }
    }
}

//hour-capacity
int check_capacity(sqlite3 *pDB, int hour, int year, int month, int day) {
    open_SQL(&pDB);
    string str;
    int result;
    int return_code;
    sqlite3_stmt *stmt;
    str = "select capacity from \"" + to_string(year) + "_" + to_string(month) + "_" + to_string(day) +
          "\" where hour = " + to_string(hour) + ";";
    cout << str << endl;
    const char *sql = data(str);
    return_code = sqlite3_prepare_v2(pDB, sql, strlen(sql), &stmt, NULL);
    if (return_code != SQLITE_OK || NULL == stmt) {
        cout << "Select failed: return_code: " << return_code << endl;
        sqlite3_finalize(stmt);
        close_SQL(pDB);
        return -1;
    }
    while (SQLITE_ROW == sqlite3_step(stmt)) {
        result = sqlite3_column_int(stmt, 0);
        sqlite3_finalize(stmt);
        close_SQL(pDB);
        cout << "Select successfully: return: " << result << endl;
        return result;
    }
    sqlite3_finalize(stmt);
    close_SQL(pDB);
    return -1;
}

//hour-capacity
int check_occupied(sqlite3 *pDB, int hour, int year, int month, int day) {
    open_SQL(&pDB);
    string str;
    int result;
    int return_code;
    sqlite3_stmt *stmt;
    str = "select occupied from \"" + to_string(year) + "_" + to_string(month) + "_" + to_string(day) +
          "\" where hour = " + to_string(hour) + ";";
    cout << str << endl;
    const char *sql = data(str);
    return_code = sqlite3_prepare_v2(pDB, sql, strlen(sql), &stmt, NULL);
    if (return_code != SQLITE_OK || NULL == stmt) {
        cout << "Select failed: return_code: " << return_code << endl;
        sqlite3_finalize(stmt);
        close_SQL(pDB);
        return -1;
    }
    while (SQLITE_ROW == sqlite3_step(stmt)) {
        result = sqlite3_column_int(stmt, 0);
        sqlite3_finalize(stmt);
        close_SQL(pDB);
        cout << "Select successfully: return: " << result << endl;
        return result;
    }
    sqlite3_finalize(stmt);
    close_SQL(pDB);
    return -1;
}


//hour-capacity
int set_capacity(sqlite3 *pDB, int hour, int year, int month, int day, int newCapacity) {
    string str;
    char *zErrMsg;
    str = "Update \"" + to_string(year) + "_" + to_string(month) + "_" + to_string(day) +
          "\" set capacity = " + to_string(newCapacity) + " where hour = " + to_string(hour) + ";";
    cout << str << endl;
    const char *sql = data(str);
    open_SQL(&pDB);
    int rc = sqlite3_exec(pDB, sql, callback, 0, &zErrMsg);
    if (rc != SQLITE_OK) {
        cerr << "SQL error: " << zErrMsg << endl;
        sqlite3_free(zErrMsg);
        close_SQL(pDB);
        return false;
    } else {
        cout << "Update visitor_data successfully\nNew Capacity is: " << newCapacity << endl;
        close_SQL(pDB);
        return true;
    }
}

//hour-occupied
int set_occupied(sqlite3 *pDB, int hour, int year, int month, int day, int newOccupied) {
    string str;
    char *zErrMsg;
    str = "Update \"" + to_string(year) + "_" + to_string(month) + "_" + to_string(day) +
          "\" set occupied = " + to_string(newOccupied) + " where hour = " + to_string(hour) + ";";
    cout << str << endl;
    const char *sql = data(str);
    open_SQL(&pDB);
    int rc = sqlite3_exec(pDB, sql, callback, 0, &zErrMsg);
    if (rc != SQLITE_OK) {
        cerr << "SQL error: " << zErrMsg << endl;
        sqlite3_free(zErrMsg);
        close_SQL(pDB);
        return false;
    } else {
        cout << "Update visitor_data successfully\nNew Occupied is: " << newOccupied << endl;
        sqlite3_free(zErrMsg);
        close_SQL(pDB);
        return true;
    }
}

string getNowPeriod() {
    SYSTEMTIME *time;
    GetLocalTime(time);
    string now = to_string(time->wYear) + "_" + to_string(time->wMonth) + "_" + to_string(time->wDay) + "_" +
                 to_string(time->wHour);
    return now;
}