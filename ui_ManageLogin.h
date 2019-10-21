/********************************************************************************
** Form generated from reading UI file 'ManageLogin.ui'
**
** Created: Mon Sep 2 17:24:18 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGELOGIN_H
#define UI_MANAGELOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageLogin
{
public:
    QWidget *widget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lb_login;
    QSpacerItem *horizontalSpacer_4;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *ptn_login;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *ptn_reset;
    QSpacerItem *horizontalSpacer_8;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout;
    QLabel *lb_user;
    QLineEdit *ted_user;
    QLabel *lb_pwd;
    QLineEdit *ted_pwd;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *ManageLogin)
    {
        if (ManageLogin->objectName().isEmpty())
            ManageLogin->setObjectName(QString::fromUtf8("ManageLogin"));
        ManageLogin->resize(535, 399);
        widget = new QWidget(ManageLogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 531, 91));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(5, 0, 531, 102));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(400, 100));
        label->setPixmap(QPixmap(QString::fromUtf8("Images/log.png")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        layoutWidget1 = new QWidget(ManageLogin);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 110, 531, 36));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lb_login = new QLabel(layoutWidget1);
        lb_login->setObjectName(QString::fromUtf8("lb_login"));
        QFont font;
        font.setFamily(QString::fromUtf8("Cambria"));
        font.setPointSize(15);
        lb_login->setFont(font);

        horizontalLayout_2->addWidget(lb_login);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        layoutWidget2 = new QWidget(ManageLogin);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 270, 531, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        ptn_login = new QPushButton(layoutWidget2);
        ptn_login->setObjectName(QString::fromUtf8("ptn_login"));

        horizontalLayout_4->addWidget(ptn_login);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        ptn_reset = new QPushButton(layoutWidget2);
        ptn_reset->setObjectName(QString::fromUtf8("ptn_reset"));

        horizontalLayout_4->addWidget(ptn_reset);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        layoutWidget3 = new QWidget(ManageLogin);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 170, 531, 71));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lb_user = new QLabel(layoutWidget3);
        lb_user->setObjectName(QString::fromUtf8("lb_user"));
        QFont font1;
        font1.setPointSize(10);
        lb_user->setFont(font1);

        gridLayout->addWidget(lb_user, 0, 0, 1, 1);

        ted_user = new QLineEdit(layoutWidget3);
        ted_user->setObjectName(QString::fromUtf8("ted_user"));

        gridLayout->addWidget(ted_user, 0, 1, 1, 1);

        lb_pwd = new QLabel(layoutWidget3);
        lb_pwd->setObjectName(QString::fromUtf8("lb_pwd"));
        lb_pwd->setFont(font1);

        gridLayout->addWidget(lb_pwd, 1, 0, 1, 1);

        ted_pwd = new QLineEdit(layoutWidget3);
        ted_pwd->setObjectName(QString::fromUtf8("ted_pwd"));

        gridLayout->addWidget(ted_pwd, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        retranslateUi(ManageLogin);

        QMetaObject::connectSlotsByName(ManageLogin);
    } // setupUi

    void retranslateUi(QWidget *ManageLogin)
    {
        ManageLogin->setWindowTitle(QApplication::translate("ManageLogin", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        lb_login->setText(QApplication::translate("ManageLogin", "<html><head/><body><p><span style=\" font-weight:600;\">\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225\347\225\214\351\235\242</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ptn_login->setText(QApplication::translate("ManageLogin", "\347\231\273  \345\275\225", 0, QApplication::UnicodeUTF8));
        ptn_reset->setText(QApplication::translate("ManageLogin", "\351\207\215  \347\275\256", 0, QApplication::UnicodeUTF8));
        lb_user->setText(QApplication::translate("ManageLogin", "<html><head/><body><p><span style=\" font-weight:600;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_pwd->setText(QApplication::translate("ManageLogin", "<html><head/><body><p><span style=\" font-weight:600;\">\345\257\206    \347\240\201\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ManageLogin: public Ui_ManageLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGELOGIN_H
