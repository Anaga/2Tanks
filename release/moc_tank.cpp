/****************************************************************************
** Meta object code from reading C++ file 'tank.h'
**
** Created: Thu 20. Sep 22:48:32 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tank.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tank.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tank[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    6,    5,    5, 0x05,
      36,    6,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   59,    5,    5, 0x0a,
      95,   88,    5,    5, 0x0a,
     121,  116,    5,    5, 0x0a,
     145,  140,    5,    5, 0x0a,
     170,   59,    5,    5, 0x0a,
     194,   88,    5,    5, 0x0a,
     215,  116,    5,    5, 0x0a,
     234,  140,    5,    5, 0x0a,
     259,  140,    5,    5, 0x0a,
     285,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tank[] = {
    "Tank\0\0height\0t1_HeightChange(float)\0"
    "t2_HeightChange(float)\0flow\0"
    "set_T1_InputFlow(float)\0volume\0"
    "set_T1_Volume(float)\0area\0set_T1_Area(float)\0"
    "open\0set_T1_OutputValve(bool)\0"
    "set_T2_InputFlow(float)\0set_T2_Volume(float)\0"
    "set_T2_Area(float)\0set_T2_OutputValve(bool)\0"
    "set_T12_OutputValve(bool)\0tik()\0"
};

const QMetaObject Tank::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tank,
      qt_meta_data_Tank, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tank::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tank::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tank::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tank))
        return static_cast<void*>(const_cast< Tank*>(this));
    return QObject::qt_metacast(_clname);
}

int Tank::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: t1_HeightChange((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: t2_HeightChange((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: set_T1_InputFlow((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: set_T1_Volume((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: set_T1_Area((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: set_T1_OutputValve((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: set_T2_InputFlow((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: set_T2_Volume((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: set_T2_Area((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: set_T2_OutputValve((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: set_T12_OutputValve((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: tik(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Tank::t1_HeightChange(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tank::t2_HeightChange(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
