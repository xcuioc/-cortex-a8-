/********************************************************************************
** Form generated from reading UI file 'DeleteCard.ui'
**
** Created: Mon Sep 2 17:24:19 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECARD_H
#define UI_DELETECARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteCard
{
public:
    QLabel *lb_deletetitle;
    QPushButton *btn_back;
    QWidget *layoutWidget;
    QHBoxLayout *db_select;
    QLabel *lb_db;
    QLineEdit *ted_dbpath;
    QPushButton *btn_dbselect;
    QPushButton *btn_dbrefresh;
    QTableWidget *db_table;
    QWidget *layoutWidget1;
    QHBoxLayout *operation;
    QPushButton *ptn_release;
    QPushButton *ptn_delete;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_start;
    QLabel *lb_cardID;
    QLineEdit *ted_showID;
    QLabel *label;
    QLineEdit *ted_showName;

    void setupUi(QWidget *DeleteCard)
    {
        if (DeleteCard->objectName().isEmpty())
            DeleteCard->setObjectName(QString::fromUtf8("DeleteCard"));
        DeleteCard->setEnabled(true);
        DeleteCard->resize(648, 374);
        lb_deletetitle = new QLabel(DeleteCard);
        lb_deletetitle->setObjectName(QString::fromUtf8("lb_deletetitle"));
        lb_deletetitle->setGeometry(QRect(230, 10, 171, 31));
        btn_back = new QPushButton(DeleteCard);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(0, 10, 93, 28));
        layoutWidget = new QWidget(DeleteCard);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 50, 631, 30));
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

        db_table = new QTableWidget(DeleteCard);
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
        db_table->setGeometry(QRect(0, 90, 631, 161));
        db_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        db_table->setSelectionMode(QAbstractItemView::SingleSelection);
        db_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        layoutWidget1 = new QWidget(DeleteCard);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 260, 631, 30));
        operation = new QHBoxLayout(layoutWidget1);
        operation->setObjectName(QString::fromUtf8("operation"));
        operation->setContentsMargins(0, 0, 0, 0);
        ptn_release = new QPushButton(layoutWidget1);
        ptn_release->setObjectName(QString::fromUtf8("ptn_release"));

        operation->addWidget(ptn_release);

        ptn_delete = new QPushButton(layoutWidget1);
        ptn_delete->setObjectName(QString::fromUtf8("ptn_delete"));

        operation->addWidget(ptn_delete);

        layoutWidget2 = new QWidget(DeleteCard);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 310, 631, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_start = new QPushButton(layoutWidget2);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        btn_start->setFont(font);

        horizontalLayout->addWidget(btn_start);

        lb_cardID = new QLabel(layoutWidget2);
        lb_cardID->setObjectName(QString::fromUtf8("lb_cardID"));

        horizontalLayout->addWidget(lb_cardID);

        ted_showID = new QLineEdit(layoutWidget2);
        ted_showID->setObjectName(QString::fromUtf8("ted_showID"));
        ted_showID->setEnabled(false);
        ted_showID->setMinimumSize(QSize(175, 25));

        horizontalLayout->addWidget(ted_showID);

        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        ted_showName = new QLineEdit(layoutWidget2);
        ted_showName->setObjectName(QString::fromUtf8("ted_showName"));
        ted_showName->setEnabled(false);

        horizontalLayout->addWidget(ted_showName);


        retranslateUi(DeleteCard);

        QMetaObject::connectSlotsByName(DeleteCard);
    } // setupUi

    void retranslateUi(QWidget *DeleteCard)
    {
        DeleteCard->setWindowTitle(QApplication::translate("DeleteCard", "Form", 0, QApplication::UnicodeUTF8));
        lb_deletetitle->setText(QApplication::translate("DeleteCard", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\346\263\250\351\224\200\344\277\241\346\201\257\345\271\263\345\217\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QApplication::translate("DeleteCard", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        lb_db->setText(QApplication::translate("DeleteCard", "\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        btn_dbselect->setText(QApplication::translate("DeleteCard", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btn_dbrefresh->setText(QApplication::translate("DeleteCard", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = db_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DeleteCard", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = db_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DeleteCard", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = db_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DeleteCard", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = db_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DeleteCard", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        ptn_release->setText(QApplication::translate("DeleteCard", "\346\263\250\351\224\200\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        ptn_delete->setText(QApplication::translate("DeleteCard", "\345\210\240\351\231\244\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        btn_start->setText(QApplication::translate("DeleteCard", "\350\257\273\345\215\241", 0, QApplication::UnicodeUTF8));
        lb_cardID->setText(QApplication::translate("DeleteCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\345\215\241\345\217\267\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DeleteCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DeleteCard: public Ui_DeleteCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECARD_H
