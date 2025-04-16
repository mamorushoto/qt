#ifndef GOTOCELL_H
#define GOTOCELL_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui
{
class gotocell;
}
QT_END_NAMESPACE

class gotocell : public QDialog
{
    Q_OBJECT

public:
    gotocell(QWidget *parent = nullptr);
    ~gotocell();

public slots:
    void on_lineEdit_textChanged();

private:
    Ui::gotocell* ui;
};
#endif // GOTOCELL_H
