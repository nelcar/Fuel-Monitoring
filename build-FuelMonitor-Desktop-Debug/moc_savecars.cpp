/****************************************************************************
** Meta object code from reading C++ file 'savecars.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FuelMonitor/savecars.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savecars.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_savecars_t {
    QByteArrayData data[15];
    char stringdata[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_savecars_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_savecars_t qt_meta_stringdata_savecars = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 23),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 23),
QT_MOC_LITERAL(4, 58, 24),
QT_MOC_LITERAL(5, 83, 23),
QT_MOC_LITERAL(6, 107, 23),
QT_MOC_LITERAL(7, 131, 21),
QT_MOC_LITERAL(8, 153, 25),
QT_MOC_LITERAL(9, 179, 21),
QT_MOC_LITERAL(10, 201, 25),
QT_MOC_LITERAL(11, 227, 18),
QT_MOC_LITERAL(12, 246, 23),
QT_MOC_LITERAL(13, 270, 23),
QT_MOC_LITERAL(14, 294, 23)
    },
    "savecars\0on_pushButton_4_clicked\0\0"
    "on_pushButton_6_clicked\0"
    "on_pushButton_10_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked\0on_addNewRegister_clicked\0"
    "on_SCaddMiles_clicked\0on_MselectThisCar_clicked\0"
    "on_Mmodify_clicked\0on_pushButton_7_clicked\0"
    "on_pushButton_9_clicked\0on_pushButton_8_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_savecars[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08,
       3,    0,   80,    2, 0x08,
       4,    0,   81,    2, 0x08,
       5,    0,   82,    2, 0x08,
       6,    0,   83,    2, 0x08,
       7,    0,   84,    2, 0x08,
       8,    0,   85,    2, 0x08,
       9,    0,   86,    2, 0x08,
      10,    0,   87,    2, 0x08,
      11,    0,   88,    2, 0x08,
      12,    0,   89,    2, 0x08,
      13,    0,   90,    2, 0x08,
      14,    0,   91,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void savecars::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        savecars *_t = static_cast<savecars *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_4_clicked(); break;
        case 2: _t->on_pushButton_10_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_addNewRegister_clicked(); break;
        case 8: _t->on_MselectThisCar_clicked(); break;
        case 9: _t->on_Mmodify_clicked(); break;
        case 10: _t->on_pushButton_7_clicked(); break;
        case 11: _t->on_pushButton_9_clicked(); break;
        case 12: _t->on_pushButton_8_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject savecars::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_savecars.data,
      qt_meta_data_savecars,  qt_static_metacall, 0, 0}
};


const QMetaObject *savecars::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *savecars::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_savecars.stringdata))
        return static_cast<void*>(const_cast< savecars*>(this));
    return QDialog::qt_metacast(_clname);
}

int savecars::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
