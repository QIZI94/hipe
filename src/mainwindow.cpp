#include "../include/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // ui->
    ui->MessageEditBox->setText("Typing something random");
    ui->ChatWidged->setText("QIZI said: nothing because he doesn't have anything to say :D ");
}







MainWindow::~MainWindow()
{
    delete ui;
}
