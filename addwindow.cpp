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
    std::string k = ui->lineEdit->text().toStdString();
    key = atoi(k.c_str());
    value = ui->lineEdit_2->text();
    close();
}
