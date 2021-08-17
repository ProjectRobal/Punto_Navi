/****************************************************************************
** Meta object code from reading C++ file 'androidauto.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "androidauto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'androidauto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AndroidAuto_t {
    QByteArrayData data[9];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AndroidAuto_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AndroidAuto_t qt_meta_stringdata_AndroidAuto = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AndroidAuto"
QT_MOC_LITERAL(1, 12, 11), // "resizeVideo"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "message"
QT_MOC_LITERAL(4, 33, 11), // "status_info"
QT_MOC_LITERAL(5, 45, 7), // "startAA"
QT_MOC_LITERAL(6, 53, 6), // "stopAA"
QT_MOC_LITERAL(7, 60, 6), // "waitAA"
QT_MOC_LITERAL(8, 67, 8) // "load_aim"

    },
    "AndroidAuto\0resizeVideo\0\0message\0"
    "status_info\0startAA\0stopAA\0waitAA\0"
    "load_aim"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AndroidAuto[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x0a /* Public */,
       4,    0,   53,    2, 0x0a /* Public */,
       5,    0,   54,    2, 0x0a /* Public */,
       6,    0,   55,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AndroidAuto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AndroidAuto *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resizeVideo(); break;
        case 1: _t->message((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->status_info(); break;
        case 3: _t->startAA(); break;
        case 4: _t->stopAA(); break;
        case 5: _t->waitAA(); break;
        case 6: _t->load_aim(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AndroidAuto::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_AndroidAuto.data,
    qt_meta_data_AndroidAuto,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AndroidAuto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AndroidAuto::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AndroidAuto.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AndroidAuto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x23,  'o',  'r',  'g',  '.',  'v', 
    'i',  'k',  't',  'o',  'r',  'g',  'i',  'n', 
    'o',  '.',  'h',  'e',  'a',  'd',  'u',  'n', 
    'i',  't',  '.',  'a',  'n',  'd',  'r',  'o', 
    'i',  'd',  'a',  'u',  't',  'o', 
    // "className"
    0x03,  0x6b,  'A',  'n',  'd',  'r',  'o',  'i', 
    'd',  'A',  'u',  't',  'o', 
    // "MetaData"
    0x04,  0xa3,  0x66,  'c',  'o',  'n',  'f',  'i', 
    'g',  0xa5,  0x69,  'i',  'c',  'o',  'n',  'I', 
    'm',  'a',  'g',  'e',  0x78,  0x23,  'q',  'r', 
    'c',  ':',  '/',  'A',  'n',  'd',  'r',  'o', 
    'i',  'd',  'A',  'u',  't',  'o',  '/',  's', 
    'o',  'c',  'i',  'a',  'l',  '-',  'a',  'n', 
    'd',  'r',  'o',  'i',  'd',  '.',  's',  'v', 
    'g',  0x65,  'i',  't',  'e',  'm',  's',  0x89, 
    0xa6,  0x6c,  'd',  'e',  'f',  'a',  'u',  'l', 
    't',  'V',  'a',  'l',  'u',  'e',  0xf4,  0x65, 
    'l',  'a',  'b',  'e',  'l',  0x78,  0x1b,  'P', 
    'l',  'a',  'y',  ' ',  'N',  'a',  't',  'i', 
    'v',  'e',  ' ',  'M',  'e',  'd',  'i',  'a', 
    ' ',  'd',  'u',  'r',  'i',  'n',  'g',  ' ', 
    'V',  'R',  0x64,  'n',  'a',  'm',  'e',  0x78, 
    0x1f,  'c',  'a',  'n',  '_',  'p',  'l',  'a', 
    'y',  '_',  'n',  'a',  't',  'i',  'v',  'e', 
    '_',  'm',  'e',  'd',  'i',  'a',  '_',  'd', 
    'u',  'r',  'i',  'n',  'g',  '_',  'v',  'r', 
    0x67,  't',  'e',  'x',  't',  'O',  'f',  'f', 
    0x63,  'O',  'f',  'f',  0x66,  't',  'e',  'x', 
    't',  'O',  'n',  0x62,  'O',  'n',  0x64,  't', 
    'y',  'p',  'e',  0x66,  's',  'w',  'i',  't', 
    'c',  'h',  0xa6,  0x6c,  'd',  'e',  'f',  'a', 
    'u',  'l',  't',  'V',  'a',  'l',  'u',  'e', 
    0xf4,  0x65,  'l',  'a',  'b',  'e',  'l',  0x6a, 
    'H',  'i',  'd',  'e',  ' ',  'c',  'l',  'o', 
    'c',  'k',  0x64,  'n',  'a',  'm',  'e',  0x6a, 
    'h',  'i',  'd',  'e',  '_',  'c',  'l',  'o', 
    'c',  'k',  0x67,  't',  'e',  'x',  't',  'O', 
    'f',  'f',  0x63,  'O',  'f',  'f',  0x66,  't', 
    'e',  'x',  't',  'O',  'n',  0x62,  'O',  'n', 
    0x64,  't',  'y',  'p',  'e',  0x66,  's',  'w', 
    'i',  't',  'c',  'h',  0xa6,  0x6c,  'd',  'e', 
    'f',  'a',  'u',  'l',  't',  'V',  'a',  'l', 
    'u',  'e',  0xf4,  0x65,  'l',  'a',  'b',  'e', 
    'l',  0x71,  'A',  'v',  'a',  'i',  'l',  'a', 
    'b',  'l',  'e',  ' ',  'i',  'n',  ' ',  'c', 
    'a',  'l',  'l',  0x64,  'n',  'a',  'm',  'e', 
    0x77,  'a',  'v',  'a',  'i',  'l',  'a',  'b', 
    'l',  'e',  '_',  'w',  'h',  'i',  'l',  'e', 
    '_',  'i',  'n',  '_',  'c',  'a',  'l',  'l', 
    0x67,  't',  'e',  'x',  't',  'O',  'f',  'f', 
    0x63,  'O',  'f',  'f',  0x66,  't',  'e',  'x', 
    't',  'O',  'n',  0x62,  'O',  'n',  0x64,  't', 
    'y',  'p',  'e',  0x66,  's',  'w',  'i',  't', 
    'c',  'h',  0xa6,  0x6c,  'd',  'e',  'f',  'a', 
    'u',  'l',  't',  'V',  'a',  'l',  'u',  'e', 
    0x18,  0xc8,  0x65,  'l',  'a',  'b',  'e',  'l', 
    0x6d,  'P',  'i',  'x',  'e',  'l',  ' ',  'd', 
    'e',  'n',  's',  'i',  't',  'y',  0x64,  'n', 
    'a',  'm',  'e',  0x63,  'd',  'p',  'i',  0x66, 
    's',  'u',  'f',  'f',  'i',  'x',  0x63,  'D', 
    'P',  'I',  0x68,  't',  'e',  'x',  't',  'T', 
    'y',  'p',  'e',  0x63,  'i',  'n',  't',  0x64, 
    't',  'y',  'p',  'e',  0x69,  't',  'e',  'x', 
    't',  'f',  'i',  'e',  'l',  'd',  0xa5,  0x6c, 
    'd',  'e',  'f',  'a',  'u',  'l',  't',  'V', 
    'a',  'l',  'u',  'e',  0x00,  0x65,  'l',  'a', 
    'b',  'e',  'l',  0x6a,  'R',  'e',  's',  'o', 
    'l',  'u',  't',  'i',  'o',  'n',  0x64,  'n', 
    'a',  'm',  'e',  0x6a,  'r',  'e',  's',  'o', 
    'l',  'u',  't',  'i',  'o',  'n',  0x64,  't', 
    'y',  'p',  'e',  0x68,  'c',  'o',  'm',  'b', 
    'o',  'b',  'o',  'x',  0x66,  'v',  'a',  'l', 
    'u',  'e',  's',  0xa3,  0x61,  '1',  0x67,  '8', 
    '0',  '0',  'x',  '4',  '8',  '0',  0x61,  '2', 
    0x68,  '1',  '2',  '8',  '0',  'x',  '7',  '2', 
    '0',  0x61,  '3',  0x69,  '1',  '9',  '2',  '0', 
    'x',  '1',  '0',  '8',  '0',  0xa5,  0x6c,  'd', 
    'e',  'f',  'a',  'u',  'l',  't',  'V',  'a', 
    'l',  'u',  'e',  0x00,  0x65,  'l',  'a',  'b', 
    'e',  'l',  0x6a,  'F',  'r',  'a',  'm',  'e', 
    ' ',  'r',  'a',  't',  'e',  0x64,  'n',  'a', 
    'm',  'e',  0x6a,  'f',  'r',  'a',  'm',  'e', 
    '_',  'r',  'a',  't',  'e',  0x64,  't',  'y', 
    'p',  'e',  0x68,  'c',  'o',  'm',  'b',  'o', 
    'b',  'o',  'x',  0x66,  'v',  'a',  'l',  'u', 
    'e',  's',  0xa2,  0x61,  '1',  0x66,  '3',  '0', 
    ' ',  'F',  'P',  'S',  0x61,  '2',  0x66,  '6', 
    '0',  ' ',  'F',  'P',  'S',  0xa5,  0x6c,  'd', 
    'e',  'f',  'a',  'u',  'l',  't',  'V',  'a', 
    'l',  'u',  'e',  0x00,  0x65,  'l',  'a',  'b', 
    'e',  'l',  0x6e,  'T',  'r',  'a',  'n',  's', 
    'p',  'o',  'r',  't',  ' ',  't',  'y',  'p', 
    'e',  0x64,  'n',  'a',  'm',  'e',  0x6e,  't', 
    'r',  'a',  'n',  's',  'p',  'o',  'r',  't', 
    '_',  't',  'y',  'p',  'e',  0x64,  't',  'y', 
    'p',  'e',  0x68,  'c',  'o',  'm',  'b',  'o', 
    'b',  'o',  'x',  0x66,  'v',  'a',  'l',  'u', 
    'e',  's',  0xa2,  0x67,  'n',  'e',  't',  'w', 
    'o',  'r',  'k',  0x67,  'N',  'e',  't',  'w', 
    'o',  'r',  'k',  0x63,  'u',  's',  'b',  0x63, 
    'U',  'S',  'B',  0xa9,  0x6f,  'c',  'o',  'n', 
    'd',  'i',  't',  'i',  'o',  'n',  'T',  'a', 
    'r',  'g',  'e',  't',  0x6e,  't',  'r',  'a', 
    'n',  's',  'p',  'o',  'r',  't',  '_',  't', 
    'y',  'p',  'e',  0x6e,  'c',  'o',  'n',  'd', 
    'i',  't',  'i',  'o',  'n',  'V',  'a',  'l', 
    'u',  'e',  0x67,  'n',  'e',  't',  'w',  'o', 
    'r',  'k',  0x6b,  'c',  'o',  'n',  'd',  'i', 
    't',  'i',  'o',  'n',  'a',  'l',  0xf5,  0x6c, 
    'd',  'e',  'f',  'a',  'u',  'l',  't',  'V', 
    'a',  'l',  'u',  'e',  0x69,  '1',  '2',  '7', 
    '.',  '0',  '.',  '0',  '.',  '1',  0x69,  'i', 
    'n',  'p',  'u',  't',  'M',  'a',  's',  'k', 
    0x71,  '0',  '0',  '0',  '.',  '0',  '0',  '0', 
    '.',  '0',  '0',  '0',  '.',  '0',  '0',  '0', 
    ';',  '_',  0x65,  'l',  'a',  'b',  'e',  'l', 
    0x6f,  'N',  'e',  't',  'w',  'o',  'r',  'k', 
    ' ',  'a',  'd',  'd',  'r',  'e',  's',  's', 
    0x64,  'n',  'a',  'm',  'e',  0x6f,  'n',  'e', 
    't',  'w',  'o',  'r',  'k',  '_',  'a',  'd', 
    'd',  'r',  'e',  's',  's',  0x68,  't',  'e', 
    'x',  't',  'T',  'y',  'p',  'e',  0x66,  's', 
    't',  'r',  'i',  'n',  'g',  0x64,  't',  'y', 
    'p',  'e',  0x69,  't',  'e',  'x',  't',  'f', 
    'i',  'e',  'l',  'd',  0xa9,  0x6f,  'c',  'o', 
    'n',  'd',  'i',  't',  'i',  'o',  'n',  'T', 
    'a',  'r',  'g',  'e',  't',  0x6e,  't',  'r', 
    'a',  'n',  's',  'p',  'o',  'r',  't',  '_', 
    't',  'y',  'p',  'e',  0x6e,  'c',  'o',  'n', 
    'd',  'i',  't',  'i',  'o',  'n',  'V',  'a', 
    'l',  'u',  'e',  0x67,  'n',  'e',  't',  'w', 
    'o',  'r',  'k',  0x6b,  'c',  'o',  'n',  'd', 
    'i',  't',  'i',  'o',  'n',  'a',  'l',  0xf5, 
    0x6c,  'd',  'e',  'f',  'a',  'u',  'l',  't', 
    'V',  'a',  'l',  'u',  'e',  0xf4,  0x65,  'l', 
    'a',  'b',  'e',  'l',  0x6b,  'W',  'i',  'F', 
    'i',  ' ',  'd',  'i',  'r',  'e',  'c',  't', 
    0x64,  'n',  'a',  'm',  'e',  0x6b,  'w',  'i', 
    'f',  'i',  '_',  'd',  'i',  'r',  'e',  'c', 
    't',  0x67,  't',  'e',  'x',  't',  'O',  'f', 
    'f',  0x63,  'O',  'f',  'f',  0x66,  't',  'e', 
    'x',  't',  'O',  'n',  0x62,  'O',  'n',  0x64, 
    't',  'y',  'p',  'e',  0x66,  's',  'w',  'i', 
    't',  'c',  'h',  0x65,  'l',  'a',  'b',  'e', 
    'l',  0x6c,  'A',  'n',  'd',  'r',  'o',  'i', 
    'd',  ' ',  'A',  'u',  't',  'o',  0x67,  's', 
    'e',  'c',  't',  'i',  'o',  'n',  0x6a,  'M', 
    'e',  'd',  'i',  'a',  ' ',  'a',  'p',  'p', 
    's',  0x64,  't',  'y',  'p',  'e',  0x65,  'i', 
    't',  'e',  'm',  's',  0x64,  'm',  'e',  'n', 
    'u',  0xa4,  0x65,  'c',  'o',  'l',  'o',  'r', 
    0x67,  '#',  '6',  '7',  '3',  'A',  'B',  '7', 
    0x65,  'i',  'm',  'a',  'g',  'e',  0x78,  0x23, 
    'q',  'r',  'c',  ':',  '/',  'A',  'n',  'd', 
    'r',  'o',  'i',  'd',  'A',  'u',  't',  'o', 
    '/',  's',  'o',  'c',  'i',  'a',  'l',  '-', 
    'a',  'n',  'd',  'r',  'o',  'i',  'd',  '.', 
    's',  'v',  'g',  0x66,  's',  'o',  'u',  'r', 
    'c',  'e',  0x78,  0x1c,  'q',  'r',  'c',  ':', 
    '/',  'A',  'n',  'd',  'r',  'o',  'i',  'd', 
    'A',  'u',  't',  'o',  '/',  'a',  'a',  'V', 
    'i',  'd',  'e',  'o',  '.',  'q',  'm',  'l', 
    0x64,  't',  'e',  'x',  't',  0x6c,  'A',  'n', 
    'd',  'r',  'o',  'i',  'd',  ' ',  'A',  'u', 
    't',  'o',  0x64,  'n',  'a',  'm',  'e',  0x6b, 
    'A',  'n',  'd',  'r',  'o',  'i',  'd',  'A', 
    'u',  't',  'o', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(AndroidAuto, AndroidAuto)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
