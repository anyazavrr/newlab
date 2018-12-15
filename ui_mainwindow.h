/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat 15. Dec 20:15:38 2018
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *adding;
    QAction *loading;
    QAction *saving;
    QAction *delete_key;
    QAction *delete_all;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *number_of_objects;
    QPushButton *search;
    QVBoxLayout *verticalLayout_2;
    QLabel *key;
    QLabel *acid;
    QPushButton *create_prot;
    QLabel *protein;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(506, 365);
        adding = new QAction(MainWindow);
        adding->setObjectName(QString::fromUtf8("adding"));
        loading = new QAction(MainWindow);
        loading->setObjectName(QString::fromUtf8("loading"));
        saving = new QAction(MainWindow);
        saving->setObjectName(QString::fromUtf8("saving"));
        delete_key = new QAction(MainWindow);
        delete_key->setObjectName(QString::fromUtf8("delete_key"));
        delete_all = new QAction(MainWindow);
        delete_all->setObjectName(QString::fromUtf8("delete_all"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        number_of_objects = new QLabel(centralWidget);
        number_of_objects->setObjectName(QString::fromUtf8("number_of_objects"));
        number_of_objects->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(number_of_objects);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        search = new QPushButton(centralWidget);
        search->setObjectName(QString::fromUtf8("search"));

        gridLayout->addWidget(search, 2, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        key = new QLabel(centralWidget);
        key->setObjectName(QString::fromUtf8("key"));
        key->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 217, 255);"));

        verticalLayout_2->addWidget(key);

        acid = new QLabel(centralWidget);
        acid->setObjectName(QString::fromUtf8("acid"));
        acid->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(acid);


        gridLayout->addLayout(verticalLayout_2, 3, 1, 1, 1);

        create_prot = new QPushButton(centralWidget);
        create_prot->setObjectName(QString::fromUtf8("create_prot"));

        gridLayout->addWidget(create_prot, 4, 1, 1, 1);

        protein = new QLabel(centralWidget);
        protein->setObjectName(QString::fromUtf8("protein"));

        gridLayout->addWidget(protein, 5, 1, 1, 1);

        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMinimumSize(QSize(25, 42));
        tableWidget->setMaximumSize(QSize(220, 100000));

        gridLayout->addWidget(tableWidget, 1, 0, 5, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 506, 25));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(adding);
        menu->addAction(loading);
        menu->addAction(saving);
        menu->addAction(delete_key);
        menu->addAction(delete_all);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        adding->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", 0, QApplication::UnicodeUTF8));
        loading->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", 0, QApplication::UnicodeUTF8));
        saving->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
        delete_key->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", 0, QApplication::UnicodeUTF8));
        delete_all->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\276\320\261\321\212\320\265\320\272\321\202\320\276\320\262", 0, QApplication::UnicodeUTF8));
        number_of_objects->setText(QString());
        search->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\272\320\273\321\216\321\207\321\203", 0, QApplication::UnicodeUTF8));
        key->setText(QString());
        acid->setText(QString());
        create_prot->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\261\320\265\320\273\320\276\320\272", 0, QApplication::UnicodeUTF8));
        protein->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "key", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "value", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
