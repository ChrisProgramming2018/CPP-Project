/****************************************************************************
** Meta object code from reading C++ file 'Gui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/Gui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyDlg_t {
    QByteArrayData data[10];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyDlg_t qt_meta_stringdata_MyDlg = {
    {
QT_MOC_LITERAL(0, 0, 5), // "MyDlg"
QT_MOC_LITERAL(1, 6, 22), // "onPredictButtonClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 24), // "onLoadModelButtonClicked"
QT_MOC_LITERAL(4, 55, 24), // "onFirstWordButtonClicked"
QT_MOC_LITERAL(5, 80, 22), // "onSecWordBottonClicked"
QT_MOC_LITERAL(6, 103, 24), // "onThirdWordBottonClicked"
QT_MOC_LITERAL(7, 128, 25), // "onFourthWordBottonClicked"
QT_MOC_LITERAL(8, 154, 19), // "onExitButtonClicked"
QT_MOC_LITERAL(9, 174, 8) // "showTime"

    },
    "MyDlg\0onPredictButtonClicked\0\0"
    "onLoadModelButtonClicked\0"
    "onFirstWordButtonClicked\0"
    "onSecWordBottonClicked\0onThirdWordBottonClicked\0"
    "onFourthWordBottonClicked\0onExitButtonClicked\0"
    "showTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void MyDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyDlg *_t = static_cast<MyDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onPredictButtonClicked(); break;
        case 1: _t->onLoadModelButtonClicked(); break;
        case 2: _t->onFirstWordButtonClicked(); break;
        case 3: _t->onSecWordBottonClicked(); break;
        case 4: _t->onThirdWordBottonClicked(); break;
        case 5: _t->onFourthWordBottonClicked(); break;
        case 6: _t->onExitButtonClicked(); break;
        case 7: _t->showTime(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MyDlg::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyDlg.data,
      qt_meta_data_MyDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyDlg.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MyDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
