/****************************************************************************
** Meta object code from reading C++ file 'stat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tMix_2/stat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_statA_t {
    QByteArrayData data[9];
    char stringdata[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_statA_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_statA_t qt_meta_stringdata_statA = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 4),
QT_MOC_LITERAL(2, 11, 0),
QT_MOC_LITERAL(3, 12, 9),
QT_MOC_LITERAL(4, 22, 8),
QT_MOC_LITERAL(5, 31, 9),
QT_MOC_LITERAL(6, 41, 11),
QT_MOC_LITERAL(7, 53, 8),
QT_MOC_LITERAL(8, 62, 10)
    },
    "statA\0load\0\0load_firm\0load_org\0load_nakl\0"
    "load_active\0del_nakl\0make_files"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_statA[] = {

 // content:
       7,       // revision
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
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void statA::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        statA *_t = static_cast<statA *>(_o);
        switch (_id) {
        case 0: _t->load(); break;
        case 1: _t->load_firm(); break;
        case 2: _t->load_org(); break;
        case 3: _t->load_nakl(); break;
        case 4: _t->load_active(); break;
        case 5: _t->del_nakl(); break;
        case 6: _t->make_files(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject statA::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_statA.data,
      qt_meta_data_statA,  qt_static_metacall, 0, 0}
};


const QMetaObject *statA::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *statA::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_statA.stringdata))
        return static_cast<void*>(const_cast< statA*>(this));
    return QWidget::qt_metacast(_clname);
}

int statA::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
