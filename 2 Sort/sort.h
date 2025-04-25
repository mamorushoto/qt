#ifndef SORT_H
#define SORT_H

#include <QDialog>

namespace Ui {
class Sort;
}

class Sort : public QDialog
{
    Q_OBJECT

public:
    explicit Sort(QWidget *parent = nullptr);
    ~Sort();

private:
    Ui::Sort *ui;

private slots:
    void on_moreButton_toggled(bool checked);
};

#endif // SORT_H
