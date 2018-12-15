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
    void on_adding_triggered();

    void on_search_clicked();

    void on_loading_triggered();

    void on_saving_triggered();


    void on_create_prot_clicked();

    void on_delete_all_triggered();

    void on_delete_key_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
