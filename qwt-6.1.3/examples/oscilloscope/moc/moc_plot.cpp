/****************************************************************************
** Meta object code from reading C++ file 'Plot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../oscilloscope/Plot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Plot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Plot_t {
    QByteArrayData data[10];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Plot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Plot_t qt_meta_stringdata_Plot = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Plot"
QT_MOC_LITERAL(1, 5, 17), // "setIntervalLength"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "updateItemLegend"
QT_MOC_LITERAL(4, 41, 17), // "getplotScreenShot"
QT_MOC_LITERAL(5, 59, 19), // "getimagefromqbuffer"
QT_MOC_LITERAL(6, 79, 8), // "QBuffer*"
QT_MOC_LITERAL(7, 88, 13), // "getLevelWheel"
QT_MOC_LITERAL(8, 102, 9), // "WheelBox*"
QT_MOC_LITERAL(9, 112, 14) // "scrollLeftAxis"

    },
    "Plot\0setIntervalLength\0\0updateItemLegend\0"
    "getplotScreenShot\0getimagefromqbuffer\0"
    "QBuffer*\0getLevelWheel\0WheelBox*\0"
    "scrollLeftAxis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Plot[] = {

 // content:
       7,       // revision
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
       3,    1,   47,    2, 0x0a /* Public */,
       4,    2,   50,    2, 0x0a /* Public */,
       5,    1,   55,    2, 0x0a /* Public */,
       7,    0,   58,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    0x80000000 | 6, QMetaType::Int,    2,
    0x80000000 | 8,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void Plot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Plot *_t = static_cast<Plot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setIntervalLength((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->updateItemLegend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->getplotScreenShot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: { QBuffer* _r = _t->getimagefromqbuffer((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBuffer**>(_a[0]) = std::move(_r); }  break;
        case 4: { WheelBox* _r = _t->getLevelWheel();
            if (_a[0]) *reinterpret_cast< WheelBox**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->scrollLeftAxis((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Plot::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_Plot.data,
      qt_meta_data_Plot,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Plot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Plot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Plot.stringdata0))
        return static_cast<void*>(const_cast< Plot*>(this));
    return QwtPlot::qt_metacast(_clname);
}

int Plot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
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
