#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    row = 1;
    column = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_triggered()
{
    AddWindow win;
    win.setModal(true);
    win.exec();
    QTableWidgetItem *item;
    *item = QTableWidgetItem(win.key);
    ui->tableWidget->setItem(row, column, item);
    column++;
    QTableWidgetItem *item2;
    *item2 = QTableWidgetItem(win.value);
    ui->tableWidget->setItem(row, column, item);
    row++;
    column--;

}
