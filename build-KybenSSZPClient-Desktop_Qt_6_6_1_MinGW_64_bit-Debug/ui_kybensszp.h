/********************************************************************************
** Form generated from reading UI file 'kybensszp.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KYBENSSZP_H
#define UI_KYBENSSZP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kybensszp
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Kybensszp)
    {
        if (Kybensszp->objectName().isEmpty())
            Kybensszp->setObjectName("Kybensszp");
        Kybensszp->resize(800, 600);
        centralwidget = new QWidget(Kybensszp);
        centralwidget->setObjectName("centralwidget");
        Kybensszp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Kybensszp);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Kybensszp->setMenuBar(menubar);
        statusbar = new QStatusBar(Kybensszp);
        statusbar->setObjectName("statusbar");
        Kybensszp->setStatusBar(statusbar);

        retranslateUi(Kybensszp);

        QMetaObject::connectSlotsByName(Kybensszp);
    } // setupUi

    void retranslateUi(QMainWindow *Kybensszp)
    {
        Kybensszp->setWindowTitle(QCoreApplication::translate("Kybensszp", "Kybensszp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kybensszp: public Ui_Kybensszp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KYBENSSZP_H
