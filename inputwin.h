#ifndef INPUTWIN_H
#define INPUTWIN_H

#include <QDialog>

namespace Ui {
class InputWin;
}

class InputWin : public QDialog
{
    Q_OBJECT
    
public:
    explicit InputWin(QWidget *parent = 0);
    ~InputWin();
    QString filename;
    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::InputWin *ui;
};

#endif // INPUTWIN_H
