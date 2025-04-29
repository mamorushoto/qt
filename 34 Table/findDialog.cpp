#include "finddialog.h"

FindDialog::FindDialog(QWidget *parent)
    : QDialog(parent)
{

    const QColor white {"#ffffff"};
    const QColor black {"#000000"};

    const QColor WINDOW_COLOR {white};
    const QFont WINDOW_FONT {"Consolas", 16, 400};
    const int MAX_WINDOW_HEIGHT {100};

    setMaximumHeight(MAX_WINDOW_HEIGHT);
    setPalette(WINDOW_COLOR);


    mainLayout = new QHBoxLayout{this};

    rightLayout = new QVBoxLayout;
    leftLayout = new QVBoxLayout;
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);

    topLeftLayout = new QHBoxLayout;
    leftLayout->addLayout(topLeftLayout);


    const QColor LABEL_COLOR {black};
    QFont LABEL_FONT {WINDOW_FONT};
    LABEL_FONT.setWeight(QFont::Bold);

    QPalette label_palette;
    label_palette.setColor(QPalette::WindowText, LABEL_COLOR);

    label = new QLabel{this};
    label->setFont(LABEL_FONT);
    label->setText("Find what:");
    label->setPalette(label_palette);
    topLeftLayout->addWidget(label);


    const QColor LINE_EDIT_BG_COLOR {white};
    const QColor LINE_EDIT_COLOR {black};
    const QSize LINE_EDIT_MIN_SIZE {200, 50};

    QFont lineEdit_font {WINDOW_FONT};
    lineEdit_font.setPixelSize(18);
    lineEdit_font.setWeight(QFont::Bold);

    QPalette lineEdit_palette;
    lineEdit_palette.setColor(QPalette::Base, LINE_EDIT_BG_COLOR);
    lineEdit_palette.setColor(QPalette::Text, LINE_EDIT_COLOR);

    lineEdit = new QLineEdit{this};
    lineEdit->setMinimumSize(LINE_EDIT_MIN_SIZE);
    lineEdit->setFont(lineEdit_font);
    lineEdit->setPalette(lineEdit_palette);
    topLeftLayout->addWidget(lineEdit);
    label->setBuddy(lineEdit);


    const QColor CHECKBOX_COLOR {black};

    QFont checkbox_font {WINDOW_FONT};
    checkbox_font.setPixelSize(20);
    checkbox_font.setItalic(true);

    QPalette checkbox_palette;
    checkbox_palette.setColor(QPalette::WindowText, CHECKBOX_COLOR);

    caseBox = new QCheckBox{this};
    caseBox->setText("Match case");
    caseBox->setFont(checkbox_font);
    caseBox->setPalette(checkbox_palette);

    backwardBox = new QCheckBox{this};
    backwardBox->setText("Search backward");
    backwardBox->setFont(checkbox_font);
    backwardBox->setPalette(checkbox_palette);

    leftLayout->addStretch();
    leftLayout->addWidget(caseBox);
    leftLayout->addWidget(backwardBox);


    const QSize BTN_SIZE {100, 50};
    const QColor BTN_BG_COLOR {white};
    const QColor BTN_COLOR {black};

    QFont btn_font {WINDOW_FONT};
    btn_font.setPixelSize(20);
    btn_font.setWeight(QFont::Bold);

    QPalette btn_palette;
    btn_palette.setColor(QPalette::ButtonText, BTN_COLOR);
    btn_palette.setColor(QPalette::Button, BTN_BG_COLOR);


    findBtn = new QPushButton{this};
    findBtn->setFixedSize(BTN_SIZE);
    findBtn->setFont(btn_font);
    findBtn->setPalette(btn_palette);
    findBtn->setText("Find");

    connect(findBtn, SIGNAL(clicked()), this, SLOT(findClicked()));

    closeBtn = new QPushButton{this};
    closeBtn->setFixedSize(BTN_SIZE);
    closeBtn->setFont(btn_font);
    closeBtn->setPalette(btn_palette);
    closeBtn->setText("Close");

    connect(closeBtn, SIGNAL(clicked()), this, SLOT(close()));

    rightLayout->addWidget(findBtn);
    rightLayout->addWidget(closeBtn);
    rightLayout->addStretch();
}


FindDialog::~FindDialog() {}

void FindDialog::findClicked()
{
    const Qt::CaseSensitivity cs {caseBox->isChecked() ? Qt::CaseSensitivity::CaseSensitive : Qt::CaseSensitivity::CaseInsensitive};
    const QString& text {lineEdit->text()};

    if (backwardBox->isChecked())
        emit findPrev(text, cs);

    else emit findNext(text, cs);
}
