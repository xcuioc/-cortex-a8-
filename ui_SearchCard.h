/********************************************************************************
** Form generated from reading UI file 'SearchCard.ui'
**
** Created: Mon Sep 2 17:24:18 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHCARD_H
#define UI_SEARCHCARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchCard
{
public:
    QLabel *lb_searchtitle;
    QPushButton *pbn_back;
    QGroupBox *groupBox_2;
    QTableWidget *logTable;
    QTableWidget *employee_table;
    QWidget *layoutWidget;
    QHBoxLayout *db_select;
    QLabel *lb_db;
    QLineEdit *ted_dbpath;
    QPushButton *btn_dbselect;
    QPushButton *btn_dbrefresh;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_cardID;
    QLineEdit *ted_showNumber;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbn_search;
    QPushButton *pbn_searchLog;

    void setupUi(QWidget *SearchCard)
    {
        if (SearchCard->objectName().isEmpty())
            SearchCard->setObjectName(QString::fromUtf8("SearchCard"));
        SearchCard->setWindowModality(Qt::NonModal);
        SearchCard->resize(569, 581);
        SearchCard->setContextMenuPolicy(Qt::NoContextMenu);
        SearchCard->setLayoutDirection(Qt::LeftToRight);
        lb_searchtitle = new QLabel(SearchCard);
        lb_searchtitle->setObjectName(QString::fromUtf8("lb_searchtitle"));
        lb_searchtitle->setGeometry(QRect(190, 10, 171, 31));
        pbn_back = new QPushButton(SearchCard);
        pbn_back->setObjectName(QString::fromUtf8("pbn_back"));
        pbn_back->setGeometry(QRect(0, 0, 93, 28));
        groupBox_2 = new QGroupBox(SearchCard);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 340, 551, 231));
        logTable = new QTableWidget(groupBox_2);
        if (logTable->columnCount() < 3)
            logTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        logTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        logTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        logTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        logTable->setObjectName(QString::fromUtf8("logTable"));
        logTable->setGeometry(QRect(0, 20, 541, 191));
        logTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        logTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        employee_table = new QTableWidget(SearchCard);
        if (employee_table->columnCount() < 4)
            employee_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        employee_table->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        employee_table->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        employee_table->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        employee_table->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        employee_table->setObjectName(QString::fromUtf8("employee_table"));
        employee_table->setGeometry(QRect(0, 140, 561, 192));
        employee_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        employee_table->setSelectionMode(QAbstractItemView::SingleSelection);
        employee_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        layoutWidget = new QWidget(SearchCard);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 50, 561, 30));
        db_select = new QHBoxLayout(layoutWidget);
        db_select->setSpacing(6);
        db_select->setContentsMargins(11, 11, 11, 11);
        db_select->setObjectName(QString::fromUtf8("db_select"));
        db_select->setContentsMargins(0, 0, 0, 0);
        lb_db = new QLabel(layoutWidget);
        lb_db->setObjectName(QString::fromUtf8("lb_db"));

        db_select->addWidget(lb_db);

        ted_dbpath = new QLineEdit(layoutWidget);
        ted_dbpath->setObjectName(QString::fromUtf8("ted_dbpath"));
        ted_dbpath->setReadOnly(true);

        db_select->addWidget(ted_dbpath);

        btn_dbselect = new QPushButton(layoutWidget);
        btn_dbselect->setObjectName(QString::fromUtf8("btn_dbselect"));

        db_select->addWidget(btn_dbselect);

        btn_dbrefresh = new QPushButton(layoutWidget);
        btn_dbrefresh->setObjectName(QString::fromUtf8("btn_dbrefresh"));

        db_select->addWidget(btn_dbrefresh);

        widget = new QWidget(SearchCard);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 90, 561, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lb_cardID = new QLabel(widget);
        lb_cardID->setObjectName(QString::fromUtf8("lb_cardID"));

        horizontalLayout->addWidget(lb_cardID);

        ted_showNumber = new QLineEdit(widget);
        ted_showNumber->setObjectName(QString::fromUtf8("ted_showNumber"));

        horizontalLayout->addWidget(ted_showNumber);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbn_search = new QPushButton(widget);
        pbn_search->setObjectName(QString::fromUtf8("pbn_search"));

        horizontalLayout->addWidget(pbn_search);

        pbn_searchLog = new QPushButton(widget);
        pbn_searchLog->setObjectName(QString::fromUtf8("pbn_searchLog"));

        horizontalLayout->addWidget(pbn_searchLog);

        pbn_search->raise();
        lb_cardID->raise();
        lb_searchtitle->raise();
        pbn_back->raise();
        pbn_searchLog->raise();
        employee_table->raise();
        layoutWidget->raise();
        ted_showNumber->raise();
        groupBox_2->raise();

        retranslateUi(SearchCard);

        QMetaObject::connectSlotsByName(SearchCard);
    } // setupUi

    void retranslateUi(QWidget *SearchCard)
    {
        SearchCard->setWindowTitle(QApplication::translate("SearchCard", "SearchCard", 0, QApplication::UnicodeUTF8));
        lb_searchtitle->setText(QApplication::translate("SearchCard", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\346\237\245\350\257\242\344\277\241\346\201\257\345\271\263\345\217\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_back->setText(QApplication::translate("SearchCard", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("SearchCard", "\350\200\203\345\213\244\346\227\245\345\277\227\350\241\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = logTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SearchCard", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = logTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SearchCard", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = logTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SearchCard", "\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = employee_table->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("SearchCard", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = employee_table->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("SearchCard", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = employee_table->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("SearchCard", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = employee_table->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("SearchCard", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        lb_db->setText(QApplication::translate("SearchCard", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\346\225\260\346\215\256\345\272\223</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_dbselect->setText(QApplication::translate("SearchCard", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btn_dbrefresh->setText(QApplication::translate("SearchCard", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        lb_cardID->setText(QApplication::translate("SearchCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\345\215\241\345\217\267\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_search->setText(QApplication::translate("SearchCard", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        pbn_searchLog->setText(QApplication::translate("SearchCard", "\346\237\245\347\234\213\346\227\245\345\277\227", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchCard: public Ui_SearchCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCARD_H
