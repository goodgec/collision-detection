/****************************************************************************
** Meta object code from reading C++ file 'collisionsystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SpaceCollisionSystem/collisionsystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collisionsystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CollisionSystem_t {
    QByteArrayData data[21];
    char stringdata[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CollisionSystem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CollisionSystem_t qt_meta_stringdata_CollisionSystem = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 5),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 5),
QT_MOC_LITERAL(4, 29, 9),
QT_MOC_LITERAL(5, 39, 9),
QT_MOC_LITERAL(6, 49, 17),
QT_MOC_LITERAL(7, 67, 11),
QT_MOC_LITERAL(8, 79, 12),
QT_MOC_LITERAL(9, 92, 14),
QT_MOC_LITERAL(10, 107, 18),
QT_MOC_LITERAL(11, 126, 16),
QT_MOC_LITERAL(12, 143, 1),
QT_MOC_LITERAL(13, 145, 18),
QT_MOC_LITERAL(14, 164, 1),
QT_MOC_LITERAL(15, 166, 15),
QT_MOC_LITERAL(16, 182, 15),
QT_MOC_LITERAL(17, 198, 16),
QT_MOC_LITERAL(18, 215, 23),
QT_MOC_LITERAL(19, 239, 1),
QT_MOC_LITERAL(20, 241, 8)
    },
    "CollisionSystem\0begin\0\0start\0terminate\0"
    "printInfo\0changePausedState\0resetCamera\0"
    "generateSeed\0setAlgFinished\0"
    "setDisplayFinished\0setLookaheadTime\0"
    "d\0setTargetFramerate\0n\0setMinRadiusMax\0"
    "setMaxRadiusMin\0setTimestepLimit\0"
    "setTimestepLimitEnabled\0b\0setSpace\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CollisionSystem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    0,   95,    2, 0x0a,
       4,    0,   96,    2, 0x0a,
       5,    0,   97,    2, 0x0a,
       6,    0,   98,    2, 0x0a,
       7,    0,   99,    2, 0x0a,
       8,    0,  100,    2, 0x0a,
       9,    0,  101,    2, 0x0a,
      10,    0,  102,    2, 0x0a,
      11,    1,  103,    2, 0x0a,
      13,    1,  106,    2, 0x0a,
      15,    1,  109,    2, 0x0a,
      16,    1,  112,    2, 0x0a,
      17,    1,  115,    2, 0x0a,
      18,    1,  118,    2, 0x0a,
      20,    1,  121,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void CollisionSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CollisionSystem *_t = static_cast<CollisionSystem *>(_o);
        switch (_id) {
        case 0: _t->begin(); break;
        case 1: _t->start(); break;
        case 2: _t->terminate(); break;
        case 3: _t->printInfo(); break;
        case 4: _t->changePausedState(); break;
        case 5: _t->resetCamera(); break;
        case 6: _t->generateSeed(); break;
        case 7: _t->setAlgFinished(); break;
        case 8: _t->setDisplayFinished(); break;
        case 9: _t->setLookaheadTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setTargetFramerate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setMinRadiusMax((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->setMaxRadiusMin((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->setTimestepLimit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setTimestepLimitEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setSpace((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CollisionSystem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CollisionSystem::begin)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CollisionSystem::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CollisionSystem.data,
      qt_meta_data_CollisionSystem,  qt_static_metacall, 0, 0}
};


const QMetaObject *CollisionSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CollisionSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CollisionSystem.stringdata))
        return static_cast<void*>(const_cast< CollisionSystem*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CollisionSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void CollisionSystem::begin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
