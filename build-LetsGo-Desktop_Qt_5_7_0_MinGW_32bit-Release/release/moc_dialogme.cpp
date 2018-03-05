/****************************************************************************
** Meta object code from reading C++ file 'dialogme.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LetsGo/dialogme.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogme.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dialogme_t {
    QByteArrayData data[14];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialogme_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialogme_t qt_meta_stringdata_Dialogme = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Dialogme"
QT_MOC_LITERAL(1, 9, 27), // "on_lineEdit_editingFinished"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 62, 29), // "on_lineEdit_2_editingFinished"
QT_MOC_LITERAL(5, 92, 35), // "on_lineEdit_4_cursorPositionC..."
QT_MOC_LITERAL(6, 128, 4), // "arg1"
QT_MOC_LITERAL(7, 133, 4), // "arg2"
QT_MOC_LITERAL(8, 138, 29), // "on_lineEdit_3_editingFinished"
QT_MOC_LITERAL(9, 168, 29), // "on_lineEdit_4_editingFinished"
QT_MOC_LITERAL(10, 198, 29), // "on_lineEdit_5_editingFinished"
QT_MOC_LITERAL(11, 228, 29), // "on_lineEdit_6_editingFinished"
QT_MOC_LITERAL(12, 258, 29), // "on_lineEdit_7_editingFinished"
QT_MOC_LITERAL(13, 288, 29) // "on_lineEdit_8_editingFinished"

    },
    "Dialogme\0on_lineEdit_editingFinished\0"
    "\0on_pushButton_2_clicked\0"
    "on_lineEdit_2_editingFinished\0"
    "on_lineEdit_4_cursorPositionChanged\0"
    "arg1\0arg2\0on_lineEdit_3_editingFinished\0"
    "on_lineEdit_4_editingFinished\0"
    "on_lineEdit_5_editingFinished\0"
    "on_lineEdit_6_editingFinished\0"
    "on_lineEdit_7_editingFinished\0"
    "on_lineEdit_8_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialogme[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    2,   67,    2, 0x08 /* Private */,
       8,    0,   72,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialogme::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialogme *_t = static_cast<Dialogme *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEdit_editingFinished(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_lineEdit_2_editingFinished(); break;
        case 3: _t->on_lineEdit_4_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_lineEdit_3_editingFinished(); break;
        case 5: _t->on_lineEdit_4_editingFinished(); break;
        case 6: _t->on_lineEdit_5_editingFinished(); break;
        case 7: _t->on_lineEdit_6_editingFinished(); break;
        case 8: _t->on_lineEdit_7_editingFinished(); break;
        case 9: _t->on_lineEdit_8_editingFinished(); break;
        default: ;
        }
    }
}

const QMetaObject Dialogme::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialogme.data,
      qt_meta_data_Dialogme,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialogme::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialogme::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialogme.stringdata0))
        return static_cast<void*>(const_cast< Dialogme*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialogme::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
