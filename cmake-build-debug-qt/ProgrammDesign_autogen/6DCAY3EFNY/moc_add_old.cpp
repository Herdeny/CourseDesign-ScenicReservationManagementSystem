/****************************************************************************
** Meta object code from reading C++ file 'add_old.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Header Files/add_old.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_old.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSadd_oldENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSadd_oldENDCLASS = QtMocHelpers::stringData(
    "add_old",
    "on_Input_Account_EditText_textEdited",
    "",
    "arg1",
    "on_Close_Button_clicked",
    "on_Input_Password_EditText_textEdited",
    "on_Hide_Button_clicked",
    "on_Login_Button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSadd_oldENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[8];
    char stringdata1[37];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[24];
    char stringdata5[38];
    char stringdata6[23];
    char stringdata7[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSadd_oldENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSadd_oldENDCLASS_t qt_meta_stringdata_CLASSadd_oldENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "add_old"
        QT_MOC_LITERAL(8, 36),  // "on_Input_Account_EditText_tex..."
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 4),  // "arg1"
        QT_MOC_LITERAL(51, 23),  // "on_Close_Button_clicked"
        QT_MOC_LITERAL(75, 37),  // "on_Input_Password_EditText_te..."
        QT_MOC_LITERAL(113, 22),  // "on_Hide_Button_clicked"
        QT_MOC_LITERAL(136, 23)   // "on_Login_Button_clicked"
    },
    "add_old",
    "on_Input_Account_EditText_textEdited",
    "",
    "arg1",
    "on_Close_Button_clicked",
    "on_Input_Password_EditText_textEdited",
    "on_Hide_Button_clicked",
    "on_Login_Button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSadd_oldENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x08,    1 /* Private */,
       4,    0,   47,    2, 0x08,    3 /* Private */,
       5,    1,   48,    2, 0x08,    4 /* Private */,
       6,    0,   51,    2, 0x08,    6 /* Private */,
       7,    0,   52,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject add_old::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSadd_oldENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSadd_oldENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSadd_oldENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<add_old, std::true_type>,
        // method 'on_Input_Account_EditText_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_Close_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Input_Password_EditText_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_Hide_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Login_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void add_old::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<add_old *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Input_Account_EditText_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_Close_Button_clicked(); break;
        case 2: _t->on_Input_Password_EditText_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_Hide_Button_clicked(); break;
        case 4: _t->on_Login_Button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *add_old::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *add_old::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSadd_oldENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int add_old::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
