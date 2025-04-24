/********************************************************************************
** Form generated from reading UI file 'iconeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICONEDITOR_H
#define UI_ICONEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_iconeditor
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *iconeditor)
    {
        if (iconeditor->objectName().isEmpty())
            iconeditor->setObjectName("iconeditor");
        iconeditor->resize(800, 600);
        centralwidget = new QWidget(iconeditor);
        centralwidget->setObjectName("centralwidget");
        iconeditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(iconeditor);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        iconeditor->setMenuBar(menubar);
        statusbar = new QStatusBar(iconeditor);
        statusbar->setObjectName("statusbar");
        iconeditor->setStatusBar(statusbar);

        retranslateUi(iconeditor);

        QMetaObject::connectSlotsByName(iconeditor);
    } // setupUi

    void retranslateUi(QMainWindow *iconeditor)
    {
        iconeditor->setWindowTitle(QCoreApplication::translate("iconeditor", "iconeditor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class iconeditor: public Ui_iconeditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICONEDITOR_H
