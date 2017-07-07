#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->label, &MyLabel::pressed, this, &MainWindow::whateverYouWantToDo);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::whateverYouWantToDo()
{
    QMessageBox::information(this, "I'm dialog", "Congrats! You've just did whatever you wanted!");
}
