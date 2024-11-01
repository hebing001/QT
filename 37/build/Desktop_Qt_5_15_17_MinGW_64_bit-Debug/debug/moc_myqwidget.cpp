/****************************************************************************
** Meta object code from reading C++ file 'myqwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../myqwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myqwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_myQWidget_t {
    QByteArrayData data[10];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myQWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myQWidget_t qt_meta_stringdata_myQWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "myQWidget"
QT_MOC_LITERAL(1, 10, 18), // "on_btnOpen_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "on_btnSave_myclicked"
QT_MOC_LITERAL(4, 51, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(5, 70, 19), // "on_btnClose_clicked"
QT_MOC_LITERAL(6, 90, 21), // "onCurrentIndexChanged"
QT_MOC_LITERAL(7, 112, 5), // "index"
QT_MOC_LITERAL(8, 118, 33), // "on_textEdit_cursorPositionCha..."
QT_MOC_LITERAL(9, 152, 22) // "on_myQWidget_destroyed"

    },
    "myQWidget\0on_btnOpen_clicked\0\0"
    "on_btnSave_myclicked\0on_btnSave_clicked\0"
    "on_btnClose_clicked\0onCurrentIndexChanged\0"
    "index\0on_textEdit_cursorPositionChanged\0"
    "on_myQWidget_destroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myQWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void myQWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myQWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnOpen_clicked(); break;
        case 1: _t->on_btnSave_myclicked(); break;
        case 2: _t->on_btnSave_clicked(); break;
        case 3: _t->on_btnClose_clicked(); break;
        case 4: _t->onCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_textEdit_cursorPositionChanged(); break;
        case 6: _t->on_myQWidget_destroyed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject myQWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_myQWidget.data,
    qt_meta_data_myQWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *myQWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myQWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myQWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int myQWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
