/****************************************************************************
** Meta object code from reading C++ file 'menuentry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "menuentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menuentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MenuEntry_t {
    QByteArrayData data[12];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MenuEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MenuEntry_t qt_meta_stringdata_MenuEntry = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MenuEntry"
QT_MOC_LITERAL(1, 10, 7), // "back_to"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 1), // "i"
QT_MOC_LITERAL(4, 21, 8), // "reset_fm"
QT_MOC_LITERAL(5, 30, 9), // "reset_rds"
QT_MOC_LITERAL(6, 40, 7), // "rds_msg"
QT_MOC_LITERAL(7, 48, 3), // "msg"
QT_MOC_LITERAL(8, 52, 8), // "show_msg"
QT_MOC_LITERAL(9, 61, 11), // "retrive_gps"
QT_MOC_LITERAL(10, 73, 16), // "QGeoPositionInfo"
QT_MOC_LITERAL(11, 90, 4) // "info"

    },
    "MenuEntry\0back_to\0\0i\0reset_fm\0reset_rds\0"
    "rds_msg\0msg\0show_msg\0retrive_gps\0"
    "QGeoPositionInfo\0info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MenuEntry[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,
       5,    0,   48,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       8,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void MenuEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back_to((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->reset_fm(); break;
        case 2: _t->reset_rds(); break;
        case 3: _t->rds_msg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->show_msg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->retrive_gps((*reinterpret_cast< const QGeoPositionInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoPositionInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuEntry::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuEntry::back_to)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MenuEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuEntry::reset_fm)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MenuEntry::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuEntry::reset_rds)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MenuEntry::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuEntry::rds_msg)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MenuEntry::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuEntry::show_msg)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MenuEntry::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_MenuEntry.data,
    qt_meta_data_MenuEntry,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MenuEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuEntry.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MenuEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MenuEntry::back_to(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MenuEntry::reset_fm()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MenuEntry::reset_rds()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MenuEntry::rds_msg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MenuEntry::show_msg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
