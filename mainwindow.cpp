#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addwindow.h"
#include "searchwin.h"
#include "inputwin.h"
#include <fstream>
#include "protein.h"
#include <QString>
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

void MainWindow::on_adding_triggered()//add
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

void MainWindow::on_loading_triggered()//read from file
{


    InputWin win;
    win.setModal(true);
    win.exec();
    if(win.filename!="")
    {
        mytable.delete_all();
        ifstream file;
        QByteArray ba = win.filename.toLatin1();
        const char *c = ba.data();
        file.open(c);
        file>>mytable;
        int i = 0;
        Iterator<char,string> iter = mytable.getbegin_iter();
        do
        {
            QTableWidgetItem *item = new QTableWidgetItem();
            const char *c1 = iter.get_key().c_str();
            item->setText(QString::fromUtf8(c1));
            ui->tableWidget->setItem(row, column, item);
            column++;
            QTableWidgetItem *item2 = new QTableWidgetItem();
            item2->setText(QChar(iter.get_value()));
            ui->tableWidget->setItem(row, column, item2);
            column--;
            row++;
            if(iter == mytable.getend_iter()) i=1;
            ++iter;
        }while(i!=1);
        ui->number_of_objects->setText(QString::number(mytable.count()));
        file.close();
    }

}


void MainWindow::on_saving_triggered()//save to file
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




void MainWindow::on_create_prot_clicked()
{
    Protein win;
    win.setModal(true);
    win.exec();
    if (win.code!="")
    {
        std::string str = win.code.toStdString();
        const char* k = str.c_str();
        int i;
        int d = str.length();
        std::string acid = "";
        for(i=0;i+2<d;i = i+3)
        {
            std::string s = str.substr(i,3);
            if(mytable.check_key(s)==true)
            {
                acid = acid + *(mytable[s]);
            }
        }
        const char *c1 = acid.c_str();
        ui->protein->setText(QString::fromUtf8(c1));
    }
}

void MainWindow::on_delete_all_triggered()//del all
{
    mytable.delete_all();
    ui->tableWidget->clearContents();
    row = 0;
    column = 0;
    ui->number_of_objects->setText("0");
}

void MainWindow::on_delete_key_triggered()//del 1
{
    SearchWin win;
    win.setModal(true);
    win.exec();
    if (win.key!="")
    {
        mytable.delete_key(win.key.toStdString());
        int i = 0;
        ui->tableWidget->clearContents();
        row = 0;
        column = 0;
        if(mytable.count()!=0)
        {
            Iterator<char,string> iter = mytable.getbegin_iter();
            do
            {
                QTableWidgetItem *item = new QTableWidgetItem();
                const char *c1 = iter.get_key().c_str();
                item->setText(QString::fromUtf8(c1));
                ui->tableWidget->setItem(row, column, item);
                column++;
                QTableWidgetItem *item2 = new QTableWidgetItem();
                item2->setText(QChar(iter.get_value()));
                ui->tableWidget->setItem(row, column, item2);
                column--;
                row++;
                if(iter == mytable.getend_iter()) i=1;
                ++iter;
            }while(i!=1);
        }
        ui->number_of_objects->setText(QString::number(mytable.count()));
    }
}
