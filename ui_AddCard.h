/********************************************************************************
** Form generated from reading UI file 'AddCard.ui'
**
** Created: Mon Sep 9 17:38:38 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCARD_H
#define UI_ADDCARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddCard
{
public:
    QLabel *lb_deletetitle;
    QPushButton *pbn_back;
    QWidget *layoutWidget;
    QHBoxLayout *db_select;
    QLabel *lb_db;
    QLineEdit *ted_dbpath;
    QPushButton *btn_dbselect;
    QPushButton *btn_dbrefresh;
    QTableWidget *db_table;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *pbn_start;
    QLabel *lb_cardID;
    QLineEdit *ted_showNumber;
    QPushButton *pbn_addName;
    QLabel *lb_cardName;
    QLineEdit *ted_showName;
    QLabel *lb_cardSex;
    QComboBox *ted_showSex;

    void setupUi(QWidget *AddCard)
    {
        if (AddCard->objectName().isEmpty())
            AddCard->setObjectName(QString::fromUtf8("AddCard"));
        AddCard->resize(650, 433);
        lb_deletetitle = new QLabel(AddCard);
        lb_deletetitle->setObjectName(QString::fromUtf8("lb_deletetitle"));
        lb_deletetitle->setGeometry(QRect(210, 10, 151, 31));
        pbn_back = new QPushButton(AddCard);
        pbn_back->setObjectName(QString::fromUtf8("pbn_back"));
        pbn_back->setGeometry(QRect(0, 10, 93, 28));
        layoutWidget = new QWidget(AddCard);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 60, 631, 30));
        db_select = new QHBoxLayout(layoutWidget);
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

        db_table = new QTableWidget(AddCard);
        if (db_table->columnCount() < 4)
            db_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        db_table->setObjectName(QString::fromUtf8("db_table"));
        db_table->setGeometry(QRect(0, 110, 631, 161));
        db_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        db_table->setSelectionMode(QAbstractItemView::SingleSelection);
        db_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        layoutWidget1 = new QWidget(AddCard);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 290, 631, 101));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pbn_start = new QPushButton(layoutWidget1);
        pbn_start->setObjectName(QString::fromUtf8("pbn_start"));

        gridLayout->addWidget(pbn_start, 0, 0, 1, 1);

        lb_cardID = new QLabel(layoutWidget1);
        lb_cardID->setObjectName(QString::fromUtf8("lb_cardID"));

        gridLayout->addWidget(lb_cardID, 0, 1, 1, 1);

        ted_showNumber = new QLineEdit(layoutWidget1);
        ted_showNumber->setObjectName(QString::fromUtf8("ted_showNumber"));
        ted_showNumber->setEnabled(false);

        gridLayout->addWidget(ted_showNumber, 0, 2, 1, 3);

        pbn_addName = new QPushButton(layoutWidget1);
        pbn_addName->setObjectName(QString::fromUtf8("pbn_addName"));

        gridLayout->addWidget(pbn_addName, 1, 0, 1, 1);

        lb_cardName = new QLabel(layoutWidget1);
        lb_cardName->setObjectName(QString::fromUtf8("lb_cardName"));

        gridLayout->addWidget(lb_cardName, 1, 1, 1, 1);

        ted_showName = new QLineEdit(layoutWidget1);
        ted_showName->setObjectName(QString::fromUtf8("ted_showName"));

        gridLayout->addWidget(ted_showName, 1, 2, 1, 1);

        lb_cardSex = new QLabel(layoutWidget1);
        lb_cardSex->setObjectName(QString::fromUtf8("lb_cardSex"));

        gridLayout->addWidget(lb_cardSex, 1, 3, 1, 1);

        ted_showSex = new QComboBox(layoutWidget1);
        ted_showSex->setObjectName(QString::fromUtf8("ted_showSex"));
        ted_showSex->setMinimumSize(QSize(140, 0));

        gridLayout->addWidget(ted_showSex, 1, 4, 1, 1);


        retranslateUi(AddCard);

        QMetaObject::connectSlotsByName(AddCard);
    } // setupUi

    void retranslateUi(QWidget *AddCard)
    {
        AddCard->setWindowTitle(QApplication::translate("AddCard", "Form", 0, QApplication::UnicodeUTF8));
        lb_deletetitle->setText(QApplication::translate("AddCard", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\346\267\273\345\212\240\344\277\241\346\201\257\345\271\263\345\217\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_back->setText(QApplication::translate("AddCard", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        lb_db->setText(QApplication::translate("AddCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\346\225\260\346\215\256\345\272\223</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_dbselect->setText(QApplication::translate("AddCard", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btn_dbrefresh->setText(QApplication::translate("AddCard", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = db_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AddCard", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = db_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AddCard", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = db_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("AddCard", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = db_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("AddCard", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        pbn_start->setText(QApplication::translate("AddCard", "\350\257\273\345\215\241", 0, QApplication::UnicodeUTF8));
        lb_cardID->setText(QApplication::translate("AddCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">  \345\215\241\345\217\267\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_addName->setText(QApplication::translate("AddCard", "\347\231\273\350\256\260", 0, QApplication::UnicodeUTF8));
        lb_cardName->setText(QApplication::translate("AddCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">     \345\247\223\345\220\215\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_cardSex->setText(QApplication::translate("AddCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">      \346\200\247\345\210\253\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ted_showSex->clear();
        ted_showSex->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("AddCard", "\347\224\267", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AddCard", "\345\245\263", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class AddCard: public Ui_AddCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCARD_H
