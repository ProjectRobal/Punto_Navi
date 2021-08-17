/****************************************************************************
** Meta object code from reading C++ file 'qgeopositioninfosourcefactory_gpsd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FIAT_Navi/plugins/qtposition_gpsd/qgeopositioninfosourcefactory_gpsd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeopositioninfosourcefactory_gpsd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoPositionInfoSourceFactoryGpsd_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoPositionInfoSourceFactoryGpsd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoPositionInfoSourceFactoryGpsd_t qt_meta_stringdata_QGeoPositionInfoSourceFactoryGpsd = {
    {
QT_MOC_LITERAL(0, 0, 33) // "QGeoPositionInfoSourceFactory..."

    },
    "QGeoPositionInfoSourceFactoryGpsd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoPositionInfoSourceFactoryGpsd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QGeoPositionInfoSourceFactoryGpsd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QGeoPositionInfoSourceFactoryGpsd::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QGeoPositionInfoSourceFactoryGpsd.data,
    qt_meta_data_QGeoPositionInfoSourceFactoryGpsd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QGeoPositionInfoSourceFactoryGpsd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoPositionInfoSourceFactoryGpsd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoPositionInfoSourceFactoryGpsd.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGeoPositionInfoSourceFactory"))
        return static_cast< QGeoPositionInfoSourceFactory*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.position.sourcefactory/5.0"))
        return static_cast< QGeoPositionInfoSourceFactory*>(this);
    return QObject::qt_metacast(_clname);
}

int QGeoPositionInfoSourceFactoryGpsd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x2c,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'q',  't',  '.',  'p',  'o',  's', 
    'i',  't',  'i',  'o',  'n',  '.',  's',  'o', 
    'u',  'r',  'c',  'e',  'f',  'a',  'c',  't', 
    'o',  'r',  'y',  '/',  '5',  '.',  '0', 
    // "className"
    0x03,  0x78,  0x21,  'Q',  'G',  'e',  'o',  'P', 
    'o',  's',  'i',  't',  'i',  'o',  'n',  'I', 
    'n',  'f',  'o',  'S',  'o',  'u',  'r',  'c', 
    'e',  'F',  'a',  'c',  't',  'o',  'r',  'y', 
    'G',  'p',  's',  'd', 
    // "MetaData"
    0x04,  0xa6,  0x64,  'K',  'e',  'y',  's',  0x81, 
    0x64,  'g',  'p',  's',  'd',  0x67,  'M',  'o', 
    'n',  'i',  't',  'o',  'r',  0xf4,  0x68,  'P', 
    'o',  's',  'i',  't',  'i',  'o',  'n',  0xf5, 
    0x68,  'P',  'r',  'i',  'o',  'r',  'i',  't', 
    'y',  0x19,  0x03,  0xe9,  0x68,  'P',  'r',  'o', 
    'v',  'i',  'd',  'e',  'r',  0x64,  'g',  'p', 
    's',  'd',  0x69,  'S',  'a',  't',  'e',  'l', 
    'l',  'i',  't',  'e',  0xf5, 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(QGeoPositionInfoSourceFactoryGpsd, QGeoPositionInfoSourceFactoryGpsd)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
