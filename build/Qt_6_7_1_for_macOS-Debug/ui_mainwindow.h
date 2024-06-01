/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_File;
    QAction *actionClose_FIle;
    QAction *actionOpen_File;
    QAction *actionSave_File;
    QAction *actionSave_As;
    QAction *actionOpen_Folder;
    QAction *actionFind;
    QAction *actionFind_Replace;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionZoom_in;
    QAction *actionZoom_out;
    QAction *actionRestore_Zoom;
    QAction *actionFont;
    QAction *actionDefault_format;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuFormat;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName("actionNew_File");
        actionClose_FIle = new QAction(MainWindow);
        actionClose_FIle->setObjectName("actionClose_FIle");
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName("actionOpen_File");
        actionSave_File = new QAction(MainWindow);
        actionSave_File->setObjectName("actionSave_File");
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName("actionSave_As");
        actionOpen_Folder = new QAction(MainWindow);
        actionOpen_Folder->setObjectName("actionOpen_Folder");
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName("actionFind");
        actionFind_Replace = new QAction(MainWindow);
        actionFind_Replace->setObjectName("actionFind_Replace");
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName("actionDelete");
        actionZoom_in = new QAction(MainWindow);
        actionZoom_in->setObjectName("actionZoom_in");
        actionZoom_out = new QAction(MainWindow);
        actionZoom_out->setObjectName("actionZoom_out");
        actionRestore_Zoom = new QAction(MainWindow);
        actionRestore_Zoom->setObjectName("actionRestore_Zoom");
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName("actionFont");
        actionDefault_format = new QAction(MainWindow);
        actionDefault_format->setObjectName("actionDefault_format");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 38));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName("menuFormat");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menuFile->addAction(actionNew_File);
        menuFile->addAction(actionOpen_File);
        menuFile->addAction(actionOpen_Folder);
        menuFile->addAction(actionClose_FIle);
        menuFile->addAction(actionSave_File);
        menuFile->addAction(actionSave_As);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionFind_Replace);
        menuView->addAction(actionRestore_Zoom);
        menuView->addAction(actionZoom_in);
        menuView->addAction(actionZoom_out);
        menuFormat->addAction(actionDefault_format);
        menuFormat->addAction(actionFont);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_File->setText(QCoreApplication::translate("MainWindow", "New File", nullptr));
#if QT_CONFIG(shortcut)
        actionNew_File->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose_FIle->setText(QCoreApplication::translate("MainWindow", "Close FIle", nullptr));
#if QT_CONFIG(shortcut)
        actionClose_FIle->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_File->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_File->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_File->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen_Folder->setText(QCoreApplication::translate("MainWindow", "Open Folder", nullptr));
        actionFind->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind_Replace->setText(QCoreApplication::translate("MainWindow", "Find Replace", nullptr));
#if QT_CONFIG(shortcut)
        actionFind_Replace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_in->setText(QCoreApplication::translate("MainWindow", "Zoom in", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_in->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+=", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_out->setText(QCoreApplication::translate("MainWindow", "Zoom out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_out->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRestore_Zoom->setText(QCoreApplication::translate("MainWindow", "Default Zoom", nullptr));
#if QT_CONFIG(shortcut)
        actionRestore_Zoom->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+\303\200", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont->setText(QCoreApplication::translate("MainWindow", "Font", nullptr));
        actionDefault_format->setText(QCoreApplication::translate("MainWindow", "Default format", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("MainWindow", "Format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
