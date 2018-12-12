#include "inputwin.h"
#include "ui_inputwin.h"

InputWin::InputWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputWin)
{
    ui->setupUi(this);
}

InputWin::~InputWin()
{
    delete ui;
}
