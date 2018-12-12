#include "searchwin.h"
#include "ui_searchwin.h"

SearchWin::SearchWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchWin)
{
    ui->setupUi(this);
}

SearchWin::~SearchWin()
{
    delete ui;
}

void SearchWin::on_pushButton_2_clicked()
{
    close();
}

void SearchWin::on_pushButton_clicked()
{
    key = ui->lineEdit->text();
    close();
}
