/****************************************************************************
** Meta object code from reading C++ file 'headunit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "headunit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'headunit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Headunit_t {
    QByteArrayData data[25];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Headunit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Headunit_t qt_meta_stringdata_Headunit = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Headunit"
QT_MOC_LITERAL(1, 9, 13), // "outputResized"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "videoResized"
QT_MOC_LITERAL(4, 37, 15), // "deviceConnected"
QT_MOC_LITERAL(5, 53, 12), // "notification"
QT_MOC_LITERAL(6, 66, 19), // "btConnectionRequest"
QT_MOC_LITERAL(7, 86, 7), // "address"
QT_MOC_LITERAL(8, 94, 19), // "videoSurfaceChanged"
QT_MOC_LITERAL(9, 114, 13), // "statusChanged"
QT_MOC_LITERAL(10, 128, 9), // "gst_error"
QT_MOC_LITERAL(11, 138, 7), // "resetAA"
QT_MOC_LITERAL(12, 146, 7), // "failure"
QT_MOC_LITERAL(13, 154, 9), // "mouseDown"
QT_MOC_LITERAL(14, 164, 5), // "point"
QT_MOC_LITERAL(15, 170, 9), // "mouseMove"
QT_MOC_LITERAL(16, 180, 7), // "mouseUp"
QT_MOC_LITERAL(17, 188, 8), // "keyEvent"
QT_MOC_LITERAL(18, 197, 3), // "key"
QT_MOC_LITERAL(19, 201, 7), // "startAA"
QT_MOC_LITERAL(20, 209, 5), // "endAA"
QT_MOC_LITERAL(21, 215, 9), // "hu_status"
QT_MOC_LITERAL(22, 225, 13), // "NO_CONNECTION"
QT_MOC_LITERAL(23, 239, 13), // "VIDEO_WAITING"
QT_MOC_LITERAL(24, 253, 7) // "RUNNING"

    },
    "Headunit\0outputResized\0\0videoResized\0"
    "deviceConnected\0notification\0"
    "btConnectionRequest\0address\0"
    "videoSurfaceChanged\0statusChanged\0"
    "gst_error\0resetAA\0failure\0mouseDown\0"
    "point\0mouseMove\0mouseUp\0keyEvent\0key\0"
    "startAA\0endAA\0hu_status\0NO_CONNECTION\0"
    "VIDEO_WAITING\0RUNNING"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Headunit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       1,  116, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    1,   91,    2, 0x06 /* Public */,
       6,    1,   94,    2, 0x06 /* Public */,
       8,    0,   97,    2, 0x06 /* Public */,
       9,    0,   98,    2, 0x06 /* Public */,
      10,    0,   99,    2, 0x06 /* Public */,
      11,    0,  100,    2, 0x06 /* Public */,
      12,    0,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  102,    2, 0x0a /* Public */,
      15,    1,  105,    2, 0x0a /* Public */,
      16,    1,  108,    2, 0x0a /* Public */,
      17,    1,  111,    2, 0x0a /* Public */,
      19,    0,  114,    2, 0x0a /* Public */,
      20,    0,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QPoint,   14,
    QMetaType::Bool, QMetaType::QPoint,   14,
    QMetaType::Bool, QMetaType::QPoint,   14,
    QMetaType::Bool, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      21,   21, 0x0,    3,  121,

 // enum data: key, value
      22, uint(Headunit::NO_CONNECTION),
      23, uint(Headunit::VIDEO_WAITING),
      24, uint(Headunit::RUNNING),

       0        // eod
};

void Headunit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Headunit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputResized(); break;
        case 1: _t->videoResized(); break;
        case 2: _t->deviceConnected((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        case 3: _t->btConnectionRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->videoSurfaceChanged(); break;
        case 5: _t->statusChanged(); break;
        case 6: _t->gst_error(); break;
        case 7: _t->resetAA(); break;
        case 8: _t->failure(); break;
        case 9: { bool _r = _t->mouseDown((*reinterpret_cast< QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->mouseMove((*reinterpret_cast< QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->mouseUp((*reinterpret_cast< QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->keyEvent((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->startAA(); break;
        case 14: _t->endAA(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Headunit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Headunit::outputResized)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Headunit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Headunit::videoResized)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Headunit::*)(QVariantMap );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Headunit::deviceConnected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Headunit::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Headunit::btConnectionRequest)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Headunit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Headunit::videoSurfaceChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Headunit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Headunit::statusChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Headunit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Headunit::gst_error)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Headunit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Headunit::resetAA)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Headunit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Headunit::failure)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Headunit::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Headunit.data,
    qt_meta_data_Headunit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Headunit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Headunit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Headunit.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Headunit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Headunit::outputResized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Headunit::videoResized()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Headunit::deviceConnected(QVariantMap _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Headunit::btConnectionRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Headunit::videoSurfaceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Headunit::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Headunit::gst_error()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Headunit::resetAA()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Headunit::failure()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
