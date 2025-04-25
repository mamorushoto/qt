#include "sort.h"
#include "ui_sort.h"

Sort::Sort(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sort)
{
    ui->setupUi(this);

    ui->secondGroupBox->setVisible(false);
    ui->thirdGroupBox->setVisible(false);
    connect(ui->moreButton, &QPushButton::toggled, this, &Sort::on_moreButton_toggled);
}

Sort::~Sort()
{
    delete ui;
}

void Sort::on_moreButton_toggled(bool checked)
{
    ui->secondGroupBox->setVisible(checked);
    ui->thirdGroupBox->setVisible(checked);
}
