#include "gotocell.h"
#include "ui_gotocell.h"
#include <QRegularExpression>
#include <QRegularExpressionValidator>

gotocell::gotocell(QWidget *parent)
    :   QDialog(parent),
    ui(new Ui::gotocell)
{
    ui->setupUi(this);
    QRegularExpression reg {"[A-Za-z][1-9][0-9]{0,2}"};
    QValidator *validator = new QRegularExpressionValidator{reg, this};
    ui->lineEdit->setValidator(validator);
    connect(ui->okBtn, SIGNAL(clicked()), this, SLOT(accept()));
    connect(ui->cancelBtn, SIGNAL(clicked()), this, SLOT(reject()));
}

gotocell::~gotocell()
{
    delete ui;
}

void gotocell::on_lineEdit_textChanged()
{
    ui->okBtn->setEnabled(ui->lineEdit->hasAcceptableInput());
}
