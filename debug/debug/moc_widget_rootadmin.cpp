/****************************************************************************
** Meta object code from reading C++ file 'widget_rootadmin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NanotechPRO/widget/rootAdmin/widget_rootadmin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget_rootadmin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_widget_rootAdmin_t {
    QByteArrayData data[12];
    char stringdata[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_widget_rootAdmin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_widget_rootAdmin_t qt_meta_stringdata_widget_rootAdmin = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 15),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 15),
QT_MOC_LITERAL(4, 50, 16),
QT_MOC_LITERAL(5, 67, 18),
QT_MOC_LITERAL(6, 86, 19),
QT_MOC_LITERAL(7, 106, 7),
QT_MOC_LITERAL(8, 114, 19),
QT_MOC_LITERAL(9, 134, 21),
QT_MOC_LITERAL(10, 156, 20),
QT_MOC_LITERAL(11, 177, 5)
    },
    "widget_rootAdmin\0signal_checkB_1\0\0"
    "signal_checkB_2\0signal_Push_name\0"
    "signal_Logo_images\0on_checkB_1_clicked\0"
    "checked\0on_checkB_2_clicked\0"
    "on_pushB_ok_0_clicked\0on_coBox_1_activated\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_widget_rootAdmin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       3,    1,   59,    2, 0x06 /* Public */,
       4,    2,   62,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   70,    2, 0x0a /* Public */,
       8,    1,   73,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void widget_rootAdmin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        widget_rootAdmin *_t = static_cast<widget_rootAdmin *>(_o);
        switch (_id) {
        case 0: _t->signal_checkB_1((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->signal_checkB_2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->signal_Push_name((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->signal_Logo_images((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_checkB_1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_checkB_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_pushB_ok_0_clicked(); break;
        case 7: _t->on_coBox_1_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (widget_rootAdmin::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&widget_rootAdmin::signal_checkB_1)) {
                *result = 0;
            }
        }
        {
            typedef void (widget_rootAdmin::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&widget_rootAdmin::signal_checkB_2)) {
                *result = 1;
            }
        }
        {
            typedef void (widget_rootAdmin::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&widget_rootAdmin::signal_Push_name)) {
                *result = 2;
            }
        }
        {
            typedef void (widget_rootAdmin::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&widget_rootAdmin::signal_Logo_images)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject widget_rootAdmin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_widget_rootAdmin.data,
      qt_meta_data_widget_rootAdmin,  qt_static_metacall, 0, 0}
};


const QMetaObject *widget_rootAdmin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *widget_rootAdmin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_widget_rootAdmin.stringdata))
        return static_cast<void*>(const_cast< widget_rootAdmin*>(this));
    return QWidget::qt_metacast(_clname);
}

int widget_rootAdmin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void widget_rootAdmin::signal_checkB_1(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void widget_rootAdmin::signal_checkB_2(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void widget_rootAdmin::signal_Push_name(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void widget_rootAdmin::signal_Logo_images(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
