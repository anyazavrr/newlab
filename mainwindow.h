#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "entery.h"
#include "table.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    table<char,string> mytable;
    int row;
    int column;
    
private slots:
    void on_action_triggered();

    void on_search_clicked();

    void on_action_2_triggered();

    void on_action_3_triggered();


    void on_create_prot_clicked();

    void on_action_5_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
