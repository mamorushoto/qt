/********************************************************************************
** Form generated from reading UI file 'gotocell.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTOCELL_H
#define UI_GOTOCELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gotocell
{
public:
    QLineEdit *lineEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QTextEdit *textEdit;

    void setupUi(QDialog *gotocell)
    {
        if (gotocell->objectName().isEmpty())
            gotocell->setObjectName("gotocell");
        gotocell->resize(346, 225);
        lineEdit = new QLineEdit(gotocell);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(160, 50, 171, 31));
        verticalLayoutWidget = new QWidget(gotocell);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 100, 311, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        okBtn = new QPushButton(verticalLayoutWidget);
        okBtn->setObjectName("okBtn");

        verticalLayout->addWidget(okBtn);

        cancelBtn = new QPushButton(verticalLayoutWidget);
        cancelBtn->setObjectName("cancelBtn");

        verticalLayout->addWidget(cancelBtn);

        textEdit = new QTextEdit(gotocell);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 50, 121, 31));

        retranslateUi(gotocell);

        QMetaObject::connectSlotsByName(gotocell);
    } // setupUi

    void retranslateUi(QDialog *gotocell)
    {
        gotocell->setWindowTitle(QCoreApplication::translate("gotocell", "gotocell", nullptr));
        lineEdit->setText(QString());
        okBtn->setText(QCoreApplication::translate("gotocell", "Ok", nullptr));
        cancelBtn->setText(QCoreApplication::translate("gotocell", "Cancel", nullptr));
        textEdit->setHtml(QCoreApplication::translate("gotocell", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Cell location: </p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gotocell: public Ui_gotocell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTOCELL_H
