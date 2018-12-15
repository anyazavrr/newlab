/********************************************************************************
** Form generated from reading UI file 'protein.ui'
**
** Created: Fri 14. Dec 20:07:47 2018
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROTEIN_H
#define UI_PROTEIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Protein
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *Protein)
    {
        if (Protein->objectName().isEmpty())
            Protein->setObjectName(QString::fromUtf8("Protein"));
        Protein->resize(400, 300);
        pushButton = new QPushButton(Protein);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 200, 93, 28));
        pushButton_2 = new QPushButton(Protein);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 200, 93, 28));
        lineEdit = new QLineEdit(Protein);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 150, 201, 22));
        label = new QLabel(Protein);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 110, 151, 16));

        retranslateUi(Protein);

        QMetaObject::connectSlotsByName(Protein);
    } // setupUi

    void retranslateUi(QDialog *Protein)
    {
        Protein->setWindowTitle(QApplication::translate("Protein", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Protein", "\320\236\320\272", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Protein", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Protein", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\202\321\200\320\276\320\272\321\203 \320\272\320\276\320\264\320\276\320\275\320\276\320\262", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Protein: public Ui_Protein {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROTEIN_H
