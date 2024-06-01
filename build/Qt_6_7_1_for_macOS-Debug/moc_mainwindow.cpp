/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../headers/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_actionNew_File_triggered",
    "",
    "on_actionClose_FIle_triggered",
    "closeTab",
    "index",
    "createTab",
    "on_actionOpen_File_triggered",
    "openTabFile",
    "filePath",
    "currentTextEdit",
    "QPlainTextEdit*",
    "currentStatus",
    "QLabel*",
    "textEditChanged",
    "on_actionSave_File_triggered",
    "on_actionSave_As_triggered",
    "updateStatus",
    "on_actionOpen_Folder_triggered",
    "openFolder",
    "dirPath",
    "openTreeViewFile",
    "QModelIndex",
    "dragEnterEvent",
    "QDragEnterEvent*",
    "event",
    "dragMoveEvent",
    "QDragMoveEvent*",
    "dropEvent",
    "QDropEvent*",
    "on_actionFind_Replace_triggered",
    "on_actionFind_triggered",
    "on_actionUndo_triggered",
    "on_actionRedo_triggered",
    "on_actionCut_triggered",
    "on_actionCopy_triggered",
    "on_actionPaste_triggered",
    "on_actionDelete_triggered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x08,    1 /* Private */,
       3,    0,  171,    2, 0x08,    2 /* Private */,
       4,    1,  172,    2, 0x08,    3 /* Private */,
       6,    0,  175,    2, 0x08,    5 /* Private */,
       7,    0,  176,    2, 0x08,    6 /* Private */,
       8,    1,  177,    2, 0x08,    7 /* Private */,
      10,    0,  180,    2, 0x08,    9 /* Private */,
      12,    0,  181,    2, 0x08,   10 /* Private */,
      14,    0,  182,    2, 0x08,   11 /* Private */,
      15,    0,  183,    2, 0x08,   12 /* Private */,
      16,    0,  184,    2, 0x08,   13 /* Private */,
      17,    0,  185,    2, 0x08,   14 /* Private */,
      18,    0,  186,    2, 0x08,   15 /* Private */,
      19,    1,  187,    2, 0x08,   16 /* Private */,
      21,    1,  190,    2, 0x08,   18 /* Private */,
      23,    1,  193,    2, 0x08,   20 /* Private */,
      26,    1,  196,    2, 0x08,   22 /* Private */,
      28,    1,  199,    2, 0x08,   24 /* Private */,
      30,    0,  202,    2, 0x08,   26 /* Private */,
      31,    0,  203,    2, 0x08,   27 /* Private */,
      32,    0,  204,    2, 0x08,   28 /* Private */,
      33,    0,  205,    2, 0x08,   29 /* Private */,
      34,    0,  206,    2, 0x08,   30 /* Private */,
      35,    0,  207,    2, 0x08,   31 /* Private */,
      36,    0,  208,    2, 0x08,   32 /* Private */,
      37,    0,  209,    2, 0x08,   33 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    0x80000000 | 11,
    0x80000000 | 13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, 0x80000000 | 22,    5,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 27,   25,
    QMetaType::Void, 0x80000000 | 29,   25,
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

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_actionNew_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionClose_FIle_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'createTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpen_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openTabFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'currentTextEdit'
        QtPrivate::TypeAndForceComplete<QPlainTextEdit *, std::false_type>,
        // method 'currentStatus'
        QtPrivate::TypeAndForceComplete<QLabel *, std::false_type>,
        // method 'textEditChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSave_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSave_As_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpen_Folder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'openTreeViewFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'dragEnterEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDragEnterEvent *, std::false_type>,
        // method 'dragMoveEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDragMoveEvent *, std::false_type>,
        // method 'dropEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDropEvent *, std::false_type>,
        // method 'on_actionFind_Replace_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFind_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionUndo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRedo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCut_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCopy_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPaste_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDelete_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionNew_File_triggered(); break;
        case 1: _t->on_actionClose_FIle_triggered(); break;
        case 2: _t->closeTab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->createTab(); break;
        case 4: _t->on_actionOpen_File_triggered(); break;
        case 5: _t->openTabFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: { QPlainTextEdit* _r = _t->currentTextEdit();
            if (_a[0]) *reinterpret_cast< QPlainTextEdit**>(_a[0]) = std::move(_r); }  break;
        case 7: { QLabel* _r = _t->currentStatus();
            if (_a[0]) *reinterpret_cast< QLabel**>(_a[0]) = std::move(_r); }  break;
        case 8: _t->textEditChanged(); break;
        case 9: _t->on_actionSave_File_triggered(); break;
        case 10: _t->on_actionSave_As_triggered(); break;
        case 11: _t->updateStatus(); break;
        case 12: _t->on_actionOpen_Folder_triggered(); break;
        case 13: _t->openFolder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->openTreeViewFile((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 15: _t->dragEnterEvent((*reinterpret_cast< std::add_pointer_t<QDragEnterEvent*>>(_a[1]))); break;
        case 16: _t->dragMoveEvent((*reinterpret_cast< std::add_pointer_t<QDragMoveEvent*>>(_a[1]))); break;
        case 17: _t->dropEvent((*reinterpret_cast< std::add_pointer_t<QDropEvent*>>(_a[1]))); break;
        case 18: _t->on_actionFind_Replace_triggered(); break;
        case 19: _t->on_actionFind_triggered(); break;
        case 20: _t->on_actionUndo_triggered(); break;
        case 21: _t->on_actionRedo_triggered(); break;
        case 22: _t->on_actionCut_triggered(); break;
        case 23: _t->on_actionCopy_triggered(); break;
        case 24: _t->on_actionPaste_triggered(); break;
        case 25: _t->on_actionDelete_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
