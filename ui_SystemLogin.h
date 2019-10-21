/********************************************************************************
** Form generated from reading UI file 'SystemLogin.ui'
**
** Created: Thu Sep 12 16:14:46 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMLOGIN_H
#define UI_SYSTEMLOGIN_H

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

class Ui_SystemLogin
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lb_login;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *ptn_login;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *ptn_reset;
    QSpacerItem *horizontalSpacer_8;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout;
    QLabel *lb_user;
    QLineEdit *ted_user;
    QLabel *lb_pwd;
    QLineEdit *ted_pwd;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *SystemLogin)
    {
        if (SystemLogin->objectName().isEmpty())
            SystemLogin->setObjectName(QString::fromUtf8("SystemLogin"));
        SystemLogin->resize(587, 342);
        layoutWidget = new QWidget(SystemLogin);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 531, 36));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lb_login = new QLabel(layoutWidget);
        lb_login->setObjectName(QString::fromUtf8("lb_login"));
        QFont font;
        font.setFamily(QString::fromUtf8("Cambria"));
        font.setPointSize(15);
        lb_login->setFont(font);

        horizontalLayout_2->addWidget(lb_login);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        widget = new QWidget(SystemLogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 531, 101));
        layoutWidget_2 = new QWidget(widget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(5, 0, 531, 102));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(400, 100));
        label->setPixmap(QPixmap(QString::fromUtf8("Images/log.png")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        layoutWidget_3 = new QWidget(SystemLogin);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 280, 531, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        ptn_login = new QPushButton(layoutWidget_3);
        ptn_login->setObjectName(QString::fromUtf8("ptn_login"));

        horizontalLayout_4->addWidget(ptn_login);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        ptn_reset = new QPushButton(layoutWidget_3);
        ptn_reset->setObjectName(QString::fromUtf8("ptn_reset"));

        horizontalLayout_4->addWidget(ptn_reset);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        layoutWidget_4 = new QWidget(SystemLogin);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 180, 531, 71));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lb_user = new QLabel(layoutWidget_4);
        lb_user->setObjectName(QString::fromUtf8("lb_user"));
        QFont font1;
        font1.setPointSize(10);
        lb_user->setFont(font1);

        gridLayout->addWidget(lb_user, 0, 0, 1, 1);

        ted_user = new QLineEdit(layoutWidget_4);
        ted_user->setObjectName(QString::fromUtf8("ted_user"));

        gridLayout->addWidget(ted_user, 0, 1, 1, 1);

        lb_pwd = new QLabel(layoutWidget_4);
        lb_pwd->setObjectName(QString::fromUtf8("lb_pwd"));
        lb_pwd->setFont(font1);

        gridLayout->addWidget(lb_pwd, 1, 0, 1, 1);

        ted_pwd = new QLineEdit(layoutWidget_4);
        ted_pwd->setObjectName(QString::fromUtf8("ted_pwd"));

        gridLayout->addWidget(ted_pwd, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        retranslateUi(SystemLogin);

        QMetaObject::connectSlotsByName(SystemLogin);
    } // setupUi

    void retranslateUi(QWidget *SystemLogin)
    {
        SystemLogin->setWindowTitle(QApplication::translate("SystemLogin", "Form", 0, QApplication::UnicodeUTF8));
        lb_login->setText(QApplication::translate("SystemLogin", "<html><head/><body><p><span style=\" font-weight:600;\">\347\256\241\347\220\206\345\221\230\347\256\241\347\220\206\347\231\273\345\275\225\347\225\214\351\235\242</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        ptn_login->setText(QApplication::translate("SystemLogin", "\347\231\273  \345\275\225", 0, QApplication::UnicodeUTF8));
        ptn_reset->setText(QApplication::translate("SystemLogin", "\351\207\215  \347\275\256", 0, QApplication::UnicodeUTF8));
        lb_user->setText(QApplication::translate("SystemLogin", "<html><head/><body><p><span style=\" font-weight:600;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_pwd->setText(QApplication::translate("SystemLogin", "<html><head/><body><p><span style=\" font-weight:600;\">\345\257\206    \347\240\201\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SystemLogin: public Ui_SystemLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMLOGIN_H
