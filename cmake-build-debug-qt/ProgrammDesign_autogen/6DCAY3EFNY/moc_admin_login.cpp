/****************************************************************************
** Meta object code from reading C++ file 'admin_login.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Header Files/admin_login.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin_login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAdmin_LoginENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAdmin_LoginENDCLASS = QtMocHelpers::stringData(
    "Admin_Login",
    "on_Visitor_Label_clicked",
    "",
    "on_Close_Button_clicked",
    "on_Hide_Button_clicked",
    "on_Login_Button_clicked",
    "on_Input_Account_EditText_textEdited",
    "arg1",
    "on_Input_Password_EditText_textEdited"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAdmin_LoginENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[12];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[23];
    char stringdata5[24];
    char stringdata6[37];
    char stringdata7[5];
    char stringdata8[38];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAdmin_LoginENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAdmin_LoginENDCLASS_t qt_meta_stringdata_CLASSAdmin_LoginENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "Admin_Login"
        QT_MOC_LITERAL(12, 24),  // "on_Visitor_Label_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 23),  // "on_Close_Button_clicked"
        QT_MOC_LITERAL(62, 22),  // "on_Hide_Button_clicked"
        QT_MOC_LITERAL(85, 23),  // "on_Login_Button_clicked"
        QT_MOC_LITERAL(109, 36),  // "on_Input_Account_EditText_tex..."
        QT_MOC_LITERAL(146, 4),  // "arg1"
        QT_MOC_LITERAL(151, 37)   // "on_Input_Password_EditText_te..."
    },
    "Admin_Login",
    "on_Visitor_Label_clicked",
    "",
    "on_Close_Button_clicked",
    "on_Hide_Button_clicked",
    "on_Login_Button_clicked",
    "on_Input_Account_EditText_textEdited",
    "arg1",
    "on_Input_Password_EditText_textEdited"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAdmin_LoginENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    1,   54,    2, 0x08,    5 /* Private */,
       8,    1,   57,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject Admin_Login::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSAdmin_LoginENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAdmin_LoginENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAdmin_LoginENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Admin_Login, std::true_type>,
        // method 'on_Visitor_Label_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Close_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Hide_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Login_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Input_Account_EditText_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_Input_Password_EditText_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Admin_Login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Admin_Login *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Visitor_Label_clicked(); break;
        case 1: _t->on_Close_Button_clicked(); break;
        case 2: _t->on_Hide_Button_clicked(); break;
        case 3: _t->on_Login_Button_clicked(); break;
        case 4: _t->on_Input_Account_EditText_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_Input_Password_EditText_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Admin_Login::*)();
            if (_t _q_method = &Admin_Login::on_Visitor_Label_clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Admin_Login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Admin_Login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAdmin_LoginENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Admin_Login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Admin_Login::on_Visitor_Label_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
