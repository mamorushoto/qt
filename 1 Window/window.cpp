#include "window.h"

Window::Window(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(QString::fromUtf8("Привет, Qt!"));
    resize(600,400);
}

Window::~Window()
{

}
