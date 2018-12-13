/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 13. Dec 23:28:19 2018
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
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *number_of_objects;
    QPushButton *search;
    QVBoxLayout *verticalLayout_2;
    QLabel *key;
    QLabel *acid;
    QPushButton *create_prot;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(445, 513);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 25 8pt \"Microsoft JhengHei Light\";"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 99)
            tableWidget->setRowCount(99);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(17, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(18, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(19, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(20, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(21, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(22, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(23, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(24, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(25, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(26, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(27, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(28, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(29, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(30, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(31, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(32, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(33, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(34, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(35, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(36, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(37, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(38, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(39, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(40, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(41, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(42, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(43, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(44, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(45, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(46, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(47, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(48, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(49, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(50, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(51, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(52, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(53, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(54, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(55, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(56, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(57, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(58, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(59, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(60, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(61, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(62, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(63, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(64, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(65, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(66, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(67, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(68, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(69, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(70, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(71, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(72, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(73, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(74, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(75, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(76, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(77, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(78, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(79, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(80, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(81, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(82, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(83, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(84, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(85, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(86, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(87, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(88, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(89, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(90, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(91, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(92, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(93, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(94, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(95, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(96, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(97, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(98, __qtablewidgetitem100);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 5, 1);

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

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 445, 25));
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
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu->addAction(action_4);
        menu->addAction(action_5);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", 0, QApplication::UnicodeUTF8));
        action_2->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", 0, QApplication::UnicodeUTF8));
        action_3->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", 0, QApplication::UnicodeUTF8));
        action_4->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", 0, QApplication::UnicodeUTF8));
        action_5->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\270\321\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "key", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "value", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "10", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "11", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "12", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "13", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "14", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "15", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "16", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "17", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "18", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "19", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->verticalHeaderItem(19);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "20", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->verticalHeaderItem(20);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "21", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->verticalHeaderItem(21);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "22", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->verticalHeaderItem(22);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "23", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->verticalHeaderItem(23);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "24", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->verticalHeaderItem(24);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "25", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->verticalHeaderItem(25);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "26", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->verticalHeaderItem(26);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "27", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->verticalHeaderItem(27);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "28", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->verticalHeaderItem(28);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "29", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->verticalHeaderItem(29);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "30", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->verticalHeaderItem(30);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "31", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->verticalHeaderItem(31);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "32", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->verticalHeaderItem(32);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "33", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->verticalHeaderItem(33);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "34", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->verticalHeaderItem(34);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "35", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->verticalHeaderItem(35);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "36", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->verticalHeaderItem(36);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "37", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->verticalHeaderItem(37);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "38", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->verticalHeaderItem(38);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "39", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->verticalHeaderItem(39);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "40", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->verticalHeaderItem(40);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "41", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->verticalHeaderItem(41);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "42", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->verticalHeaderItem(42);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "43", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->verticalHeaderItem(43);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "44", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->verticalHeaderItem(44);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "45", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->verticalHeaderItem(45);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "46", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->verticalHeaderItem(46);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "47", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->verticalHeaderItem(47);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "48", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->verticalHeaderItem(48);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "49", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->verticalHeaderItem(49);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWindow", "50", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->verticalHeaderItem(50);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWindow", "51", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget->verticalHeaderItem(51);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWindow", "52", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget->verticalHeaderItem(52);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWindow", "53", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget->verticalHeaderItem(53);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWindow", "54", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget->verticalHeaderItem(54);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWindow", "55", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget->verticalHeaderItem(55);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWindow", "56", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget->verticalHeaderItem(56);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWindow", "57", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget->verticalHeaderItem(57);
        ___qtablewidgetitem59->setText(QApplication::translate("MainWindow", "58", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget->verticalHeaderItem(58);
        ___qtablewidgetitem60->setText(QApplication::translate("MainWindow", "59", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget->verticalHeaderItem(59);
        ___qtablewidgetitem61->setText(QApplication::translate("MainWindow", "60", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget->verticalHeaderItem(60);
        ___qtablewidgetitem62->setText(QApplication::translate("MainWindow", "61", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget->verticalHeaderItem(61);
        ___qtablewidgetitem63->setText(QApplication::translate("MainWindow", "62", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget->verticalHeaderItem(62);
        ___qtablewidgetitem64->setText(QApplication::translate("MainWindow", "63", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget->verticalHeaderItem(63);
        ___qtablewidgetitem65->setText(QApplication::translate("MainWindow", "64", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget->verticalHeaderItem(64);
        ___qtablewidgetitem66->setText(QApplication::translate("MainWindow", "65", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidget->verticalHeaderItem(65);
        ___qtablewidgetitem67->setText(QApplication::translate("MainWindow", "66", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidget->verticalHeaderItem(66);
        ___qtablewidgetitem68->setText(QApplication::translate("MainWindow", "67", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidget->verticalHeaderItem(67);
        ___qtablewidgetitem69->setText(QApplication::translate("MainWindow", "68", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem70 = tableWidget->verticalHeaderItem(68);
        ___qtablewidgetitem70->setText(QApplication::translate("MainWindow", "69", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem71 = tableWidget->verticalHeaderItem(69);
        ___qtablewidgetitem71->setText(QApplication::translate("MainWindow", "70", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem72 = tableWidget->verticalHeaderItem(70);
        ___qtablewidgetitem72->setText(QApplication::translate("MainWindow", "71", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem73 = tableWidget->verticalHeaderItem(71);
        ___qtablewidgetitem73->setText(QApplication::translate("MainWindow", "72", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem74 = tableWidget->verticalHeaderItem(72);
        ___qtablewidgetitem74->setText(QApplication::translate("MainWindow", "73", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem75 = tableWidget->verticalHeaderItem(73);
        ___qtablewidgetitem75->setText(QApplication::translate("MainWindow", "74", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem76 = tableWidget->verticalHeaderItem(74);
        ___qtablewidgetitem76->setText(QApplication::translate("MainWindow", "75", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem77 = tableWidget->verticalHeaderItem(75);
        ___qtablewidgetitem77->setText(QApplication::translate("MainWindow", "76", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem78 = tableWidget->verticalHeaderItem(76);
        ___qtablewidgetitem78->setText(QApplication::translate("MainWindow", "77", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem79 = tableWidget->verticalHeaderItem(77);
        ___qtablewidgetitem79->setText(QApplication::translate("MainWindow", "78", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem80 = tableWidget->verticalHeaderItem(78);
        ___qtablewidgetitem80->setText(QApplication::translate("MainWindow", "79", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem81 = tableWidget->verticalHeaderItem(79);
        ___qtablewidgetitem81->setText(QApplication::translate("MainWindow", "80", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem82 = tableWidget->verticalHeaderItem(80);
        ___qtablewidgetitem82->setText(QApplication::translate("MainWindow", "81", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem83 = tableWidget->verticalHeaderItem(81);
        ___qtablewidgetitem83->setText(QApplication::translate("MainWindow", "82", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem84 = tableWidget->verticalHeaderItem(82);
        ___qtablewidgetitem84->setText(QApplication::translate("MainWindow", "83", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem85 = tableWidget->verticalHeaderItem(83);
        ___qtablewidgetitem85->setText(QApplication::translate("MainWindow", "84", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem86 = tableWidget->verticalHeaderItem(84);
        ___qtablewidgetitem86->setText(QApplication::translate("MainWindow", "85", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem87 = tableWidget->verticalHeaderItem(85);
        ___qtablewidgetitem87->setText(QApplication::translate("MainWindow", "86", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem88 = tableWidget->verticalHeaderItem(86);
        ___qtablewidgetitem88->setText(QApplication::translate("MainWindow", "87", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem89 = tableWidget->verticalHeaderItem(87);
        ___qtablewidgetitem89->setText(QApplication::translate("MainWindow", "88", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem90 = tableWidget->verticalHeaderItem(88);
        ___qtablewidgetitem90->setText(QApplication::translate("MainWindow", "89", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem91 = tableWidget->verticalHeaderItem(89);
        ___qtablewidgetitem91->setText(QApplication::translate("MainWindow", "90", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem92 = tableWidget->verticalHeaderItem(90);
        ___qtablewidgetitem92->setText(QApplication::translate("MainWindow", "91", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem93 = tableWidget->verticalHeaderItem(91);
        ___qtablewidgetitem93->setText(QApplication::translate("MainWindow", "92", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem94 = tableWidget->verticalHeaderItem(92);
        ___qtablewidgetitem94->setText(QApplication::translate("MainWindow", "93", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem95 = tableWidget->verticalHeaderItem(93);
        ___qtablewidgetitem95->setText(QApplication::translate("MainWindow", "94", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem96 = tableWidget->verticalHeaderItem(94);
        ___qtablewidgetitem96->setText(QApplication::translate("MainWindow", "95", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem97 = tableWidget->verticalHeaderItem(95);
        ___qtablewidgetitem97->setText(QApplication::translate("MainWindow", "96", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem98 = tableWidget->verticalHeaderItem(96);
        ___qtablewidgetitem98->setText(QApplication::translate("MainWindow", "97", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem99 = tableWidget->verticalHeaderItem(97);
        ___qtablewidgetitem99->setText(QApplication::translate("MainWindow", "98", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem100 = tableWidget->verticalHeaderItem(98);
        ___qtablewidgetitem100->setText(QApplication::translate("MainWindow", "99", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\276\320\261\321\212\320\265\320\272\321\202\320\276\320\262", 0, QApplication::UnicodeUTF8));
        number_of_objects->setText(QString());
        search->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\272\320\273\321\216\321\207\321\203", 0, QApplication::UnicodeUTF8));
        key->setText(QString());
        acid->setText(QString());
        create_prot->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\261\320\265\320\273\320\276\320\272", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
