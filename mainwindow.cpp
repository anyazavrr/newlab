#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addwindow.h"
#include "searchwin.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    row = 0;
    column = 0;
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
    mytable.add(win.value.toStdString()[0], win.key.toStdString());
    QTableWidgetItem *item = new QTableWidgetItem();
    item->setText(win.key);
    ui->tableWidget->setItem(row, column, item);
    column++;
    QTableWidgetItem *item2 = new QTableWidgetItem();
    item2->setText(win.value);
    ui->tableWidget->setItem(row, column, item2);
    column--;
    row++;
    ui->number_of_objects->setText(QString::number(mytable.count()));

}

void MainWindow::on_search_clicked()
{
    SearchWin win;
    win.setModal(true);
    win.exec();
    QString value = QChar(*(mytable[win.key.toStdString()]));
    ui->key->setText(win.key);
    ui->acid->setText(value);
}
