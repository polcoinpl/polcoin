/********************************************************************************
** Form generated from reading UI file 'digpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGPAGE_H
#define UI_DIGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DigPage
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *lblBalance;
    QLabel *label_5;
    QLabel *lblUnconfirmed;
    QLabel *label_12;
    QLabel *lblInmature;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *lblHashes;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnDig;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *DigPage)
    {
        if (DigPage->objectName().isEmpty())
            DigPage->setObjectName(QString::fromUtf8("DigPage"));
        DigPage->resize(573, 342);
        layoutWidget = new QWidget(DigPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 327, 304));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(8, 8, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_14->setFont(font);

        horizontalLayout->addWidget(label_14);

        horizontalSpacer_2 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(12);
        formLayout->setVerticalSpacing(12);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        lblBalance = new QLabel(layoutWidget);
        lblBalance->setObjectName(QString::fromUtf8("lblBalance"));
        lblBalance->setFont(font);
        lblBalance->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, lblBalance);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        lblUnconfirmed = new QLabel(layoutWidget);
        lblUnconfirmed->setObjectName(QString::fromUtf8("lblUnconfirmed"));
        lblUnconfirmed->setFont(font);
        lblUnconfirmed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, lblUnconfirmed);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_12);

        lblInmature = new QLabel(layoutWidget);
        lblInmature->setObjectName(QString::fromUtf8("lblInmature"));
        lblInmature->setFont(font);
        lblInmature->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, lblInmature);


        verticalLayout->addLayout(formLayout);

        horizontalSpacer_7 = new QSpacerItem(276, 105, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(horizontalSpacer_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lblHashes = new QLabel(layoutWidget);
        lblHashes->setObjectName(QString::fromUtf8("lblHashes"));
        lblHashes->setFont(font);

        horizontalLayout_2->addWidget(lblHashes);

        labelWalletStatus = new QLabel(layoutWidget);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        labelWalletStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelWalletStatus->setText(QString::fromUtf8("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setMaximum(1000);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setFormat(QString::fromUtf8(""));

        verticalLayout->addWidget(progressBar);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        btnDig = new QPushButton(layoutWidget);
        btnDig->setObjectName(QString::fromUtf8("btnDig"));

        horizontalLayout_3->addWidget(btnDig);

        horizontalSpacer_5 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalSpacer_6 = new QSpacerItem(276, 105, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(horizontalSpacer_6);

        layoutWidget->raise();

        retranslateUi(DigPage);

        QMetaObject::connectSlotsByName(DigPage);
    } // setupUi

    void retranslateUi(QWidget *DigPage)
    {
        DigPage->setWindowTitle(QApplication::translate("DigPage", "DigPage", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("DigPage", "Wallet", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DigPage", "Balance:", 0, QApplication::UnicodeUTF8));
        lblBalance->setText(QApplication::translate("DigPage", "0 PLC", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DigPage", "Unconfirmed:", 0, QApplication::UnicodeUTF8));
        lblUnconfirmed->setText(QApplication::translate("DigPage", "0 PLC", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("DigPage", "Immature:", 0, QApplication::UnicodeUTF8));
        lblInmature->setText(QApplication::translate("DigPage", "0 PLC", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DigPage", "Hashes per sec:", 0, QApplication::UnicodeUTF8));
        lblHashes->setText(QApplication::translate("DigPage", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("DigPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the PolCoin network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        progressBar->setStatusTip(QApplication::translate("DigPage", "Maximum: 0", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btnDig->setText(QApplication::translate("DigPage", "Start digging", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DigPage: public Ui_DigPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGPAGE_H
