/****************************************************************************
** Meta object code from reading C++ file 'qpplot_gui.h'
**
** Created: Thu 23. Jun 17:50:30 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appli/qpplot_gui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpplot_gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPplot_gui[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      40,   11,   11,   11, 0x0a,
      69,   11,   11,   11, 0x0a,
      97,   11,   11,   11, 0x0a,
     126,   11,   11,   11, 0x0a,
     155,   11,   11,   11, 0x0a,
     186,  184,   11,   11, 0x0a,
     246,   11,   11,   11, 0x2a,
     284,  184,   11,   11, 0x0a,
     344,   11,   11,   11, 0x2a,
     387,  382,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QPplot_gui[] = {
    "QPplot_gui\0\0update_var1_low_clip(float)\0"
    "update_var1_high_clip(float)\0"
    "update_var2_low_clip(float)\0"
    "update_var2_high_clip(float)\0"
    "reset_var1_clipping_values()\0"
    "reset_var2_clipping_values()\0,\0"
    "get_var1_data_from(GsTLGridProperty*,const GsTLGridRegion*)\0"
    "get_var1_data_from(GsTLGridProperty*)\0"
    "get_var2_data_from(GsTLGridProperty*,const GsTLGridRegion*)\0"
    "get_var2_data_from(GsTLGridProperty*)\0"
    "type\0set_analysis_type(QString)\0"
};

const QMetaObject QPplot_gui::staticMetaObject = {
    { &Data_analysis_gui::staticMetaObject, qt_meta_stringdata_QPplot_gui,
      qt_meta_data_QPplot_gui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPplot_gui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPplot_gui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPplot_gui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPplot_gui))
        return static_cast<void*>(const_cast< QPplot_gui*>(this));
    return Data_analysis_gui::qt_metacast(_clname);
}

int QPplot_gui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Data_analysis_gui::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update_var1_low_clip((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: update_var1_high_clip((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: update_var2_low_clip((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: update_var2_high_clip((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: reset_var1_clipping_values(); break;
        case 5: reset_var2_clipping_values(); break;
        case 6: get_var1_data_from((*reinterpret_cast< GsTLGridProperty*(*)>(_a[1])),(*reinterpret_cast< const GsTLGridRegion*(*)>(_a[2]))); break;
        case 7: get_var1_data_from((*reinterpret_cast< GsTLGridProperty*(*)>(_a[1]))); break;
        case 8: get_var2_data_from((*reinterpret_cast< GsTLGridProperty*(*)>(_a[1])),(*reinterpret_cast< const GsTLGridRegion*(*)>(_a[2]))); break;
        case 9: get_var2_data_from((*reinterpret_cast< GsTLGridProperty*(*)>(_a[1]))); break;
        case 10: set_analysis_type((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
