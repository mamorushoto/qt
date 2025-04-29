#include "table.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen* splash = new QSplashScreen;

    const QPixmap pixmap{":/img/img/pixmap.png"};
    splash->setPixmap(pixmap);
    splash->show();
    a.processEvents();

    QEventLoop loop;
    QTimer::singleShot(1000, &loop, &QEventLoop::quit);
    loop.exec();
    Table* table = new Table;
    table->show();
    splash->finish(table);
    return a.exec();
}
