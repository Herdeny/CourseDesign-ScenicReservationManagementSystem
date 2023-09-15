/****************************************************************************
** Meta object code from reading C++ file 'visitor_menu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Header Files/visitor_menu.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visitor_menu.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVisitor_MenuENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSVisitor_MenuENDCLASS = QtMocHelpers::stringData(
    "Visitor_Menu",
    "on_Appoint_Button_clicked",
    "",
    "on_Information_Button_clicked",
    "on_Manager_Button_clicked",
    "on_Exit_Button_clicked",
    "on_Close_Button_clicked",
    "on_Hide_Button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVisitor_MenuENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[30];
    char stringdata4[26];
    char stringdata5[23];
    char stringdata6[24];
    char stringdata7[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVisitor_MenuENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVisitor_MenuENDCLASS_t qt_meta_stringdata_CLASSVisitor_MenuENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "Visitor_Menu"
        QT_MOC_LITERAL(13, 25),  // "on_Appoint_Button_clicked"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 29),  // "on_Information_Button_clicked"
        QT_MOC_LITERAL(70, 25),  // "on_Manager_Button_clicked"
        QT_MOC_LITERAL(96, 22),  // "on_Exit_Button_clicked"
        QT_MOC_LITERAL(119, 23),  // "on_Close_Button_clicked"
        QT_MOC_LITERAL(143, 22)   // "on_Hide_Button_clicked"
    },
    "Visitor_Menu",
    "on_Appoint_Button_clicked",
    "",
    "on_Information_Button_clicked",
    "on_Manager_Button_clicked",
    "on_Exit_Button_clicked",
    "on_Close_Button_clicked",
    "on_Hide_Button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVisitor_MenuENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Visitor_Menu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSVisitor_MenuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVisitor_MenuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVisitor_MenuENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Visitor_Menu, std::true_type>,
        // method 'on_Appoint_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Information_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Manager_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Exit_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Close_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Hide_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Visitor_Menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Visitor_Menu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Appoint_Button_clicked(); break;
        case 1: _t->on_Information_Button_clicked(); break;
        case 2: _t->on_Manager_Button_clicked(); break;
        case 3: _t->on_Exit_Button_clicked(); break;
        case 4: _t->on_Close_Button_clicked(); break;
        case 5: _t->on_Hide_Button_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Visitor_Menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Visitor_Menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVisitor_MenuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Visitor_Menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
