#include "protein.h"
#include "ui_protein.h"

Protein::Protein(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Protein)
{
    ui->setupUi(this);
    code = "";
}

Protein::~Protein()
{
    delete ui;
}

void Protein::on_pushButton_clicked()
{
    code = ui->lineEdit->text();
    close();
}

void Protein::on_pushButton_2_clicked()
{
    close();
}
