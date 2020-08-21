/****************************************************************************
** Meta object code from reading C++ file 'facerecognition.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FaceRecognition/facerecognition.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'facerecognition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FaceRecognition_t {
    QByteArrayData data[18];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FaceRecognition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FaceRecognition_t qt_meta_stringdata_FaceRecognition = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FaceRecognition"
QT_MOC_LITERAL(1, 16, 11), // "setListView"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "stringList"
QT_MOC_LITERAL(4, 40, 19), // "QStandardItemModel*"
QT_MOC_LITERAL(5, 60, 17), // "standardItemModel"
QT_MOC_LITERAL(6, 78, 10), // "QListView*"
QT_MOC_LITERAL(7, 89, 8), // "listView"
QT_MOC_LITERAL(8, 98, 11), // "itemClicked"
QT_MOC_LITERAL(9, 110, 5), // "index"
QT_MOC_LITERAL(10, 116, 13), // "itemActivated"
QT_MOC_LITERAL(11, 130, 16), // "setImageShowSlot"
QT_MOC_LITERAL(12, 147, 16), // "on_start_clicked"
QT_MOC_LITERAL(13, 164, 16), // "on_train_clicked"
QT_MOC_LITERAL(14, 181, 22), // "on_recognition_clicked"
QT_MOC_LITERAL(15, 204, 20), // "on_addPeople_clicked"
QT_MOC_LITERAL(16, 225, 26), // "on_openRecognition_clicked"
QT_MOC_LITERAL(17, 252, 20) // "on_takePhoto_clicked"

    },
    "FaceRecognition\0setListView\0\0stringList\0"
    "QStandardItemModel*\0standardItemModel\0"
    "QListView*\0listView\0itemClicked\0index\0"
    "itemActivated\0setImageShowSlot\0"
    "on_start_clicked\0on_train_clicked\0"
    "on_recognition_clicked\0on_addPeople_clicked\0"
    "on_openRecognition_clicked\0"
    "on_takePhoto_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FaceRecognition[] = {

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
       1,    3,   64,    2, 0x0a /* Public */,
       8,    1,   71,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x0a /* Public */,
      11,    0,   77,    2, 0x0a /* Public */,
      12,    0,   78,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x08 /* Private */,
      14,    0,   80,    2, 0x08 /* Private */,
      15,    0,   81,    2, 0x08 /* Private */,
      16,    0,   82,    2, 0x08 /* Private */,
      17,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void, QMetaType::QModelIndex,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FaceRecognition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FaceRecognition *_t = static_cast<FaceRecognition *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setListView((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QStandardItemModel*(*)>(_a[2])),(*reinterpret_cast< QListView*(*)>(_a[3]))); break;
        case 1: _t->itemClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->itemActivated((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->setImageShowSlot(); break;
        case 4: _t->on_start_clicked(); break;
        case 5: _t->on_train_clicked(); break;
        case 6: _t->on_recognition_clicked(); break;
        case 7: _t->on_addPeople_clicked(); break;
        case 8: _t->on_openRecognition_clicked(); break;
        case 9: _t->on_takePhoto_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QListView* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject FaceRecognition::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FaceRecognition.data,
      qt_meta_data_FaceRecognition,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FaceRecognition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FaceRecognition::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FaceRecognition.stringdata0))
        return static_cast<void*>(const_cast< FaceRecognition*>(this));
    return QWidget::qt_metacast(_clname);
}

int FaceRecognition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
