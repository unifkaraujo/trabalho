/********************************************************************************
** Form generated from reading UI file 'alocacao.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALOCACAO_H
#define UI_ALOCACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alocacao
{
public:
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget;
    QPushButton *btn_cancelarreserva;
    QPushButton *btn_reserva;
    QLabel *label_19;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_5;
    QLineEdit *txt_rgreserva;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_30;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label_18;
    QWidget *tab_2;
    QWidget *layoutWidget_2;
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
    QPushButton *btn_cadastrar;
    QLabel *label_6;
    QLabel *label_12;
    QPushButton *btn_consultarcadastro;
    QListWidget *listWidget_3;
    QLabel *label_8;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *txt_rg_2;

    void setupUi(QDialog *alocacao)
    {
        if (alocacao->objectName().isEmpty())
            alocacao->setObjectName(QString::fromUtf8("alocacao"));
        alocacao->resize(661, 361);
        label = new QLabel(alocacao);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 661, 361));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imagens/Imagens/hotel.jpg")));
        label->setScaledContents(true);
        tabWidget = new QTabWidget(alocacao);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 671, 301));
        tabWidget->setMouseTracking(false);
        tabWidget->setTabletTracking(false);
        tabWidget->setAcceptDrops(false);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(191, 123, 40);"));
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        listWidget = new QListWidget(tab);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(400, 80, 71, 151));
        listWidget->setStyleSheet(QString::fromUtf8("background-color:white;"));
        btn_cancelarreserva = new QPushButton(tab);
        btn_cancelarreserva->setObjectName(QString::fromUtf8("btn_cancelarreserva"));
        btn_cancelarreserva->setGeometry(QRect(170, 240, 181, 23));
        btn_cancelarreserva->setStyleSheet(QString::fromUtf8("background-color:white;"));
        btn_reserva = new QPushButton(tab);
        btn_reserva->setObjectName(QString::fromUtf8("btn_reserva"));
        btn_reserva->setGeometry(QRect(170, 140, 181, 91));
        btn_reserva->setStyleSheet(QString::fromUtf8("background-color:white;"));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(400, 40, 71, 31));
        label_19->setStyleSheet(QString::fromUtf8("background-color:white;"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 80, 181, 50));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font-size:15px;\n"
"color: white;"));

        horizontalLayout_13->addWidget(label_5);

        txt_rgreserva = new QLineEdit(layoutWidget);
        txt_rgreserva->setObjectName(QString::fromUtf8("txt_rgreserva"));
        txt_rgreserva->setStyleSheet(QString::fromUtf8("background-color:white;"));

        horizontalLayout_13->addWidget(txt_rgreserva);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_30 = new QLabel(layoutWidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setStyleSheet(QString::fromUtf8("font-size:15px;\n"
"color: white;"));

        horizontalLayout_14->addWidget(label_30);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius:1px;"));

        horizontalLayout_14->addWidget(comboBox);


        verticalLayout_4->addLayout(horizontalLayout_14);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 240, 71, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:white;"));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(170, 40, 181, 31));
        label_18->setStyleSheet(QString::fromUtf8("background-color:white;"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 70, 251, 109));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:15px;\n"
"color: white;"));

        horizontalLayout->addWidget(label_2);

        txt_nome = new QLineEdit(layoutWidget_2);
        txt_nome->setObjectName(QString::fromUtf8("txt_nome"));
        txt_nome->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));

        horizontalLayout->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font-size:13px;\n"
"color: white;"));

        horizontalLayout_2->addWidget(label_3);

        txt_nascimento = new QLineEdit(layoutWidget_2);
        txt_nascimento->setObjectName(QString::fromUtf8("txt_nascimento"));
        txt_nascimento->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));

        horizontalLayout_2->addWidget(txt_nascimento);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font-size:15px;\n"
"color: white;"));

        horizontalLayout_3->addWidget(label_4);

        txt_rg = new QLineEdit(layoutWidget_2);
        txt_rg->setObjectName(QString::fromUtf8("txt_rg"));
        txt_rg->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));

        horizontalLayout_3->addWidget(txt_rg);


        verticalLayout->addLayout(horizontalLayout_3);

        btn_cadastrar = new QPushButton(tab_2);
        btn_cadastrar->setObjectName(QString::fromUtf8("btn_cadastrar"));
        btn_cadastrar->setEnabled(true);
        btn_cadastrar->setGeometry(QRect(30, 200, 249, 41));
        btn_cadastrar->setMouseTracking(false);
        btn_cadastrar->setTabletTracking(false);
        btn_cadastrar->setAcceptDrops(false);
        btn_cadastrar->setAutoFillBackground(false);
        btn_cadastrar->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius:5px;"));
        btn_cadastrar->setCheckable(false);
        btn_cadastrar->setAutoRepeat(false);
        btn_cadastrar->setAutoExclusive(false);
        btn_cadastrar->setAutoDefault(false);
        btn_cadastrar->setFlat(false);
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 30, 251, 31));
        label_6->setStyleSheet(QString::fromUtf8("background-color:white;"));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(380, 30, 251, 31));
        label_12->setStyleSheet(QString::fromUtf8("background-color:white;"));
        btn_consultarcadastro = new QPushButton(tab_2);
        btn_consultarcadastro->setObjectName(QString::fromUtf8("btn_consultarcadastro"));
        btn_consultarcadastro->setEnabled(true);
        btn_consultarcadastro->setGeometry(QRect(380, 200, 249, 41));
        btn_consultarcadastro->setMouseTracking(false);
        btn_consultarcadastro->setTabletTracking(false);
        btn_consultarcadastro->setAcceptDrops(false);
        btn_consultarcadastro->setAutoFillBackground(false);
        btn_consultarcadastro->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius:5px;"));
        btn_consultarcadastro->setCheckable(false);
        btn_consultarcadastro->setAutoRepeat(false);
        btn_consultarcadastro->setAutoExclusive(false);
        btn_consultarcadastro->setAutoDefault(false);
        btn_consultarcadastro->setFlat(false);
        listWidget_3 = new QListWidget(tab_2);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(380, 80, 251, 81));
        listWidget_3->setStyleSheet(QString::fromUtf8("background-color:white;"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(320, 0, 16, 281));
        label_8->setStyleSheet(QString::fromUtf8("background-color:white;"));
        layoutWidget_3 = new QWidget(tab_2);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(380, 170, 251, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font-size:15px;\n"
"color: white;"));

        horizontalLayout_4->addWidget(label_7);

        txt_rg_2 = new QLineEdit(layoutWidget_3);
        txt_rg_2->setObjectName(QString::fromUtf8("txt_rg_2"));
        txt_rg_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));

        horizontalLayout_4->addWidget(txt_rg_2);

        tabWidget->addTab(tab_2, QString());

        retranslateUi(alocacao);

        tabWidget->setCurrentIndex(0);
        btn_cadastrar->setDefault(false);
        btn_consultarcadastro->setDefault(false);


        QMetaObject::connectSlotsByName(alocacao);
    } // setupUi

    void retranslateUi(QDialog *alocacao)
    {
        alocacao->setWindowTitle(QApplication::translate("alocacao", "Dialog", nullptr));
        label->setText(QString());
        btn_cancelarreserva->setText(QApplication::translate("alocacao", "Cancelar reserva", nullptr));
        btn_reserva->setText(QApplication::translate("alocacao", "Reservar", nullptr));
        label_19->setText(QApplication::translate("alocacao", "<center><b>Quartos\n"
"<br>disponiveis:", nullptr));
        label_5->setText(QApplication::translate("alocacao", "<b>Digite seu Rg", nullptr));
        label_30->setText(QApplication::translate("alocacao", "<b>Escolha o quarto", nullptr));
        comboBox->setItemText(0, QApplication::translate("alocacao", "1", nullptr));
        comboBox->setItemText(1, QApplication::translate("alocacao", "2", nullptr));
        comboBox->setItemText(2, QApplication::translate("alocacao", "3", nullptr));
        comboBox->setItemText(3, QApplication::translate("alocacao", "4", nullptr));
        comboBox->setItemText(4, QApplication::translate("alocacao", "5", nullptr));
        comboBox->setItemText(5, QApplication::translate("alocacao", "6", nullptr));
        comboBox->setItemText(6, QApplication::translate("alocacao", "7", nullptr));
        comboBox->setItemText(7, QApplication::translate("alocacao", "8", nullptr));
        comboBox->setItemText(8, QApplication::translate("alocacao", "9", nullptr));
        comboBox->setItemText(9, QApplication::translate("alocacao", "10", nullptr));

        pushButton->setText(QApplication::translate("alocacao", "Atualizar", nullptr));
        label_18->setText(QApplication::translate("alocacao", "<center><b>Reservar quartos:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("alocacao", "Aloca\303\247\303\243o de quartos", nullptr));
        label_2->setText(QApplication::translate("alocacao", "<b>Nome", nullptr));
        label_3->setText(QApplication::translate("alocacao", "<b>Data de nascimento", nullptr));
        label_4->setText(QApplication::translate("alocacao", "<b>Rg", nullptr));
        btn_cadastrar->setText(QApplication::translate("alocacao", "Cadastrar", nullptr));
        label_6->setText(QApplication::translate("alocacao", "<center><b>Cadastro r\303\241pido:", nullptr));
        label_12->setText(QApplication::translate("alocacao", "<center><b>Consultar cadastro:", nullptr));
        btn_consultarcadastro->setText(QApplication::translate("alocacao", "Consultar", nullptr));
        label_8->setText(QString());
        label_7->setText(QApplication::translate("alocacao", "<b>Digite seu RG:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("alocacao", "Cadastro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alocacao: public Ui_alocacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALOCACAO_H
