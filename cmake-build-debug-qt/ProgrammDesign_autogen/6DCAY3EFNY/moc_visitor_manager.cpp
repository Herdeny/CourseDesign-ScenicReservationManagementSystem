/****************************************************************************
** Meta object code from reading C++ file 'visitor_manager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Header Files/visitor_manager.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visitor_manager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVisitor_ManagerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSVisitor_ManagerENDCLASS = QtMocHelpers::stringData(
    "Visitor_Manager",
    "on_Person_combox_changed",
    "",
    "on_Close_Button_clicked",
    "on_Hide_Button_clicked",
    "on_Add_Button_clicked",
    "on_Delete_Button_clicked",
    "on_Change_Button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVisitor_ManagerENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[16];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[23];
    char stringdata5[22];
    char stringdata6[25];
    char stringdata7[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVisitor_ManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVisitor_ManagerENDCLASS_t qt_meta_stringdata_CLASSVisitor_ManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "Visitor_Manager"
        QT_MOC_LITERAL(16, 24),  // "on_Person_combox_changed"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 23),  // "on_Close_Button_clicked"
        QT_MOC_LITERAL(66, 22),  // "on_Hide_Button_clicked"
        QT_MOC_LITERAL(89, 21),  // "on_Add_Button_clicked"
        QT_MOC_LITERAL(111, 24),  // "on_Delete_Button_clicked"
        QT_MOC_LITERAL(136, 24)   // "on_Change_Button_clicked"
    },
    "Visitor_Manager",
    "on_Person_combox_changed",
    "",
    "on_Close_Button_clicked",
    "on_Hide_Button_clicked",
    "on_Add_Button_clicked",
    "on_Delete_Button_clicked",
    "on_Change_Button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVisitor_ManagerENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject Visitor_Manager::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSVisitor_ManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVisitor_ManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVisitor_ManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Visitor_Manager, std::true_type>,
        // method 'on_Person_combox_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Close_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Hide_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Add_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Delete_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Change_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Visitor_Manager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Visitor_Manager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Person_combox_changed(); break;
        case 1: _t->on_Close_Button_clicked(); break;
        case 2: _t->on_Hide_Button_clicked(); break;
        case 3: _t->on_Add_Button_clicked(); break;
        case 4: _t->on_Delete_Button_clicked(); break;
        case 5: _t->on_Change_Button_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Visitor_Manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Visitor_Manager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVisitor_ManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Visitor_Manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
