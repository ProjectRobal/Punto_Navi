/****************************************************************************
** Meta object code from reading C++ file 'gpsdmasterdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FIAT_Navi/plugins/qtposition_gpsd/gpsdmasterdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpsdmasterdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GpsdMasterDevice_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GpsdMasterDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GpsdMasterDevice_t qt_meta_stringdata_GpsdMasterDevice = {
    {
QT_MOC_LITERAL(0, 0, 16), // "GpsdMasterDevice"
QT_MOC_LITERAL(1, 17, 12), // "ErrorOccured"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "GPSDErrors"
QT_MOC_LITERAL(4, 42, 3), // "msg"
QT_MOC_LITERAL(5, 46, 21) // "readFromSocketAndCopy"

    },
    "GpsdMasterDevice\0ErrorOccured\0\0"
    "GPSDErrors\0msg\0readFromSocketAndCopy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GpsdMasterDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GpsdMasterDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GpsdMasterDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ErrorOccured((*reinterpret_cast< GPSDErrors(*)>(_a[1]))); break;
        case 1: _t->readFromSocketAndCopy(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GpsdMasterDevice::*)(GPSDErrors );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GpsdMasterDevice::ErrorOccured)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GpsdMasterDevice::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GpsdMasterDevice.data,
    qt_meta_data_GpsdMasterDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GpsdMasterDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GpsdMasterDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GpsdMasterDevice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GpsdMasterDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GpsdMasterDevice::ErrorOccured(GPSDErrors _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
