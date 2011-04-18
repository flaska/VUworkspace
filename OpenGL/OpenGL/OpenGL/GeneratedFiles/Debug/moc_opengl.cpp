/****************************************************************************
** Meta object code from reading C++ file 'opengl.h'
**
** Created: Fri 18. Mar 17:33:36 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../opengl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opengl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GLWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GLWindow[] = {
    "GLWindow\0\0wheelSignal(QWheelEvent*)\0"
};

const QMetaObject GLWindow::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLWindow,
      qt_meta_data_GLWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GLWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GLWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GLWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLWindow))
        return static_cast<void*>(const_cast< GLWindow*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: wheelSignal((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void GLWindow::wheelSignal(QWheelEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_GLPainter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_GLPainter[] = {
    "GLPainter\0"
};

const QMetaObject GLPainter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GLPainter,
      qt_meta_data_GLPainter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GLPainter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GLPainter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GLPainter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLPainter))
        return static_cast<void*>(const_cast< GLPainter*>(this));
    return QObject::qt_metacast(_clname);
}

int GLPainter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
