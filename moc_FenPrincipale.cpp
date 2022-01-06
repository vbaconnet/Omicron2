/****************************************************************************
** Meta object code from reading C++ file 'FenPrincipale.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Omicron/FenPrincipale.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FenPrincipale.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FenPrincipale_t {
    QByteArrayData data[21];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FenPrincipale_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FenPrincipale_t qt_meta_stringdata_FenPrincipale = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FenPrincipale"
QT_MOC_LITERAL(1, 14, 17), // "creerNouvelOnglet"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "pagePrecedente"
QT_MOC_LITERAL(4, 48, 12), // "pageSuivante"
QT_MOC_LITERAL(5, 61, 11), // "pageAccueil"
QT_MOC_LITERAL(6, 73, 10), // "rafraichir"
QT_MOC_LITERAL(7, 84, 17), // "arreterChargement"
QT_MOC_LITERAL(8, 102, 14), // "faireRecherche"
QT_MOC_LITERAL(9, 117, 12), // "fermerOnglet"
QT_MOC_LITERAL(10, 130, 5), // "index"
QT_MOC_LITERAL(11, 136, 13), // "changerOnglet"
QT_MOC_LITERAL(12, 150, 12), // "changerTitre"
QT_MOC_LITERAL(13, 163, 5), // "titre"
QT_MOC_LITERAL(14, 169, 10), // "changerUrl"
QT_MOC_LITERAL(15, 180, 3), // "url"
QT_MOC_LITERAL(16, 184, 19), // "commencerChargement"
QT_MOC_LITERAL(17, 204, 7), // "charger"
QT_MOC_LITERAL(18, 212, 6), // "statut"
QT_MOC_LITERAL(19, 219, 13), // "finChargement"
QT_MOC_LITERAL(20, 233, 2) // "ok"

    },
    "FenPrincipale\0creerNouvelOnglet\0\0"
    "pagePrecedente\0pageSuivante\0pageAccueil\0"
    "rafraichir\0arreterChargement\0"
    "faireRecherche\0fermerOnglet\0index\0"
    "changerOnglet\0changerTitre\0titre\0"
    "changerUrl\0url\0commencerChargement\0"
    "charger\0statut\0finChargement\0ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FenPrincipale[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    1,   91,    2, 0x08 /* Private */,
      11,    1,   94,    2, 0x08 /* Private */,
      12,    1,   97,    2, 0x08 /* Private */,
      14,    1,  100,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,
      17,    1,  104,    2, 0x08 /* Private */,
      19,    1,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QUrl,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Bool,   20,

       0        // eod
};

void FenPrincipale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FenPrincipale *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->creerNouvelOnglet(); break;
        case 1: _t->pagePrecedente(); break;
        case 2: _t->pageSuivante(); break;
        case 3: _t->pageAccueil(); break;
        case 4: _t->rafraichir(); break;
        case 5: _t->arreterChargement(); break;
        case 6: _t->faireRecherche(); break;
        case 7: _t->fermerOnglet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->changerOnglet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->changerTitre((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->changerUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 11: _t->commencerChargement(); break;
        case 12: _t->charger((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->finChargement((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FenPrincipale::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_FenPrincipale.data,
    qt_meta_data_FenPrincipale,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FenPrincipale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FenPrincipale::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FenPrincipale.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FenPrincipale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
