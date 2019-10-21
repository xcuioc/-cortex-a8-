/********************************************************************************
** Form generated from reading UI file 'EditCard.ui'
**
** Created: Mon Sep 2 17:24:19 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCARD_H
#define UI_EDITCARD_H

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

class Ui_EditCard
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
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pbn_start;
    QLabel *lb_cardID;
    QLineEdit *ted_updateNumber;
    QLabel *lb_cardName;
    QLineEdit *ted_updateName;
    QPushButton *pbn_update;
    QLabel *lb_cardSex;
    QComboBox *cb_updateSex;
    QLabel *lb_cardState;
    QComboBox *cb_updateState;

    void setupUi(QWidget *EditCard)
    {
        if (EditCard->objectName().isEmpty())
            EditCard->setObjectName(QString::fromUtf8("EditCard"));
        EditCard->resize(640, 380);
        lb_deletetitle = new QLabel(EditCard);
        lb_deletetitle->setObjectName(QString::fromUtf8("lb_deletetitle"));
        lb_deletetitle->setGeometry(QRect(210, 0, 181, 41));
        pbn_back = new QPushButton(EditCard);
        pbn_back->setObjectName(QString::fromUtf8("pbn_back"));
        pbn_back->setGeometry(QRect(0, 10, 93, 28));
        layoutWidget = new QWidget(EditCard);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 50, 621, 30));
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

        db_table = new QTableWidget(EditCard);
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
        db_table->setGeometry(QRect(0, 100, 621, 161));
        db_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        db_table->setSelectionMode(QAbstractItemView::SingleSelection);
        db_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        widget = new QWidget(EditCard);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 280, 621, 69));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pbn_start = new QPushButton(widget);
        pbn_start->setObjectName(QString::fromUtf8("pbn_start"));
        pbn_start->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(pbn_start, 0, 0, 1, 1);

        lb_cardID = new QLabel(widget);
        lb_cardID->setObjectName(QString::fromUtf8("lb_cardID"));

        gridLayout->addWidget(lb_cardID, 0, 1, 1, 1);

        ted_updateNumber = new QLineEdit(widget);
        ted_updateNumber->setObjectName(QString::fromUtf8("ted_updateNumber"));
        ted_updateNumber->setEnabled(false);
        ted_updateNumber->setMinimumSize(QSize(175, 25));

        gridLayout->addWidget(ted_updateNumber, 0, 2, 1, 1);

        lb_cardName = new QLabel(widget);
        lb_cardName->setObjectName(QString::fromUtf8("lb_cardName"));

        gridLayout->addWidget(lb_cardName, 0, 3, 1, 1);

        ted_updateName = new QLineEdit(widget);
        ted_updateName->setObjectName(QString::fromUtf8("ted_updateName"));
        ted_updateName->setMinimumSize(QSize(175, 25));

        gridLayout->addWidget(ted_updateName, 0, 4, 1, 1);

        pbn_update = new QPushButton(widget);
        pbn_update->setObjectName(QString::fromUtf8("pbn_update"));
        pbn_update->setMinimumSize(QSize(100, 30));

        gridLayout->addWidget(pbn_update, 1, 0, 1, 1);

        lb_cardSex = new QLabel(widget);
        lb_cardSex->setObjectName(QString::fromUtf8("lb_cardSex"));

        gridLayout->addWidget(lb_cardSex, 1, 1, 1, 1);

        cb_updateSex = new QComboBox(widget);
        cb_updateSex->setObjectName(QString::fromUtf8("cb_updateSex"));
        cb_updateSex->setMinimumSize(QSize(175, 25));

        gridLayout->addWidget(cb_updateSex, 1, 2, 1, 1);

        lb_cardState = new QLabel(widget);
        lb_cardState->setObjectName(QString::fromUtf8("lb_cardState"));

        gridLayout->addWidget(lb_cardState, 1, 3, 1, 1);

        cb_updateState = new QComboBox(widget);
        cb_updateState->setObjectName(QString::fromUtf8("cb_updateState"));
        cb_updateState->setMinimumSize(QSize(175, 25));

        gridLayout->addWidget(cb_updateState, 1, 4, 1, 1);


        retranslateUi(EditCard);

        QMetaObject::connectSlotsByName(EditCard);
    } // setupUi

    void retranslateUi(QWidget *EditCard)
    {
        EditCard->setWindowTitle(QApplication::translate("EditCard", "Form", 0, QApplication::UnicodeUTF8));
        lb_deletetitle->setText(QApplication::translate("EditCard", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\347\274\226\350\276\221\344\277\241\346\201\257\345\271\263\345\217\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_back->setText(QApplication::translate("EditCard", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        lb_db->setText(QApplication::translate("EditCard", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\346\225\260\346\215\256\345\272\223</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_dbselect->setText(QApplication::translate("EditCard", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btn_dbrefresh->setText(QApplication::translate("EditCard", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = db_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditCard", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = db_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditCard", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = db_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditCard", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = db_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EditCard", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        pbn_start->setText(QApplication::translate("EditCard", "\350\257\273\345\215\241", 0, QApplication::UnicodeUTF8));
        lb_cardID->setText(QApplication::translate("EditCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">  \345\215\241\345\217\267\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_cardName->setText(QApplication::translate("EditCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_update->setText(QApplication::translate("EditCard", "\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        lb_cardSex->setText(QApplication::translate("EditCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">      \346\200\247\345\210\253\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        cb_updateSex->clear();
        cb_updateSex->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("EditCard", "\347\224\267", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditCard", "\345\245\263", 0, QApplication::UnicodeUTF8)
        );
        lb_cardState->setText(QApplication::translate("EditCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">     \347\212\266\346\200\201\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        cb_updateState->clear();
        cb_updateState->insertItems(0, QStringList()
         << QApplication::translate("EditCard", "\346\255\243\345\270\270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditCard", "\345\267\262\346\263\250\351\224\200", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class EditCard: public Ui_EditCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCARD_H
