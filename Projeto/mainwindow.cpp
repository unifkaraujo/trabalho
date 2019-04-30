#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#define MAX 10

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
    alocacao form2; form2.exec();
}
