/****************************************************************************
** Meta object code from reading C++ file 'overviewpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/overviewpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HashExecutor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   32,   49,   49, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   67,   49,   49, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HashExecutor[] = {
    "HashExecutor\0reply(int,QString)\0"
    "category,command\0\0request(QString)\0"
    "command\0"
};

void HashExecutor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HashExecutor *_t = static_cast<HashExecutor *>(_o);
        switch (_id) {
        case 0: _t->reply((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->request((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HashExecutor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HashExecutor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HashExecutor,
      qt_meta_data_HashExecutor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HashExecutor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HashExecutor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HashExecutor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HashExecutor))
        return static_cast<void*>(const_cast< HashExecutor*>(this));
    return QObject::qt_metacast(_clname);
}

int HashExecutor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void HashExecutor::reply(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_OverviewPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   45,   51,   51, 0x05,
      52,   51,   51,   51, 0x05,
      67,   87,   51,   51, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,  128,   51,   51, 0x0a,
     171,   51,   51,   51, 0x0a,
     179,  205,   51,   51, 0x0a,
     227,  248,   51,   51, 0x2a,
     265,   51,   51,   51, 0x08,
     285,   45,   51,   51, 0x08,
     323,  345,   51,   51, 0x08,
     354,   51,   51,   51, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OverviewPage[] = {
    "OverviewPage\0transactionClicked(QModelIndex)\0"
    "index\0\0stopExecutor()\0cmdRequest(QString)\0"
    "command\0setBalance(qint64,qint64,qint64)\0"
    "balance,unconfirmedBalance,immatureBalance\0"
    "doDig()\0message(int,QString,bool)\0"
    "category,message,html\0message(int,QString)\0"
    "category,message\0updateDisplayUnit()\0"
    "handleTransactionClicked(QModelIndex)\0"
    "updateAlerts(QString)\0warnings\0"
    "updateExecutor()\0"
};

void OverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OverviewPage *_t = static_cast<OverviewPage *>(_o);
        switch (_id) {
        case 0: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->stopExecutor(); break;
        case 2: _t->cmdRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setBalance((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 4: _t->doDig(); break;
        case 5: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->updateDisplayUnit(); break;
        case 8: _t->handleTransactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->updateAlerts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->updateExecutor(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OverviewPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OverviewPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OverviewPage,
      qt_meta_data_OverviewPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OverviewPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewPage))
        return static_cast<void*>(const_cast< OverviewPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int OverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OverviewPage::transactionClicked(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OverviewPage::stopExecutor()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void OverviewPage::cmdRequest(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
