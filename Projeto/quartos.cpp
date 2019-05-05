#include "quartos.h"
#include "ui_quartos.h"
#include <QMessageBox>

quartos::quartos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quartos)
{
    ui->setupUi(this);
}

quartos::~quartos()
{
    delete ui;
}

/* Nossa LDDE estara disponivel para modificações (insere e remove) apenas no sistema dos funcionarios do hotel,
para os clientes só o imprime que é utilizavel. */

class No {
    public:
        int valor;
        float preco;
        No* prox;
        No* ant;
};

class LDDE {
    public:
        No* atual;
        No* primeiro;
        int n;
        LDDE () {
           primeiro=nullptr;

           /* void insere () */

           for (int i=0; i<10; i++) {
               No* novo = new No;
               novo->valor = i;
               novo->prox = nullptr;
               novo->ant = nullptr;

               No* proximo = primeiro;
               No* anterior = nullptr;

               while (proximo && proximo->valor < i) {
                  anterior = proximo;
                  proximo = proximo->prox;
               }

               if (anterior) {
                  anterior->prox = novo;

                  if (proximo)
                     proximo->ant = novo;

               }

               else {
                  if (proximo)
                     proximo->ant = novo;
                   primeiro=novo;
               }

               novo->prox=proximo;
               novo->ant=anterior;
               novo->preco=(i+1)*100;

               n++;
           }
           atual=primeiro;
        }


        /* Remove () - não codifiquei pois não iremos usar aqui */


        float imprime(int x) {
            No* proximo = atual;

            while(proximo->valor<x)
                proximo = proximo->prox;

            if (proximo->valor!=x) {
               while(proximo->valor>x)
                  proximo = proximo->ant;
            }
            atual = proximo;
            return proximo->preco;
        }

};

LDDE quartoshotel;

/* ----------------------------------------- Fim da LDDE ---------------------------------------------------------- */

void quartos::on_pushButton_clicked()
{
    bool quarto1,quarto2,quarto3,quarto4,quarto5,quarto6,quarto7,quarto8,quarto9,quarto10;

    quarto1=ui->checkBox->isChecked();
    quarto2=ui->checkBox_2->isChecked();
    quarto3=ui->checkBox_3->isChecked();
    quarto4=ui->checkBox_4->isChecked();
    quarto5=ui->checkBox_5->isChecked();
    quarto6=ui->checkBox_6->isChecked();
    quarto7=ui->checkBox_7->isChecked();
    quarto8=ui->checkBox_8->isChecked();
    quarto9=ui->checkBox_9->isChecked();
    quarto10=ui->checkBox_10->isChecked();

    if (quarto1)
       QMessageBox::about(this,"Hotel Quality","Quarto 1. Preço: "+QString::number(quartoshotel.imprime(0))+" R$");
    if (quarto2)
       QMessageBox::about(this,"Hotel Quality","Quarto 2. Preço: "+QString::number(quartoshotel.imprime(1))+" R$");
    if (quarto3)
       QMessageBox::about(this,"Hotel Quality","Quarto 3. Preço: "+QString::number(quartoshotel.imprime(2))+" R$");
    if (quarto4)
       QMessageBox::about(this,"Hotel Quality","Quarto 4. Preço: "+QString::number(quartoshotel.imprime(3))+" R$");
    if (quarto5)
       QMessageBox::about(this,"Hotel Quality","Quarto 5. Preço: "+QString::number(quartoshotel.imprime(4))+" R$");
    if (quarto6)
       QMessageBox::about(this,"Hotel Quality","Quarto 6. Preço: "+QString::number(quartoshotel.imprime(5))+" R$");
    if (quarto7)
       QMessageBox::about(this,"Hotel Quality","Quarto 7. Preço: "+QString::number(quartoshotel.imprime(6))+" R$");
    if (quarto8)
       QMessageBox::about(this,"Hotel Quality","Quarto 8. Preço: "+QString::number(quartoshotel.imprime(7))+" R$");
    if (quarto9)
       QMessageBox::about(this,"Hotel Quality","Quarto 9. Preço: "+QString::number(quartoshotel.imprime(8))+" R$");
    if (quarto10)
       QMessageBox::about(this,"Hotel Quality","Quarto 10. Preço: "+QString::number(quartoshotel.imprime(9))+" R$");
}
