#ifndef ADDWINDOW_H
#define ADDWINDOW_H
#include <QString>
#include <QDialog>

namespace Ui {
class AddWindow;
}

class AddWindow : public QDialog
{
    Q_OBJECT
    
public:
    explicit AddWindow(QWidget *parent = 0);
    ~AddWindow();
    QString key;
    QString value;

    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddWindow *ui;
};

#endif // ADDWINDOW_H
