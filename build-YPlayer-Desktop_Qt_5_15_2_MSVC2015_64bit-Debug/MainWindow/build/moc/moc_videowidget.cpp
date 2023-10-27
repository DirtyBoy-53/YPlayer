/****************************************************************************
** Meta object code from reading C++ file 'videowidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../MainWindow/src/ui/videowidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videowidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoWidget_t {
    QByteArrayData data[20];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoWidget_t qt_meta_stringdata_VideoWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VideoWidget"
QT_MOC_LITERAL(1, 12, 4), // "open"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 6), // "Media&"
QT_MOC_LITERAL(4, 25, 5), // "media"
QT_MOC_LITERAL(5, 31, 5), // "close"
QT_MOC_LITERAL(6, 37, 5), // "start"
QT_MOC_LITERAL(7, 43, 4), // "stop"
QT_MOC_LITERAL(8, 48, 5), // "pause"
QT_MOC_LITERAL(9, 54, 6), // "resume"
QT_MOC_LITERAL(10, 61, 7), // "restart"
QT_MOC_LITERAL(11, 69, 5), // "retry"
QT_MOC_LITERAL(12, 75, 13), // "onTimerUpdate"
QT_MOC_LITERAL(13, 89, 13), // "onOpenSucceed"
QT_MOC_LITERAL(14, 103, 12), // "onOpenFailed"
QT_MOC_LITERAL(15, 116, 11), // "onPlayerEOF"
QT_MOC_LITERAL(16, 128, 13), // "onPlayerError"
QT_MOC_LITERAL(17, 142, 14), // "setAspectRatio"
QT_MOC_LITERAL(18, 157, 14), // "aspect_ratio_t"
QT_MOC_LITERAL(19, 172, 12) // "aspect_ratio"

    },
    "VideoWidget\0open\0\0Media&\0media\0close\0"
    "start\0stop\0pause\0resume\0restart\0retry\0"
    "onTimerUpdate\0onOpenSucceed\0onOpenFailed\0"
    "onPlayerEOF\0onPlayerError\0setAspectRatio\0"
    "aspect_ratio_t\0aspect_ratio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoWidget[] = {

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
       1,    1,   84,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,
      16,    0,   98,    2, 0x0a /* Public */,
      17,    1,   99,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void VideoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VideoWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->open((*reinterpret_cast< Media(*)>(_a[1]))); break;
        case 1: _t->close(); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        case 4: _t->pause(); break;
        case 5: _t->resume(); break;
        case 6: _t->restart(); break;
        case 7: _t->retry(); break;
        case 8: _t->onTimerUpdate(); break;
        case 9: _t->onOpenSucceed(); break;
        case 10: _t->onOpenFailed(); break;
        case 11: _t->onPlayerEOF(); break;
        case 12: _t->onPlayerError(); break;
        case 13: _t->setAspectRatio((*reinterpret_cast< aspect_ratio_t(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VideoWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_VideoWidget.data,
    qt_meta_data_VideoWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VideoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int VideoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
