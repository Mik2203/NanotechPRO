/****************************************************************************
** Meta object code from reading C++ file 'widget_sys_stage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NanotechPRO/widget/sys_stage/widget_sys_stage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget_sys_stage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_widget_sys_stage_t {
    QByteArrayData data[11];
    char stringdata[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_widget_sys_stage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_widget_sys_stage_t qt_meta_stringdata_widget_sys_stage = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 14),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 5),
QT_MOC_LITERAL(4, 39, 18),
QT_MOC_LITERAL(5, 58, 17),
QT_MOC_LITERAL(6, 76, 17),
QT_MOC_LITERAL(7, 94, 21),
QT_MOC_LITERAL(8, 116, 21),
QT_MOC_LITERAL(9, 138, 21),
QT_MOC_LITERAL(10, 160, 19)
    },
    "widget_sys_stage\0slot_pushB_all\0\0index\0"
    "slot_page_list_all\0slot_pushB_page_0\0"
    "slot_pushB_page_1\0slot_pushB_add_page_0\0"
    "slot_pushB_del_page_0\0slot_pushB_del_page_1\0"
    "slot_pushB_sys_page"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_widget_sys_stage[] = {

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
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       5,    0,   60,    2, 0x0a /* Public */,
       6,    0,   61,    2, 0x0a /* Public */,
       7,    0,   62,    2, 0x0a /* Public */,
       8,    0,   63,    2, 0x0a /* Public */,
       9,    0,   64,    2, 0x0a /* Public */,
      10,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void widget_sys_stage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        widget_sys_stage *_t = static_cast<widget_sys_stage *>(_o);
        switch (_id) {
        case 0: _t->slot_pushB_all((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slot_page_list_all((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slot_pushB_page_0(); break;
        case 3: _t->slot_pushB_page_1(); break;
        case 4: _t->slot_pushB_add_page_0(); break;
        case 5: _t->slot_pushB_del_page_0(); break;
        case 6: _t->slot_pushB_del_page_1(); break;
        case 7: _t->slot_pushB_sys_page((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject widget_sys_stage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_widget_sys_stage.data,
      qt_meta_data_widget_sys_stage,  qt_static_metacall, 0, 0}
};


const QMetaObject *widget_sys_stage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *widget_sys_stage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_widget_sys_stage.stringdata))
        return static_cast<void*>(const_cast< widget_sys_stage*>(this));
    return QWidget::qt_metacast(_clname);
}

int widget_sys_stage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
