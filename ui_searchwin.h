/********************************************************************************
** Form generated from reading UI file 'searchwin.ui'
**
** Created: Wed 12. Dec 11:01:23 2018
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWIN_H
#define UI_SEARCHWIN_H

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

class Ui_SearchWin
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *SearchWin)
    {
        if (SearchWin->objectName().isEmpty())
            SearchWin->setObjectName(QString::fromUtf8("SearchWin"));
        SearchWin->resize(400, 300);
        pushButton = new QPushButton(SearchWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 170, 93, 28));
        pushButton_2 = new QPushButton(SearchWin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 170, 93, 28));
        lineEdit = new QLineEdit(SearchWin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 90, 113, 22));
        label = new QLabel(SearchWin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 60, 121, 16));

        retranslateUi(SearchWin);

        QMetaObject::connectSlotsByName(SearchWin);
    } // setupUi

    void retranslateUi(QDialog *SearchWin)
    {
        SearchWin->setWindowTitle(QApplication::translate("SearchWin", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SearchWin", "\320\236\320\272", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("SearchWin", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SearchWin", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\273\321\216\321\207", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchWin: public Ui_SearchWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWIN_H
