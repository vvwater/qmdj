/********************************************************************************
** Form generated from reading UI file 'qmdj_dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMDJ_DLG_H
#define UI_QMDJ_DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_qmdj_dlgClass
{
public:
    QLabel *label_message;

    void setupUi(QDialog *qmdj_dlgClass)
    {
        if (qmdj_dlgClass->objectName().isEmpty())
            qmdj_dlgClass->setObjectName(QStringLiteral("qmdj_dlgClass"));
        qmdj_dlgClass->resize(600, 400);
        label_message = new QLabel(qmdj_dlgClass);
        label_message->setObjectName(QStringLiteral("label_message"));
        label_message->setGeometry(QRect(100, 140, 451, 16));

        retranslateUi(qmdj_dlgClass);

        QMetaObject::connectSlotsByName(qmdj_dlgClass);
    } // setupUi

    void retranslateUi(QDialog *qmdj_dlgClass)
    {
        qmdj_dlgClass->setWindowTitle(QApplication::translate("qmdj_dlgClass", "qmdj_dlg", 0));
        label_message->setText(QApplication::translate("qmdj_dlgClass", "nothing", 0));
    } // retranslateUi

};

namespace Ui {
    class qmdj_dlgClass: public Ui_qmdj_dlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMDJ_DLG_H
