/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Mon Sep 2 17:24:19 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>
#include "rotatenumberlabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *manageLogin;
    QAction *action_2;
    QWidget *centralwidget;
    QPushButton *ptn_clockIN;
    QPushButton *ptn_sysLogin;
    QLabel *lb_date;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_show;
    QLabel *lb_red;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lb_tip;
    QSpacerItem *horizontalSpacer_6;
    QLabel *lb_green;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_date;
    RotateNumberLabel *lb_hour;
    RotateNumberLabel *lb_minute;
    QLCDNumber *lcdNumber;
    QSpacerItem *horizontalSpacer_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(618, 387);
        manageLogin = new QAction(MainWindow);
        manageLogin->setObjectName(QString::fromUtf8("manageLogin"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ptn_clockIN = new QPushButton(centralwidget);
        ptn_clockIN->setObjectName(QString::fromUtf8("ptn_clockIN"));
        ptn_clockIN->setGeometry(QRect(10, 110, 111, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift Light"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        ptn_clockIN->setFont(font);
        ptn_sysLogin = new QPushButton(centralwidget);
        ptn_sysLogin->setObjectName(QString::fromUtf8("ptn_sysLogin"));
        ptn_sysLogin->setGeometry(QRect(0, 20, 101, 31));
        lb_date = new QLabel(centralwidget);
        lb_date->setObjectName(QString::fromUtf8("lb_date"));
        lb_date->setGeometry(QRect(210, 110, 401, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        lb_date->setFont(font1);
        lb_date->setLayoutDirection(Qt::LeftToRight);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 290, 571, 62));
        horizontalLayout_show = new QHBoxLayout(layoutWidget);
        horizontalLayout_show->setObjectName(QString::fromUtf8("horizontalLayout_show"));
        horizontalLayout_show->setContentsMargins(0, 0, 0, 0);
        lb_red = new QLabel(layoutWidget);
        lb_red->setObjectName(QString::fromUtf8("lb_red"));
        lb_red->setMinimumSize(QSize(60, 60));
        lb_red->setMaximumSize(QSize(60, 60));
        lb_red->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border-radius: 30px;"));

        horizontalLayout_show->addWidget(lb_red);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_show->addItem(horizontalSpacer_5);

        lb_tip = new QLabel(layoutWidget);
        lb_tip->setObjectName(QString::fromUtf8("lb_tip"));
        lb_tip->setMinimumSize(QSize(0, 0));
        lb_tip->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setPointSize(30);
        lb_tip->setFont(font2);

        horizontalLayout_show->addWidget(lb_tip);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_show->addItem(horizontalSpacer_6);

        lb_green = new QLabel(layoutWidget);
        lb_green->setObjectName(QString::fromUtf8("lb_green"));
        lb_green->setMinimumSize(QSize(60, 60));
        lb_green->setMaximumSize(QSize(60, 60));
        lb_green->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"border-radius: 30px;"));

        horizontalLayout_show->addWidget(lb_green);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 10, 400, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/log.png")));
        label->setScaledContents(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 170, 571, 91));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout_date = new QHBoxLayout();
        horizontalLayout_date->setObjectName(QString::fromUtf8("horizontalLayout_date"));
        lb_hour = new RotateNumberLabel(widget);
        lb_hour->setObjectName(QString::fromUtf8("lb_hour"));

        horizontalLayout_date->addWidget(lb_hour);

        lb_minute = new RotateNumberLabel(widget);
        lb_minute->setObjectName(QString::fromUtf8("lb_minute"));

        horizontalLayout_date->addWidget(lb_minute);

        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(64, 0));
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setDigitCount(2);

        horizontalLayout_date->addWidget(lcdNumber);


        horizontalLayout->addLayout(horizontalLayout_date);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(manageLogin, SIGNAL(triggered()), manageLogin, SLOT(trigger()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        manageLogin->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        action_2->setText(QApplication::translate("MainWindow", "\346\263\250\351\224\200", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ptn_clockIN->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\347\202\271\345\207\273\346\211\223\345\215\241</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ptn_clockIN->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\241", 0, QApplication::UnicodeUTF8));
        ptn_sysLogin->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        lb_date->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">TextLabel</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_tip->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        lb_hour->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        lb_minute->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
