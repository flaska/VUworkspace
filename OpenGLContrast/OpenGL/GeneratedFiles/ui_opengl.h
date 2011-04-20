/********************************************************************************
** Form generated from reading UI file 'opengl.ui'
**
** Created: Fri 18. Mar 17:33:37 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENGL_H
#define UI_OPENGL_H

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

class Ui_OpenGLClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpenGLClass)
    {
        if (OpenGLClass->objectName().isEmpty())
            OpenGLClass->setObjectName(QString::fromUtf8("OpenGLClass"));
        OpenGLClass->resize(600, 400);
        menuBar = new QMenuBar(OpenGLClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        OpenGLClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OpenGLClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        OpenGLClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(OpenGLClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        OpenGLClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(OpenGLClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        OpenGLClass->setStatusBar(statusBar);

        retranslateUi(OpenGLClass);

        QMetaObject::connectSlotsByName(OpenGLClass);
    } // setupUi

    void retranslateUi(QMainWindow *OpenGLClass)
    {
        OpenGLClass->setWindowTitle(QApplication::translate("OpenGLClass", "OpenGL", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OpenGLClass: public Ui_OpenGLClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENGL_H
