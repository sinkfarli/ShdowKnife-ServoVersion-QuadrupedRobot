/****************************************************************************
** Meta object code from reading C++ file 'maininterface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Shadowknife/maininterface.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maininterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainInterface_t {
    const uint offsetsAndSize[18];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainInterface_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainInterface_t qt_meta_stringdata_MainInterface = {
    {
QT_MOC_LITERAL(0, 13), // "MainInterface"
QT_MOC_LITERAL(14, 18), // "on_HomeBtn_clicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 18), // "on_ToolBtn_clicked"
QT_MOC_LITERAL(53, 13), // "ReplyFinished"
QT_MOC_LITERAL(67, 14), // "QNetworkReply*"
QT_MOC_LITERAL(82, 5), // "reply"
QT_MOC_LITERAL(88, 22), // "on_RefreshWBtn_clicked"
QT_MOC_LITERAL(111, 24) // "on_CalculatorBtn_clicked"

    },
    "MainInterface\0on_HomeBtn_clicked\0\0"
    "on_ToolBtn_clicked\0ReplyFinished\0"
    "QNetworkReply*\0reply\0on_RefreshWBtn_clicked\0"
    "on_CalculatorBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainInterface[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    1,   46,    2, 0x08,    3 /* Private */,
       7,    0,   49,    2, 0x08,    5 /* Private */,
       8,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_HomeBtn_clicked(); break;
        case 1: _t->on_ToolBtn_clicked(); break;
        case 2: _t->ReplyFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 3: _t->on_RefreshWBtn_clicked(); break;
        case 4: _t->on_CalculatorBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainInterface.offsetsAndSize,
    qt_meta_data_MainInterface,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainInterface_t
, QtPrivate::TypeAndForceComplete<MainInterface, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainInterface.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
