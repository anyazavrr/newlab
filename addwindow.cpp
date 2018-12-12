#include "addwindow.h"
#include "ui_addwindow.h"

AddWindow::AddWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddWindow)
{
    ui->setupUi(this);
}

AddWindow::~AddWindow()
{
    delete ui;
}

void AddWindow::on_pushButton_2_clicked()
{
    close();
}

void AddWindow::on_pushButton_clicked()
{
    key = ui->lineEdit->text();
    value = ui->lineEdit_2->text();
    close();
}
