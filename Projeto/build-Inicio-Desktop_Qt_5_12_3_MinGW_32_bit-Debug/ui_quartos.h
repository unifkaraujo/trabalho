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
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_quartos
{
public:
    QLabel *label_3;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *btn_verquartos;

    void setupUi(QDialog *quartos)
    {
        if (quartos->objectName().isEmpty())
            quartos->setObjectName(QString::fromUtf8("quartos"));
        quartos->resize(550, 350);
        label_3 = new QLabel(quartos);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 200, 47, 13));
        pushButton = new QPushButton(quartos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 230, 121, 23));
        listWidget = new QListWidget(quartos);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(60, 30, 61, 181));
        lineEdit = new QLineEdit(quartos);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(280, 200, 91, 20));
        label = new QLabel(quartos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 0, 101, 21));
        label_2 = new QLabel(quartos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 170, 47, 13));
        lineEdit_2 = new QLineEdit(quartos);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(270, 170, 113, 20));
        btn_verquartos = new QPushButton(quartos);
        btn_verquartos->setObjectName(QString::fromUtf8("btn_verquartos"));
        btn_verquartos->setGeometry(QRect(50, 230, 75, 21));

        retranslateUi(quartos);

        QMetaObject::connectSlotsByName(quartos);
    } // setupUi

    void retranslateUi(QDialog *quartos)
    {
        quartos->setWindowTitle(QApplication::translate("quartos", "Dialog", nullptr));
        label_3->setText(QApplication::translate("quartos", "Quarto", nullptr));
        pushButton->setText(QApplication::translate("quartos", "Reservar quarto", nullptr));
        lineEdit->setText(QString());
        label->setText(QApplication::translate("quartos", "Quartos disponiveis", nullptr));
        label_2->setText(QApplication::translate("quartos", "Rg", nullptr));
        btn_verquartos->setText(QApplication::translate("quartos", "Atualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class quartos: public Ui_quartos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUARTOS_H
