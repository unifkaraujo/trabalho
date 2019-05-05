/********************************************************************************
** Form generated from reading UI file 'quartos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUARTOS_H
#define UI_QUARTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quartos
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QLabel *label;

    void setupUi(QDialog *quartos)
    {
        if (quartos->objectName().isEmpty())
            quartos->setObjectName(QString::fromUtf8("quartos"));
        quartos->resize(661, 361);
        pushButton = new QPushButton(quartos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 310, 151, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius:1px;"));
        layoutWidget = new QWidget(quartos);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(289, 250, 361, 46));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(layoutWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(layoutWidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(layoutWidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        horizontalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(layoutWidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        horizontalLayout->addWidget(checkBox_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox_6 = new QCheckBox(layoutWidget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        horizontalLayout_2->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(layoutWidget);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        horizontalLayout_2->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(layoutWidget);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        horizontalLayout_2->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(layoutWidget);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        horizontalLayout_2->addWidget(checkBox_9);

        checkBox_10 = new QCheckBox(layoutWidget);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        horizontalLayout_2->addWidget(checkBox_10);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(quartos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 661, 361));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagens/Imagens/quarto.jpg")));
        label->raise();
        pushButton->raise();
        layoutWidget->raise();

        retranslateUi(quartos);

        QMetaObject::connectSlotsByName(quartos);
    } // setupUi

    void retranslateUi(QDialog *quartos)
    {
        quartos->setWindowTitle(QApplication::translate("quartos", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("quartos", "Consultar pre\303\247o", nullptr));
        checkBox->setText(QApplication::translate("quartos", "Quarto 1", nullptr));
        checkBox_2->setText(QApplication::translate("quartos", "Quarto 2", nullptr));
        checkBox_3->setText(QApplication::translate("quartos", "Quarto 3", nullptr));
        checkBox_4->setText(QApplication::translate("quartos", "Quarto 4", nullptr));
        checkBox_5->setText(QApplication::translate("quartos", "Quarto 5", nullptr));
        checkBox_6->setText(QApplication::translate("quartos", "Quarto 6", nullptr));
        checkBox_7->setText(QApplication::translate("quartos", "Quarto 7", nullptr));
        checkBox_8->setText(QApplication::translate("quartos", "Quarto 8", nullptr));
        checkBox_9->setText(QApplication::translate("quartos", "Quarto 9", nullptr));
        checkBox_10->setText(QApplication::translate("quartos", "Quarto 10", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class quartos: public Ui_quartos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUARTOS_H
