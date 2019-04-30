/********************************************************************************
** Form generated from reading UI file 'cadastropessoa.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTROPESSOA_H
#define UI_CADASTROPESSOA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CadastroPessoa
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *txt_nascimento;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *txt_rg;
    QPushButton *btn_cadastrarpessoa;
    QLabel *label_5;
    QPushButton *btn_localizarcadastro;

    void setupUi(QDialog *CadastroPessoa)
    {
        if (CadastroPessoa->objectName().isEmpty())
            CadastroPessoa->setObjectName(QString::fromUtf8("CadastroPessoa"));
        CadastroPessoa->resize(550, 350);
        label = new QLabel(CadastroPessoa);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 270, 47, 13));
        layoutWidget = new QWidget(CadastroPessoa);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 70, 221, 151));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"font-size:18px;"));

        horizontalLayout->addWidget(label_2);

        txt_nome = new QLineEdit(layoutWidget);
        txt_nome->setObjectName(QString::fromUtf8("txt_nome"));

        horizontalLayout->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: white;\n"
"font-size:13px;"));

        horizontalLayout_2->addWidget(label_3);

        txt_nascimento = new QLineEdit(layoutWidget);
        txt_nascimento->setObjectName(QString::fromUtf8("txt_nascimento"));

        horizontalLayout_2->addWidget(txt_nascimento);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: white;;\n"
"font-size:18px;"));

        horizontalLayout_3->addWidget(label_4);

        txt_rg = new QLineEdit(layoutWidget);
        txt_rg->setObjectName(QString::fromUtf8("txt_rg"));

        horizontalLayout_3->addWidget(txt_rg);


        verticalLayout->addLayout(horizontalLayout_3);

        btn_cadastrarpessoa = new QPushButton(layoutWidget);
        btn_cadastrarpessoa->setObjectName(QString::fromUtf8("btn_cadastrarpessoa"));
        btn_cadastrarpessoa->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color:rgb(191, 123, 40);\n"
"border-radius:5px;\n"
"font-size:18px;"));

        verticalLayout->addWidget(btn_cadastrarpessoa);

        label_5 = new QLabel(CadastroPessoa);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(0, 0, 551, 311));
        label_5->setMouseTracking(false);
        label_5->setTabletTracking(false);
        label_5->setAcceptDrops(false);
        label_5->setAutoFillBackground(false);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/imagens/Imagens/hotel.jpg")));
        label_5->setScaledContents(false);
        label_5->setWordWrap(false);
        label_5->setOpenExternalLinks(false);
        btn_localizarcadastro = new QPushButton(CadastroPessoa);
        btn_localizarcadastro->setObjectName(QString::fromUtf8("btn_localizarcadastro"));
        btn_localizarcadastro->setGeometry(QRect(0, 320, 141, 31));
        btn_localizarcadastro->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color:rgb(191, 123, 40);\n"
"border-radius:5px;\n"
"font-size:18px;"));
        label_5->raise();
        label->raise();
        layoutWidget->raise();
        btn_localizarcadastro->raise();

        retranslateUi(CadastroPessoa);

        QMetaObject::connectSlotsByName(CadastroPessoa);
    } // setupUi

    void retranslateUi(QDialog *CadastroPessoa)
    {
        CadastroPessoa->setWindowTitle(QApplication::translate("CadastroPessoa", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("CadastroPessoa", "<b>Nome", nullptr));
        label_3->setText(QApplication::translate("CadastroPessoa", "<b>Data de Nascimento", nullptr));
        label_4->setText(QApplication::translate("CadastroPessoa", "<b>Rg", nullptr));
        btn_cadastrarpessoa->setText(QApplication::translate("CadastroPessoa", "Cadastrar", nullptr));
        label_5->setText(QString());
        btn_localizarcadastro->setText(QApplication::translate("CadastroPessoa", "Localizar cadastro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CadastroPessoa: public Ui_CadastroPessoa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTROPESSOA_H
