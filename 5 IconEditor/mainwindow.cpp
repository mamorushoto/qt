#include "mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QColorDialog>
#include <QToolBar>
#include <QApplication>
#include <QMenu>
#include <QMenuBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    iconEditor = new IconEditor;
    setCentralWidget(iconEditor);

    createActions();
    createMenus();

    setWindowTitle(tr("Icon Editor"));
    resize(500, 400);
}

void MainWindow::createActions()
{
    newAct = new QAction(tr("&New"), this);
    newAct->setShortcut(QKeySequence::New);
    connect(newAct, &QAction::triggered, this, &MainWindow::newFile);

    openAct = new QAction(tr("&Open..."), this);
    openAct->setShortcut(QKeySequence::Open);
    connect(openAct, &QAction::triggered, this, &MainWindow::open);

    saveAct = new QAction(tr("&Save"), this);
    saveAct->setShortcut(QKeySequence::Save);
    connect(saveAct, &QAction::triggered, this, &MainWindow::save);

    exitAct = new QAction(tr("E&xit"), this);
    exitAct->setShortcut(tr("Ctrl+Q"));
    connect(exitAct, &QAction::triggered, this, &QWidget::close);

    penColorAct = new QAction(tr("&Pen Color..."), this);
    connect(penColorAct, &QAction::triggered, this, &MainWindow::setPenColor);

    aboutAct = new QAction(tr("&About"), this);
    connect(aboutAct, &QAction::triggered, this, &MainWindow::about);

    aboutQtAct = new QAction(tr("About &Qt"), this);
    connect(aboutQtAct, &QAction::triggered, qApp, &QApplication::aboutQt);
}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(newAct);
    fileMenu->addAction(openAct);
    fileMenu->addAction(saveAct);
    fileMenu->addSeparator();
    fileMenu->addAction(exitAct);

    editMenu = menuBar()->addMenu(tr("&Edit"));
    editMenu->addAction(penColorAct);

    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(aboutAct);
    helpMenu->addAction(aboutQtAct);

    // Добавляем тулбар
    QToolBar *toolBar = addToolBar(tr("Tools"));
    toolBar->addAction(newAct);
    toolBar->addAction(openAct);
    toolBar->addAction(saveAct);
    toolBar->addSeparator();
    toolBar->addAction(penColorAct);
}

void MainWindow::newFile()
{
    iconEditor->setIconImage(QImage(16, 16, QImage::Format_ARGB32));
    iconEditor->setPenColor(Qt::black);
}

void MainWindow::open()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), "",
                                                    tr("Images (*.png *.bmp *.jpg)"));
    if (!fileName.isEmpty())
    {
        QImage image(fileName);
        if (image.isNull())
        {
            QMessageBox::warning(this, tr("Error"), tr("Cannot load image"));
            return;
        }
        iconEditor->setIconImage(image);
    }
}

void MainWindow::save()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Image"), "",
                                                    tr("PNG (*.png);;BMP (*.bmp);;JPG (*.jpg)"));
    if (!fileName.isEmpty())
    {
        if (!iconEditor->iconImage().save(fileName))
            QMessageBox::warning(this, tr("Error"), tr("Cannot save image"));
    }
}

void MainWindow::setPenColor()
{
    QColor color = QColorDialog::getColor(iconEditor->penColor(), this);
    if (color.isValid())
        iconEditor->setPenColor(color);
}

void MainWindow::about()
{
    QMessageBox::about(this, tr("About Icon Editor"),
                       tr("A simple icon editor application."));
}
