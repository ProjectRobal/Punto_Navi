/****************************************************************************
** Meta object code from reading C++ file 'qgeosatelliteinfosource_gpsd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FIAT_Navi/plugins/qtposition_gpsd/qgeosatelliteinfosource_gpsd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeosatelliteinfosource_gpsd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoSatelliteInfoSourceGpsd_t {
    QByteArrayData data[8];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoSatelliteInfoSourceGpsd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoSatelliteInfoSourceGpsd_t qt_meta_stringdata_QGeoSatelliteInfoSourceGpsd = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QGeoSatelliteInfoSourceGpsd"
QT_MOC_LITERAL(1, 28, 13), // "requestUpdate"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 7), // "timeout"
QT_MOC_LITERAL(4, 51, 12), // "startUpdates"
QT_MOC_LITERAL(5, 64, 11), // "stopUpdates"
QT_MOC_LITERAL(6, 76, 11), // "tryReadLine"
QT_MOC_LITERAL(7, 88, 15) // "reqTimerTimeout"

    },
    "QGeoSatelliteInfoSourceGpsd\0requestUpdate\0"
    "\0timeout\0startUpdates\0stopUpdates\0"
    "tryReadLine\0reqTimerTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoSatelliteInfoSourceGpsd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       1,    0,   47,    2, 0x2a /* Public | MethodCloned */,
       4,    0,   48,    2, 0x0a /* Public */,
       5,    0,   49,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QGeoSatelliteInfoSourceGpsd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGeoSatelliteInfoSourceGpsd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->requestUpdate(); break;
        case 2: _t->startUpdates(); break;
        case 3: _t->stopUpdates(); break;
        case 4: _t->tryReadLine(); break;
        case 5: _t->reqTimerTimeout(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QGeoSatelliteInfoSourceGpsd::staticMetaObject = { {
    &QGeoSatelliteInfoSource::staticMetaObject,
    qt_meta_stringdata_QGeoSatelliteInfoSourceGpsd.data,
    qt_meta_data_QGeoSatelliteInfoSourceGpsd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGeoSatelliteInfoSourceGpsd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoSatelliteInfoSourceGpsd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoSatelliteInfoSourceGpsd.stringdata0))
        return static_cast<void*>(this);
    return QGeoSatelliteInfoSource::qt_metacast(_clname);
}

int QGeoSatelliteInfoSourceGpsd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoSatelliteInfoSource::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
