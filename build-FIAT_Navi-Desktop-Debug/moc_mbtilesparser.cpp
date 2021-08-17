/****************************************************************************
** Meta object code from reading C++ file 'mbtilesparser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FIAT_Navi/mbtilesparser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mbtilesparser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MBTilesParser_t {
    QByteArrayData data[7];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MBTilesParser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MBTilesParser_t qt_meta_stringdata_MBTilesParser = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MBTilesParser"
QT_MOC_LITERAL(1, 14, 10), // "file_added"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "file"
QT_MOC_LITERAL(4, 31, 11), // "queue_empty"
QT_MOC_LITERAL(5, 43, 5), // "error"
QT_MOC_LITERAL(6, 49, 3) // "msg"

    },
    "MBTilesParser\0file_added\0\0file\0"
    "queue_empty\0error\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MBTilesParser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,
       5,    1,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void MBTilesParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MBTilesParser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->file_added((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->queue_empty(); break;
        case 2: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MBTilesParser::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MBTilesParser::file_added)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MBTilesParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MBTilesParser::queue_empty)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MBTilesParser::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MBTilesParser::error)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MBTilesParser::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MBTilesParser.data,
    qt_meta_data_MBTilesParser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MBTilesParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MBTilesParser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MBTilesParser.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MBTilesParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MBTilesParser::file_added(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MBTilesParser::queue_empty()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MBTilesParser::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
