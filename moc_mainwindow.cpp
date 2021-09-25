/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[25];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "emit_gps"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 16), // "QGeoPositionInfo"
QT_MOC_LITERAL(4, 38, 4), // "info"
QT_MOC_LITERAL(5, 43, 14), // "emit_gps_error"
QT_MOC_LITERAL(6, 58, 29), // "QGeoPositionInfoSource::Error"
QT_MOC_LITERAL(7, 88, 1), // "e"
QT_MOC_LITERAL(8, 90, 8), // "show_msg"
QT_MOC_LITERAL(9, 99, 4), // "_msg"
QT_MOC_LITERAL(10, 104, 11), // "go_to_scene"
QT_MOC_LITERAL(11, 116, 1), // "i"
QT_MOC_LITERAL(12, 118, 13), // "back_to_clock"
QT_MOC_LITERAL(13, 132, 8), // "turn_rds"
QT_MOC_LITERAL(14, 141, 7), // "turn_fm"
QT_MOC_LITERAL(15, 149, 8), // "fm_error"
QT_MOC_LITERAL(16, 158, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(17, 181, 5), // "error"
QT_MOC_LITERAL(18, 187, 9), // "rds_error"
QT_MOC_LITERAL(19, 197, 30), // "QLocalSocket::LocalSocketError"
QT_MOC_LITERAL(20, 228, 11), // "socketError"
QT_MOC_LITERAL(21, 240, 7), // "rds_msg"
QT_MOC_LITERAL(22, 248, 3), // "msg"
QT_MOC_LITERAL(23, 252, 8), // "look_gps"
QT_MOC_LITERAL(24, 261, 9) // "gps_error"

    },
    "MainWindow\0emit_gps\0\0QGeoPositionInfo\0"
    "info\0emit_gps_error\0QGeoPositionInfoSource::Error\0"
    "e\0show_msg\0_msg\0go_to_scene\0i\0"
    "back_to_clock\0turn_rds\0turn_fm\0fm_error\0"
    "QProcess::ProcessError\0error\0rds_error\0"
    "QLocalSocket::LocalSocketError\0"
    "socketError\0rds_msg\0msg\0look_gps\0"
    "gps_error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   80,    2, 0x0a /* Public */,
      10,    1,   83,    2, 0x0a /* Public */,
      12,    0,   86,    2, 0x0a /* Public */,
      13,    0,   87,    2, 0x0a /* Public */,
      14,    0,   88,    2, 0x0a /* Public */,
      15,    1,   89,    2, 0x0a /* Public */,
      18,    1,   92,    2, 0x0a /* Public */,
      21,    1,   95,    2, 0x0a /* Public */,
      23,    1,   98,    2, 0x0a /* Public */,
      24,    1,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emit_gps((*reinterpret_cast< const QGeoPositionInfo(*)>(_a[1]))); break;
        case 1: _t->emit_gps_error((*reinterpret_cast< QGeoPositionInfoSource::Error(*)>(_a[1]))); break;
        case 2: _t->show_msg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->go_to_scene((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->back_to_clock(); break;
        case 5: _t->turn_rds(); break;
        case 6: _t->turn_fm(); break;
        case 7: _t->fm_error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 8: _t->rds_error((*reinterpret_cast< QLocalSocket::LocalSocketError(*)>(_a[1]))); break;
        case 9: _t->rds_msg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->look_gps((*reinterpret_cast< const QGeoPositionInfo(*)>(_a[1]))); break;
        case 11: _t->gps_error((*reinterpret_cast< QGeoPositionInfoSource::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoPositionInfo >(); break;
            }
            break;
        case 10:
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
            using _t = void (MainWindow::*)(const QGeoPositionInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::emit_gps)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QGeoPositionInfoSource::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::emit_gps_error)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::emit_gps(const QGeoPositionInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::emit_gps_error(QGeoPositionInfoSource::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
