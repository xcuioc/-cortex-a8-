/****************************************************************************
** Meta object code from reading C++ file 'EditCard.h'
**
** Created: Mon Sep 2 16:24:02 2019
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EditCard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditCard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditCard[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      17,    9,    9,    9, 0x08,
      43,    9,    9,    9, 0x08,
      70,    9,    9,    9, 0x08,
      92,    9,    9,    9, 0x08,
     121,  115,    9,    9, 0x08,
     157,  142,    9,    9, 0x08,
     193,  186,    9,    9, 0x08,
     234,  223,    9,    9, 0x08,
     264,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditCard[] = {
    "EditCard\0\0load()\0on_btn_dbselect_clicked()\0"
    "on_btn_dbrefresh_clicked()\0"
    "on_pbn_back_clicked()\0on_pbn_start_clicked()\0"
    "decID\0onNewCard(qlonglong)\0cmdType,result\0"
    "on_search_error(int,QString)\0cardid\0"
    "on_search_success(QByteArray)\0block,data\0"
    "on_ted_showID(int,QByteArray)\0"
    "on_pbn_update_clicked()\0"
};

const QMetaObject EditCard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EditCard,
      qt_meta_data_EditCard, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditCard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditCard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditCard))
        return static_cast<void*>(const_cast< EditCard*>(this));
    return QWidget::qt_metacast(_clname);
}

int EditCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: load(); break;
        case 1: on_btn_dbselect_clicked(); break;
        case 2: on_btn_dbrefresh_clicked(); break;
        case 3: on_pbn_back_clicked(); break;
        case 4: on_pbn_start_clicked(); break;
        case 5: onNewCard((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 6: on_search_error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: on_search_success((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 8: on_ted_showID((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 9: on_pbn_update_clicked(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
