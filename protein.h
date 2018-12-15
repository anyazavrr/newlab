#ifndef PROTEIN_H
#define PROTEIN_H

#include <QDialog>

namespace Ui {
class Protein;
}

class Protein : public QDialog
{
    Q_OBJECT
    
public:
    explicit Protein(QWidget *parent = 0);
    ~Protein();
    QString code;
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Protein *ui;
};

#endif // PROTEIN_H
