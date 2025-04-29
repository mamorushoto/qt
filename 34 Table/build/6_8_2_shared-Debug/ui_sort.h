/********************************************************************************
** Form generated from reading UI file 'sort.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORT_H
#define UI_SORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Sort
{
public:
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout;
    QGroupBox *PrimaryKeyGroupKey;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_4;
    QComboBox *keyCol1_comboBox;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_3;
    QComboBox *order1_comboBox;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *secondGroupBoxLayout;
    QGroupBox *SecondaryKeyGroupBox;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_14;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_15;
    QComboBox *keyCol2_comboBox;
    QLabel *label_11;
    QComboBox *order2_comboBox;
    QSpacerItem *verticalSpacer_13;
    QVBoxLayout *thirdGroudBoxLayout;
    QGroupBox *ThirdKeyGroupBox;
    QGridLayout *gridLayout_7;
    QLabel *label_14;
    QSpacerItem *verticalSpacer_24;
    QComboBox *order3_comboBox;
    QSpacerItem *verticalSpacer_23;
    QComboBox *keyCol3_comboBox;
    QSpacerItem *verticalSpacer_22;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QSpacerItem *verticalSpacer;
    QPushButton *resizeBtn;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_21;

    void setupUi(QDialog *Sort)
    {
        if (Sort->objectName().isEmpty())
            Sort->setObjectName("Sort");
        Sort->resize(603, 845);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Sort->sizePolicy().hasHeightForWidth());
        Sort->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 127));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(127, 127, 127, 127));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        Sort->setPalette(palette);
        gridLayout_10 = new QGridLayout(Sort);
        gridLayout_10->setObjectName("gridLayout_10");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        PrimaryKeyGroupKey = new QGroupBox(Sort);
        PrimaryKeyGroupKey->setObjectName("PrimaryKeyGroupKey");
        gridLayout = new QGridLayout(PrimaryKeyGroupKey);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer_8, 0, 0, 1, 1);

        label_4 = new QLabel(PrimaryKeyGroupKey);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        keyCol1_comboBox = new QComboBox(PrimaryKeyGroupKey);
        keyCol1_comboBox->addItem(QString());
        keyCol1_comboBox->setObjectName("keyCol1_comboBox");

        gridLayout->addWidget(keyCol1_comboBox, 1, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(verticalSpacer_6, 2, 0, 1, 1);

        label_3 = new QLabel(PrimaryKeyGroupKey);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        order1_comboBox = new QComboBox(PrimaryKeyGroupKey);
        order1_comboBox->addItem(QString());
        order1_comboBox->addItem(QString());
        order1_comboBox->setObjectName("order1_comboBox");

        gridLayout->addWidget(order1_comboBox, 3, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer_7, 4, 0, 1, 1);


        verticalLayout->addWidget(PrimaryKeyGroupKey);


        verticalLayout_8->addLayout(verticalLayout);

        secondGroupBoxLayout = new QVBoxLayout();
        secondGroupBoxLayout->setObjectName("secondGroupBoxLayout");
        SecondaryKeyGroupBox = new QGroupBox(Sort);
        SecondaryKeyGroupBox->setObjectName("SecondaryKeyGroupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SecondaryKeyGroupBox->sizePolicy().hasHeightForWidth());
        SecondaryKeyGroupBox->setSizePolicy(sizePolicy1);
        gridLayout_6 = new QGridLayout(SecondaryKeyGroupBox);
        gridLayout_6->setObjectName("gridLayout_6");
        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(verticalSpacer_14, 2, 0, 1, 1);

        label_12 = new QLabel(SecondaryKeyGroupBox);
        label_12->setObjectName("label_12");

        gridLayout_6->addWidget(label_12, 3, 0, 1, 1);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout_6->addItem(verticalSpacer_15, 4, 0, 1, 1);

        keyCol2_comboBox = new QComboBox(SecondaryKeyGroupBox);
        keyCol2_comboBox->addItem(QString());
        keyCol2_comboBox->setObjectName("keyCol2_comboBox");

        gridLayout_6->addWidget(keyCol2_comboBox, 1, 1, 1, 1);

        label_11 = new QLabel(SecondaryKeyGroupBox);
        label_11->setObjectName("label_11");

        gridLayout_6->addWidget(label_11, 1, 0, 1, 1);

        order2_comboBox = new QComboBox(SecondaryKeyGroupBox);
        order2_comboBox->addItem(QString());
        order2_comboBox->addItem(QString());
        order2_comboBox->setObjectName("order2_comboBox");

        gridLayout_6->addWidget(order2_comboBox, 3, 1, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout_6->addItem(verticalSpacer_13, 0, 0, 1, 1);


        secondGroupBoxLayout->addWidget(SecondaryKeyGroupBox);


        verticalLayout_8->addLayout(secondGroupBoxLayout);

        thirdGroudBoxLayout = new QVBoxLayout();
        thirdGroudBoxLayout->setObjectName("thirdGroudBoxLayout");
        ThirdKeyGroupBox = new QGroupBox(Sort);
        ThirdKeyGroupBox->setObjectName("ThirdKeyGroupBox");
        sizePolicy1.setHeightForWidth(ThirdKeyGroupBox->sizePolicy().hasHeightForWidth());
        ThirdKeyGroupBox->setSizePolicy(sizePolicy1);
        gridLayout_7 = new QGridLayout(ThirdKeyGroupBox);
        gridLayout_7->setObjectName("gridLayout_7");
        label_14 = new QLabel(ThirdKeyGroupBox);
        label_14->setObjectName("label_14");

        gridLayout_7->addWidget(label_14, 3, 0, 1, 1);

        verticalSpacer_24 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout_7->addItem(verticalSpacer_24, 4, 0, 1, 1);

        order3_comboBox = new QComboBox(ThirdKeyGroupBox);
        order3_comboBox->addItem(QString());
        order3_comboBox->addItem(QString());
        order3_comboBox->setObjectName("order3_comboBox");

        gridLayout_7->addWidget(order3_comboBox, 3, 1, 1, 1);

        verticalSpacer_23 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(verticalSpacer_23, 2, 0, 1, 1);

        keyCol3_comboBox = new QComboBox(ThirdKeyGroupBox);
        keyCol3_comboBox->addItem(QString());
        keyCol3_comboBox->setObjectName("keyCol3_comboBox");

        gridLayout_7->addWidget(keyCol3_comboBox, 1, 1, 1, 1);

        verticalSpacer_22 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout_7->addItem(verticalSpacer_22, 0, 0, 1, 1);

        label_13 = new QLabel(ThirdKeyGroupBox);
        label_13->setObjectName("label_13");

        gridLayout_7->addWidget(label_13, 1, 0, 1, 1);


        thirdGroudBoxLayout->addWidget(ThirdKeyGroupBox);


        verticalLayout_8->addLayout(thirdGroudBoxLayout);


        gridLayout_10->addLayout(verticalLayout_8, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        okBtn = new QPushButton(Sort);
        okBtn->setObjectName("okBtn");

        verticalLayout_3->addWidget(okBtn);

        cancelBtn = new QPushButton(Sort);
        cancelBtn->setObjectName("cancelBtn");
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        cancelBtn->setPalette(palette1);

        verticalLayout_3->addWidget(cancelBtn);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_4->addItem(verticalSpacer);

        resizeBtn = new QPushButton(Sort);
        resizeBtn->setObjectName("resizeBtn");

        verticalLayout_4->addWidget(resizeBtn);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout_4->addItem(verticalSpacer_4);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_21);


        gridLayout_10->addLayout(verticalLayout_5, 0, 1, 1, 1);

#if QT_CONFIG(shortcut)
        label_4->setBuddy(keyCol1_comboBox);
        label_3->setBuddy(order1_comboBox);
        label_12->setBuddy(order2_comboBox);
        label_11->setBuddy(keyCol2_comboBox);
        label_14->setBuddy(order3_comboBox);
        label_13->setBuddy(keyCol3_comboBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(Sort);
        QObject::connect(cancelBtn, &QPushButton::clicked, Sort, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Sort);
    } // setupUi

    void retranslateUi(QDialog *Sort)
    {
        Sort->setWindowTitle(QCoreApplication::translate("Sort", "Sort", nullptr));
        PrimaryKeyGroupKey->setTitle(QCoreApplication::translate("Sort", "\320\237\320\265\321\200\320\262\320\270\321\207\320\275\321\213\320\271 \320\272\320\273\321\216\321\207", nullptr));
        label_4->setText(QCoreApplication::translate("Sort", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
        keyCol1_comboBox->setItemText(0, QCoreApplication::translate("Sort", "\320\237\321\203\321\201\321\202\320\276", nullptr));

        label_3->setText(QCoreApplication::translate("Sort", "\320\237\320\276\321\200\321\217\320\264\320\276\320\272\n"
"\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        order1_comboBox->setItemText(0, QCoreApplication::translate("Sort", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        order1_comboBox->setItemText(1, QCoreApplication::translate("Sort", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));

        SecondaryKeyGroupBox->setTitle(QCoreApplication::translate("Sort", "\320\222\321\202\320\276\321\200\320\270\321\207\320\275\321\213\320\271 \320\272\320\273\321\216\321\207", nullptr));
        label_12->setText(QCoreApplication::translate("Sort", "\320\237\320\276\321\200\321\217\320\264\320\276\320\272\n"
"\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        keyCol2_comboBox->setItemText(0, QCoreApplication::translate("Sort", "\320\237\321\203\321\201\321\202\320\276", nullptr));

        label_11->setText(QCoreApplication::translate("Sort", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
        order2_comboBox->setItemText(0, QCoreApplication::translate("Sort", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        order2_comboBox->setItemText(1, QCoreApplication::translate("Sort", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));

        ThirdKeyGroupBox->setTitle(QCoreApplication::translate("Sort", "\320\242\321\200\320\265\321\202\320\270\321\207\320\275\321\213\320\271 \320\272\320\273\321\216\321\207", nullptr));
        label_14->setText(QCoreApplication::translate("Sort", "\320\237\320\276\321\200\321\217\320\264\320\276\320\272\n"
"\321\201\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\270", nullptr));
        order3_comboBox->setItemText(0, QCoreApplication::translate("Sort", "\320\237\320\276 \320\262\320\276\320\267\321\200\320\260\321\201\321\202\320\260\320\275\320\270\321\216", nullptr));
        order3_comboBox->setItemText(1, QCoreApplication::translate("Sort", "\320\237\320\276 \321\203\320\261\321\213\320\262\320\260\320\275\320\270\321\216", nullptr));

        keyCol3_comboBox->setItemText(0, QCoreApplication::translate("Sort", "\320\237\321\203\321\201\321\202\320\276", nullptr));

        label_13->setText(QCoreApplication::translate("Sort", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
        okBtn->setText(QCoreApplication::translate("Sort", "\320\236\320\232", nullptr));
        cancelBtn->setText(QCoreApplication::translate("Sort", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        resizeBtn->setText(QCoreApplication::translate("Sort", "\320\221\320\276\320\273\321\214\321\210\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sort: public Ui_Sort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORT_H
