/********************************************************************************
** Form generated from reading UI file 'qt.ui'
**
** Created: Fri 18. Mar 17:42:26 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_H
#define UI_QT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtClass)
    {
        if (QtClass->objectName().isEmpty())
            QtClass->setObjectName(QString::fromUtf8("QtClass"));
        QtClass->resize(600, 400);
        menuBar = new QMenuBar(QtClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        QtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QtClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtClass->setStatusBar(statusBar);

        retranslateUi(QtClass);

        QMetaObject::connectSlotsByName(QtClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtClass)
    {
        QtClass->setWindowTitle(QApplication::translate("QtClass", "Qt", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QtClass: public Ui_QtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_H
