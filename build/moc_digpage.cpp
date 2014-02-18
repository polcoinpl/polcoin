/****************************************************************************
** Meta object code from reading C++ file 'digpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/digpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'digpage.h' doesn't include <QObject>."
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
static const uint qt_meta_data_DigPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,   23,   23,   23, 0x05,
      24,   44,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   23,   23,   23, 0x0a,
      61,   94,   23,   23, 0x0a,
     137,  163,   23,   23, 0x0a,
     185,  206,   23,   23, 0x2a,
     223,   23,   23,   23, 0x08,
     240,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DigPage[] = {
    "DigPage\0stopExecutor()\0\0cmdRequest(QString)\0"
    "command\0doDig1()\0setBalance(qint64,qint64,qint64)\0"
    "balance,unconfirmedBalance,immatureBalance\0"
    "message(int,QString,bool)\0"
    "category,message,html\0message(int,QString)\0"
    "category,message\0updateExecutor()\0"
    "updateDisplayUnit()\0"
};

void DigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DigPage *_t = static_cast<DigPage *>(_o);
        switch (_id) {
        case 0: _t->stopExecutor(); break;
        case 1: _t->cmdRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->doDig1(); break;
        case 3: _t->setBalance((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 4: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->updateExecutor(); break;
        case 7: _t->updateDisplayUnit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DigPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DigPage::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DigPage,
      qt_meta_data_DigPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DigPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DigPage))
        return static_cast<void*>(const_cast< DigPage*>(this));
    return QDialog::qt_metacast(_clname);
}

int DigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DigPage::stopExecutor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DigPage::cmdRequest(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
