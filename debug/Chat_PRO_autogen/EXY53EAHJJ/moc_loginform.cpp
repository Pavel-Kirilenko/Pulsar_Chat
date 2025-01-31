/****************************************************************************
** Meta object code from reading C++ file 'loginform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../sources/loginform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginForm_t {
    QByteArrayData data[14];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginForm_t qt_meta_stringdata_LoginForm = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LoginForm"
QT_MOC_LITERAL(1, 10, 17), // "registerRequested"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 22), // "adminRegisterRequested"
QT_MOC_LITERAL(4, 52, 8), // "accepted"
QT_MOC_LITERAL(5, 61, 6), // "userId"
QT_MOC_LITERAL(6, 68, 8), // "userName"
QT_MOC_LITERAL(7, 77, 7), // "banTime"
QT_MOC_LITERAL(8, 85, 5), // "admin"
QT_MOC_LITERAL(9, 91, 8), // "rejected"
QT_MOC_LITERAL(10, 100, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(11, 122, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(12, 144, 33), // "on_registrationPushButton_cli..."
QT_MOC_LITERAL(13, 178, 26) // "on_adminPushButton_clicked"

    },
    "LoginForm\0registerRequested\0\0"
    "adminRegisterRequested\0accepted\0userId\0"
    "userName\0banTime\0admin\0rejected\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected\0"
    "on_registrationPushButton_clicked\0"
    "on_adminPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    4,   56,    2, 0x06 /* Public */,
       9,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   66,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,
      12,    0,   68,    2, 0x08 /* Private */,
      13,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QDateTime, QMetaType::Bool,    5,    6,    7,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->registerRequested(); break;
        case 1: _t->adminRegisterRequested(); break;
        case 2: _t->accepted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->rejected(); break;
        case 4: _t->on_buttonBox_accepted(); break;
        case 5: _t->on_buttonBox_rejected(); break;
        case 6: _t->on_registrationPushButton_clicked(); break;
        case 7: _t->on_adminPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginForm::registerRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoginForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginForm::adminRegisterRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LoginForm::*)(int , QString , QDateTime , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginForm::accepted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LoginForm::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginForm::rejected)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoginForm::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LoginForm.data,
    qt_meta_data_LoginForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoginForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginForm.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LoginForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void LoginForm::registerRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LoginForm::adminRegisterRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LoginForm::accepted(int _t1, QString _t2, QDateTime _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LoginForm::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
