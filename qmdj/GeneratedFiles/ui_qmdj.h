/********************************************************************************
** Form generated from reading UI file 'qmdj.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMDJ_H
#define UI_QMDJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qmdjClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qmdjClass)
    {
        if (qmdjClass->objectName().isEmpty())
            qmdjClass->setObjectName(QStringLiteral("qmdjClass"));
        qmdjClass->resize(600, 400);
        menuBar = new QMenuBar(qmdjClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        qmdjClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qmdjClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        qmdjClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(qmdjClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        qmdjClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(qmdjClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        qmdjClass->setStatusBar(statusBar);

        retranslateUi(qmdjClass);

        QMetaObject::connectSlotsByName(qmdjClass);
    } // setupUi

    void retranslateUi(QMainWindow *qmdjClass)
    {
        qmdjClass->setWindowTitle(QApplication::translate("qmdjClass", "qmdj", 0));
    } // retranslateUi

};

namespace Ui {
    class qmdjClass: public Ui_qmdjClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMDJ_H
