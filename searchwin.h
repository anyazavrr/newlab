#ifndef SEARCHWIN_H
#define SEARCHWIN_H

#include <QDialog>

namespace Ui {
class SearchWin;
}

class SearchWin : public QDialog
{
    Q_OBJECT
    
public:
    explicit SearchWin(QWidget *parent = 0);
    ~SearchWin();
    QString key;
    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::SearchWin *ui;
};

#endif // SEARCHWIN_H
