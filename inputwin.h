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
    
private:
    Ui::InputWin *ui;
};

#endif // INPUTWIN_H
