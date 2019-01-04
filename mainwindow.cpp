#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "particle.h"

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

void MainWindow::on_generateButton_clicked()
{

}

void MainWindow::on_particlesCount_actionTriggered(int action)
{

}

void MainWindow::on_clearButton_clicked()
{

}

void MainWindow::on_runButton_clicked()
{

}

void MainWindow::on_stopButton_clicked()
{

}
