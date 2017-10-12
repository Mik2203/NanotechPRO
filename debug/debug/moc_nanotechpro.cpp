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
    QByteArrayData data[10];
    char stringdata[162];
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
QT_MOC_LITERAL(3, 25, 16),
QT_MOC_LITERAL(4, 42, 14),
QT_MOC_LITERAL(5, 57, 14),
QT_MOC_LITERAL(6, 72, 14),
QT_MOC_LITERAL(7, 87, 26),
QT_MOC_LITERAL(8, 114, 23),
QT_MOC_LITERAL(9, 138, 23)
    },
    "NanotechPRO\0slotVerSize\0\0slotTimerLoading\0"
    "slot_ac_menu_1\0slot_ac_menu_2\0"
    "slot_ac_menu_3\0on_pushB_new_pro_0_clicked\0"
    "on_panel_menu_0_clicked\0on_panel_menu_1_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NanotechPRO[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        case 1: _t->slotTimerLoading(); break;
        case 2: _t->slot_ac_menu_1(); break;
        case 3: _t->slot_ac_menu_2(); break;
        case 4: _t->slot_ac_menu_3(); break;
        case 5: _t->on_pushB_new_pro_0_clicked(); break;
        case 6: _t->on_panel_menu_0_clicked(); break;
        case 7: _t->on_panel_menu_1_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
