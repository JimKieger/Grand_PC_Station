#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //Select Service

}

void MainWindow::on_pushButton_2_clicked()
{
    //Select Games

}

void MainWindow::on_pushButton_3_clicked()
{
    //Main Window reset

}
