/********************************************************************************
** Form generated from reading UI file 'SystemManage.ui'
**
** Created: Mon Sep 2 17:24:20 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMMANAGE_H
#define UI_SYSTEMMANAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemManage
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *db_select;
    QLabel *lb_db;
    QLineEdit *ted_dbpath;
    QPushButton *btn_dbselect;
    QPushButton *btn_dbrefresh;
    QTableWidget *db_table;
    QWidget *layoutWidget1;
    QHBoxLayout *Function;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbn_addName;
    QSpacerItem *horizontalSpacer;
    QPushButton *ptn_delete;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbn_back;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lb_sysName;
    QSpacerItem *horizontalSpacer_5;
    QSplitter *splitter;
    QPushButton *pbn_start;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QLabel *lb_cardID;
    QLineEdit *ted_showNumber;
    QLabel *lb_cardName;
    QLineEdit *ted_showName;
    QWidget *widget2;
    QFormLayout *formLayout;
    QLabel *lb_cardID_2;
    QLineEdit *ted_showPassword;
    QLabel *lb_cardSex;
    QComboBox *ted_showSex;

    void setupUi(QWidget *SystemManage)
    {
        if (SystemManage->objectName().isEmpty())
            SystemManage->setObjectName(QString::fromUtf8("SystemManage"));
        SystemManage->resize(676, 486);
        SystemManage->setMinimumSize(QSize(0, 25));
        layoutWidget = new QWidget(SystemManage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 70, 651, 30));
        db_select = new QHBoxLayout(layoutWidget);
        db_select->setObjectName(QString::fromUtf8("db_select"));
        db_select->setContentsMargins(0, 0, 0, 0);
        lb_db = new QLabel(layoutWidget);
        lb_db->setObjectName(QString::fromUtf8("lb_db"));

        db_select->addWidget(lb_db);

        ted_dbpath = new QLineEdit(layoutWidget);
        ted_dbpath->setObjectName(QString::fromUtf8("ted_dbpath"));
        ted_dbpath->setMinimumSize(QSize(0, 25));
        ted_dbpath->setReadOnly(true);

        db_select->addWidget(ted_dbpath);

        btn_dbselect = new QPushButton(layoutWidget);
        btn_dbselect->setObjectName(QString::fromUtf8("btn_dbselect"));

        db_select->addWidget(btn_dbselect);

        btn_dbrefresh = new QPushButton(layoutWidget);
        btn_dbrefresh->setObjectName(QString::fromUtf8("btn_dbrefresh"));

        db_select->addWidget(btn_dbrefresh);

        db_table = new QTableWidget(SystemManage);
        if (db_table->columnCount() < 6)
            db_table->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        db_table->setObjectName(QString::fromUtf8("db_table"));
        db_table->setGeometry(QRect(0, 110, 651, 161));
        db_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        db_table->setSelectionMode(QAbstractItemView::SingleSelection);
        db_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        layoutWidget1 = new QWidget(SystemManage);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 400, 661, 30));
        Function = new QHBoxLayout(layoutWidget1);
        Function->setObjectName(QString::fromUtf8("Function"));
        Function->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Function->addItem(horizontalSpacer_2);

        pbn_addName = new QPushButton(layoutWidget1);
        pbn_addName->setObjectName(QString::fromUtf8("pbn_addName"));

        Function->addWidget(pbn_addName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Function->addItem(horizontalSpacer);

        ptn_delete = new QPushButton(layoutWidget1);
        ptn_delete->setObjectName(QString::fromUtf8("ptn_delete"));

        Function->addWidget(ptn_delete);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Function->addItem(horizontalSpacer_3);

        widget = new QWidget(SystemManage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 651, 51));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pbn_back = new QPushButton(widget);
        pbn_back->setObjectName(QString::fromUtf8("pbn_back"));

        horizontalLayout_2->addWidget(pbn_back);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(90, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        lb_sysName = new QLabel(widget);
        lb_sysName->setObjectName(QString::fromUtf8("lb_sysName"));

        horizontalLayout->addWidget(lb_sysName);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        horizontalLayout_2->addLayout(horizontalLayout);

        splitter = new QSplitter(SystemManage);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 300, 651, 61));
        splitter->setOrientation(Qt::Horizontal);
        pbn_start = new QPushButton(splitter);
        pbn_start->setObjectName(QString::fromUtf8("pbn_start"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pbn_start->setFont(font);
        splitter->addWidget(pbn_start);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lb_cardID = new QLabel(widget1);
        lb_cardID->setObjectName(QString::fromUtf8("lb_cardID"));
        lb_cardID->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(lb_cardID, 0, 0, 1, 1);

        ted_showNumber = new QLineEdit(widget1);
        ted_showNumber->setObjectName(QString::fromUtf8("ted_showNumber"));
        ted_showNumber->setEnabled(false);
        ted_showNumber->setMinimumSize(QSize(150, 25));

        gridLayout->addWidget(ted_showNumber, 0, 1, 1, 2);

        lb_cardName = new QLabel(widget1);
        lb_cardName->setObjectName(QString::fromUtf8("lb_cardName"));
        lb_cardName->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(lb_cardName, 1, 0, 1, 1);

        ted_showName = new QLineEdit(widget1);
        ted_showName->setObjectName(QString::fromUtf8("ted_showName"));
        ted_showName->setMinimumSize(QSize(150, 25));

        gridLayout->addWidget(ted_showName, 1, 1, 1, 2);

        splitter->addWidget(widget1);
        widget2 = new QWidget(splitter);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        formLayout = new QFormLayout(widget2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lb_cardID_2 = new QLabel(widget2);
        lb_cardID_2->setObjectName(QString::fromUtf8("lb_cardID_2"));
        lb_cardID_2->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(0, QFormLayout::LabelRole, lb_cardID_2);

        ted_showPassword = new QLineEdit(widget2);
        ted_showPassword->setObjectName(QString::fromUtf8("ted_showPassword"));
        ted_showPassword->setMinimumSize(QSize(150, 25));

        formLayout->setWidget(0, QFormLayout::FieldRole, ted_showPassword);

        lb_cardSex = new QLabel(widget2);
        lb_cardSex->setObjectName(QString::fromUtf8("lb_cardSex"));
        lb_cardSex->setMinimumSize(QSize(0, 25));

        formLayout->setWidget(1, QFormLayout::LabelRole, lb_cardSex);

        ted_showSex = new QComboBox(widget2);
        ted_showSex->setObjectName(QString::fromUtf8("ted_showSex"));
        ted_showSex->setMinimumSize(QSize(150, 25));

        formLayout->setWidget(1, QFormLayout::FieldRole, ted_showSex);

        splitter->addWidget(widget2);

        retranslateUi(SystemManage);

        QMetaObject::connectSlotsByName(SystemManage);
    } // setupUi

    void retranslateUi(QWidget *SystemManage)
    {
        SystemManage->setWindowTitle(QApplication::translate("SystemManage", "Form", 0, QApplication::UnicodeUTF8));
        lb_db->setText(QApplication::translate("SystemManage", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\346\225\260\346\215\256\345\272\223</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_dbselect->setText(QApplication::translate("SystemManage", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btn_dbrefresh->setText(QApplication::translate("SystemManage", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = db_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SystemManage", "ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = db_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SystemManage", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = db_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SystemManage", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = db_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SystemManage", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = db_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SystemManage", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = db_table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("SystemManage", "\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        pbn_addName->setText(QApplication::translate("SystemManage", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        ptn_delete->setText(QApplication::translate("SystemManage", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pbn_back->setText(QApplication::translate("SystemManage", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        lb_sysName->setText(QApplication::translate("SystemManage", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\350\200\203\345\213\244\347\263\273\347\273\237\347\256\241\347\220\206\345\221\230\347\256\241\347\220\206\345\271\263\345\217\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_start->setText(QApplication::translate("SystemManage", "\350\257\273\345\215\241", 0, QApplication::UnicodeUTF8));
        lb_cardID->setText(QApplication::translate("SystemManage", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\345\215\241\345\217\267\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_cardName->setText(QApplication::translate("SystemManage", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_cardID_2->setText(QApplication::translate("SystemManage", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">  \345\257\206\347\240\201\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ted_showPassword->setText(QString());
        lb_cardSex->setText(QApplication::translate("SystemManage", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">       \346\200\247\345\210\253\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ted_showSex->clear();
        ted_showSex->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("SystemManage", "\347\224\267", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SystemManage", "\345\245\263", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class SystemManage: public Ui_SystemManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMMANAGE_H
