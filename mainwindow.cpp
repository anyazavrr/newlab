#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addwindow.h"
#include "searchwin.h"
#include "inputwin.h"
#include <fstream>

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
    if (win.key!="" && mytable.check_key(win.key.toStdString())==false)
    {
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
}

void MainWindow::on_search_clicked()
{
    SearchWin win;
    win.setModal(true);
    win.exec();
    if (win.key!="")
    {
        QString value = QChar(*(mytable[win.key.toStdString()]));
        ui->key->setText(win.key);
        ui->acid->setText(value);
    }
}

void MainWindow::on_action_2_triggered()
{


    InputWin win;
    win.setModal(true);
    win.exec();
    if(win.filename!="")
    {
        mytable.deleteall();
        ifstream file;
        QByteArray ba = win.filename.toLatin1();
        const char *c = ba.data();
        file.open(c);
        file>>mytable;
        Iterator<char,string> iter = mytable.getbegin_iter();
        while(!(iter == mytable.getend_iter()))
        {
            QTableWidgetItem *item = new QTableWidgetItem();
            QByteArray ba1 = win.filename.toLatin1();
            const char *c1 = ba1.data();
            item->setText(QString::fromUtf8(c1));
            ui->tableWidget->setItem(row, column, item);
            column++;
            QTableWidgetItem *item2 = new QTableWidgetItem();
            item2->setText(QChar(iter.getvalue()));
            ui->tableWidget->setItem(row, column, item2);
            column--;
            row++;
        }
        ui->number_of_objects->setText(QString::number(mytable.count()));
        file.close();
    }

}


void MainWindow::on_action_3_triggered()
{
    InputWin win;
    win.setModal(true);
    win.exec();
    if(win.filename!="")
    {
        ofstream file;
        QByteArray ba = win.filename.toLatin1();
        const char *c = ba.data();
        file.open(c);
        file<<mytable;
        file.close();
    }
}




void MainWindow::on_create_prot_clicked()//not work
{
    Iterator<char,string> iter = mytable.getbegin_iter();
    QString s;
    int i = 0;
    do
    {
        s = s + QChar(iter.getvalue());
        if(iter == mytable.getend_iter()) i=1;
        ++iter;
    }while(i!=1);
    ui->label_2->setText(s);
}

void MainWindow::on_action_5_triggered()//не робит
{
    mytable.deleteall();
    column = 0;
    QTableWidgetItem *item = new QTableWidgetItem();
    item->setText("");
    while(row>=0)
    {
        ui->tableWidget->setItem(row, column, item);
        column++;
        ui->tableWidget->setItem(row, column, item);
        column--;
        row--;
    }

}
