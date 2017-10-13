/****************************************************************************
** Meta object code from reading C++ file 'nanotechpro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NanotechPRO/nanotechpro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nanotechpro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NanotechPRO_t {
    QByteArrayData data[14];
    char stringdata[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NanotechPRO_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NanotechPRO_t qt_meta_stringdata_NanotechPRO = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 11),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 12),
QT_MOC_LITERAL(4, 38, 16),
QT_MOC_LITERAL(5, 55, 16),
QT_MOC_LITERAL(6, 72, 14),
QT_MOC_LITERAL(7, 87, 14),
QT_MOC_LITERAL(8, 102, 17),
QT_MOC_LITERAL(9, 120, 23),
QT_MOC_LITERAL(10, 144, 8),
QT_MOC_LITERAL(11, 153, 26),
QT_MOC_LITERAL(12, 180, 23),
QT_MOC_LITERAL(13, 204, 23)
    },
    "NanotechPRO\0slotVerSize\0\0slotVerReset\0"
    "slotTimerLoading\0slot_ac_menu_new\0"
    "slot_ac_menu_1\0slot_ac_menu_2\0"
    "slot_ac_menu_exit\0slotSignal_pushB_page_0\0"
    "int_page\0on_pushB_new_pro_0_clicked\0"
    "on_panel_menu_0_clicked\0on_panel_menu_1_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NanotechPRO[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NanotechPRO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NanotechPRO *_t = static_cast<NanotechPRO *>(_o);
        switch (_id) {
        case 0: _t->slotVerSize(); break;
        case 1: _t->slotVerReset(); break;
        case 2: _t->slotTimerLoading(); break;
        case 3: _t->slot_ac_menu_new(); break;
        case 4: _t->slot_ac_menu_1(); break;
        case 5: _t->slot_ac_menu_2(); break;
        case 6: _t->slot_ac_menu_exit(); break;
        case 7: _t->slotSignal_pushB_page_0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pushB_new_pro_0_clicked(); break;
        case 9: _t->on_panel_menu_0_clicked(); break;
        case 10: _t->on_panel_menu_1_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject NanotechPRO::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NanotechPRO.data,
      qt_meta_data_NanotechPRO,  qt_static_metacall, 0, 0}
};


const QMetaObject *NanotechPRO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NanotechPRO::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NanotechPRO.stringdata))
        return static_cast<void*>(const_cast< NanotechPRO*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NanotechPRO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
