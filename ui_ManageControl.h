/********************************************************************************
** Form generated from reading UI file 'ManageControl.ui'
**
** Created: Mon Sep 2 17:24:19 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGECONTROL_H
#define UI_MANAGECONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageControl
{
public:
    QPushButton *pbn_back;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lb_sysName;
    QSpacerItem *horizontalSpacer;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ptn_addCard;
    QPushButton *ptn_deleteCard;
    QPushButton *ptn_editCard;
    QPushButton *ptn_searchCard;
    QPushButton *ptn_systemManage;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *ManageControl)
    {
        if (ManageControl->objectName().isEmpty())
            ManageControl->setObjectName(QString::fromUtf8("ManageControl"));
        ManageControl->resize(594, 337);
        pbn_back = new QPushButton(ManageControl);
        pbn_back->setObjectName(QString::fromUtf8("pbn_back"));
        pbn_back->setGeometry(QRect(0, 290, 101, 41));
        label = new QLabel(ManageControl);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 0, 400, 100));
        label->setMinimumSize(QSize(300, 70));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/log.png")));
        label->setScaledContents(true);
        label->setWordWrap(true);
        label->setOpenExternalLinks(false);
        widget = new QWidget(ManageControl);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 100, 591, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lb_sysName = new QLabel(widget);
        lb_sysName->setObjectName(QString::fromUtf8("lb_sysName"));

        horizontalLayout->addWidget(lb_sysName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget1 = new QWidget(ManageControl);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 180, 591, 101));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        ptn_addCard = new QPushButton(widget1);
        ptn_addCard->setObjectName(QString::fromUtf8("ptn_addCard"));
        ptn_addCard->setMinimumSize(QSize(80, 80));

        horizontalLayout_2->addWidget(ptn_addCard);

        ptn_deleteCard = new QPushButton(widget1);
        ptn_deleteCard->setObjectName(QString::fromUtf8("ptn_deleteCard"));
        ptn_deleteCard->setMinimumSize(QSize(80, 80));

        horizontalLayout_2->addWidget(ptn_deleteCard);

        ptn_editCard = new QPushButton(widget1);
        ptn_editCard->setObjectName(QString::fromUtf8("ptn_editCard"));
        ptn_editCard->setMinimumSize(QSize(80, 80));

        horizontalLayout_2->addWidget(ptn_editCard);

        ptn_searchCard = new QPushButton(widget1);
        ptn_searchCard->setObjectName(QString::fromUtf8("ptn_searchCard"));
        ptn_searchCard->setMinimumSize(QSize(80, 80));

        horizontalLayout_2->addWidget(ptn_searchCard);

        ptn_systemManage = new QPushButton(widget1);
        ptn_systemManage->setObjectName(QString::fromUtf8("ptn_systemManage"));
        ptn_systemManage->setMinimumSize(QSize(80, 80));

        horizontalLayout_2->addWidget(ptn_systemManage);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        retranslateUi(ManageControl);

        QMetaObject::connectSlotsByName(ManageControl);
    } // setupUi

    void retranslateUi(QWidget *ManageControl)
    {
        ManageControl->setWindowTitle(QApplication::translate("ManageControl", "Form", 0, QApplication::UnicodeUTF8));
        pbn_back->setText(QApplication::translate("ManageControl", "\350\277\224\345\233\236\346\211\223\345\215\241\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        lb_sysName->setText(QApplication::translate("ManageControl", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">\345\220\216\345\217\260\347\256\241\347\220\206\347\225\214\351\235\242</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ptn_addCard->setText(QApplication::translate("ManageControl", "\346\267\273\345\212\240\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        ptn_deleteCard->setText(QApplication::translate("ManageControl", "\345\210\240\351\231\244\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        ptn_editCard->setText(QApplication::translate("ManageControl", "\344\277\256\346\224\271\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        ptn_searchCard->setText(QApplication::translate("ManageControl", "\346\237\245\350\257\242\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        ptn_systemManage->setText(QApplication::translate("ManageControl", "\347\256\241\347\220\206\345\221\230\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ManageControl: public Ui_ManageControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGECONTROL_H
