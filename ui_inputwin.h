/********************************************************************************
** Form generated from reading UI file 'inputwin.ui'
**
** Created: Wed 12. Dec 23:42:29 2018
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTWIN_H
#define UI_INPUTWIN_H

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

class Ui_InputWin
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *InputWin)
    {
        if (InputWin->objectName().isEmpty())
            InputWin->setObjectName(QString::fromUtf8("InputWin"));
        InputWin->resize(400, 300);
        label = new QLabel(InputWin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 90, 131, 16));
        lineEdit = new QLineEdit(InputWin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 130, 113, 22));
        pushButton = new QPushButton(InputWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 190, 93, 28));
        pushButton_2 = new QPushButton(InputWin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 190, 93, 28));

        retranslateUi(InputWin);

        QMetaObject::connectSlotsByName(InputWin);
    } // setupUi

    void retranslateUi(QDialog *InputWin)
    {
        InputWin->setWindowTitle(QApplication::translate("InputWin", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("InputWin", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \321\204\320\260\320\271\320\273\320\260", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("InputWin", "\320\236\320\272", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("InputWin", "\320\236\321\202\320\274\320\265\320\275\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InputWin: public Ui_InputWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTWIN_H
