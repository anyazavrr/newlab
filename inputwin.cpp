#include "inputwin.h"
#include "ui_inputwin.h"

InputWin::InputWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputWin)
{
    ui->setupUi(this);
    filename = "";
}

InputWin::~InputWin()
{
    delete ui;
}

void InputWin::on_pushButton_2_clicked()
{
    close();
}

void InputWin::on_pushButton_clicked()
{
    filename = ui->lineEdit->text();
    close();
}
