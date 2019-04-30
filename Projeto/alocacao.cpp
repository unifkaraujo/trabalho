#include "alocacao.h"
#include "ui_alocacao.h"
#include <QMessageBox>
#define MAX 10

alocacao::alocacao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::alocacao)
{
    ui->setupUi(this);
}

alocacao::~alocacao()
{
    delete ui;
}


int imprime() {
    return 1;
}


/* Código inicia aqui */


/* ------------------------------------------ CADASTRO PESSOAS - LDE ----------------------------------------------- */

int debug;

class No {
    public:
        /*int*/ QString rg;
        QString nome, idade;
        No* prox;
};


class cadastroLDE {

    public:
    No* primeiro;
    int max;
    No* imprimeAtual;

    cadastroLDE() {
        primeiro = NULL, max = 0;
    }

    bool insere(/*int*/ QString rg, QString nome, QString idade) {
        No* novo = new No;
        novo->rg = rg;
        novo->nome = nome;
        novo->idade = idade;
        No* proximo = primeiro;
        No* anterior = NULL;

        while (proximo && proximo->rg < rg) {
            anterior = proximo;
            proximo = proximo->prox;
        }

        if (proximo && proximo->rg==rg)
            return false;

        if (anterior)
            anterior->prox = novo;
        else
            primeiro = novo;

        novo->prox = proximo;
        max++;
        debug++;
        return true;
    }

    bool imprime(/*int*/ QString rg) {
        No* proximo = primeiro;
        while (proximo && proximo->rg < rg)
            proximo = proximo->prox;

        if (proximo && proximo->rg == rg) {
            imprimeAtual = proximo;
            return true;
        }
        else
            return false;
    }

    QString getNome() {
        return imprimeAtual->nome;
    }

    QString getIdade() {
        return imprimeAtual->idade;
    }

    QString getRg() {
        return imprimeAtual->rg;
    }

    bool validaRg (QString rg) {
       No* proximo = primeiro;

       for (int i=0; proximo && proximo->rg < rg ; i++) {
            proximo = proximo->prox;
        }

       if (proximo && proximo->rg == rg)
          return true;
       else
          return false;
      }



    /* A ideia é imprimir tudo para testar se se esta correto, mas tem que colocar mensagem */
    QString imprimedebug() {
        No* proximo = primeiro;
        while (proximo) {
            return proximo->nome;
        }
        return "Usuário sem cadastro no hotel";
    }


};

cadastroLDE usuario;


/* ------------------------------------------ FIM CADASTRO PESSOAS - LDE ------------------------------------------- */


/* ------------------------------------------ CADASTRO QUARTOS - LES  ---------------------------------------------- */

class reservaHotel {
  private:
    int qtdDisponivel;
    //QString reserva[MAX];
    int quartoDisponivel[MAX];
    /*int*/QString rgsReserva[MAX+1];

public:
    reservaHotel() {
        qtdDisponivel=MAX;
        int i = 0;
        for (i=0; i<MAX; i++) {
            quartoDisponivel[i] = i+1;
            rgsReserva[i] = "0";
        }
        rgsReserva[MAX] = "0";
    }

    bool insere(int quarto, /*int*/ QString rg) {

        int i;

        if (quarto > MAX || quarto < 0) {
            return false;
        }

        for (i=0; i<qtdDisponivel && quartoDisponivel[i]<quarto ; i++);

        if (quarto==quartoDisponivel[i]) {
               for (int j=i; j<qtdDisponivel; j++ ) {
                   quartoDisponivel[j] = quartoDisponivel[j+1];
               }
               qtdDisponivel--;
               rgsReserva[quarto] = rg;
               return true;
        }
        return false;
    }

    int imprimeQuartos(int i) {
        return quartoDisponivel[i];
      }

    QString imprimeQuartosAlocados(QString rg) {
       int i; QString quartoreservado=nullptr;
       for (i=0; i<MAX+1; i++) {

          if (rgsReserva[i]==rg) {
             quartoreservado += QString::number(i)+" ";
          }
       }
       return quartoreservado;
     }

    bool cancelaReserva (int quarto, QString rg) {

      if (quarto > MAX || quarto < 0) {
          return false;
        }

      int i;
      for (i=0; i<qtdDisponivel && quartoDisponivel[i]<quarto ; i++);

      if (quarto==quartoDisponivel[i] || rg != rgsReserva[quarto]) {
          return false;
      }

      else {
          for (int j=qtdDisponivel; j>i; j-- ) {
              quartoDisponivel[j] = quartoDisponivel[j-1];
          }
          quartoDisponivel[i] = quarto;
          qtdDisponivel ++;
          rgsReserva[quarto] = "0";
          return true;
      }
    }

    int getQtddisponivel() {
        return qtdDisponivel;
    }
};

reservaHotel usuarior;


/* ------------------------------------------ FIM CADASTRO QUARTOS - LES  ------------------------------------------- */




void alocacao::on_btn_cadastrar_clicked()
{
    QString nome = ui->txt_nome->text();
    QString nascimento = ui->txt_nascimento->text();
    QString rg = ui->txt_rg->text();

    bool valida = usuario.insere(rg,nome,nascimento);

    if (valida)
        QMessageBox::information(this,"Hotel XXX","Seu cadastro foi feito com sucesso, bem vindo!!");
    else
        QMessageBox::warning(this,"Hotel XXX","Usuário já cadastrado!!");
}

void alocacao::on_btn_consultarcadastro_clicked()
{
    QString rg = ui->txt_rg_2->text();
    bool verifica = usuario.imprime(rg);
    ui->listWidget_3->clear();

    if (verifica) {
       QString nome = usuario.getNome();
       QString idade = usuario.getIdade();
       QString rg = usuario.getRg();

       ui->listWidget_3->addItem("Nome: "+nome);
       ui->listWidget_3->addItem("Data de nascimento: "+idade);
       ui->listWidget_3->addItem("Rg: "+rg);
       ui->listWidget_3->addItem("Quartos reservados: "+usuarior.imprimeQuartosAlocados(rg));


    }
    else
       QMessageBox::warning(this,"Hotel XXX", "Usuário não cadastrado.");
}

void alocacao::on_btn_reserva_clicked()
{
      int quarto = (ui->comboBox->currentIndex())+1;
      QString rg = ui->txt_rgreserva->text();
      bool rgvalida = usuario.validaRg(rg);

      if(rgvalida) {
          bool reserva = usuarior.insere(quarto, rg);

          if (reserva) {
              QMessageBox::information(this,"Hotel XXX","Reserva feita com sucesso");

              ui->listWidget->clear();
              int disp = usuarior.getQtddisponivel();
              for (int i=0; i<disp; i++)
                  ui->listWidget->addItem(QString::number(usuarior.imprimeQuartos(i)));
          }
          else
              QMessageBox::warning(this,"Hotel XXX","Quarto indisponivel");

      }
      else
          QMessageBox::warning(this,"Hotel XXX","Você ainda não possui cadastro!");

}


void alocacao::on_btn_cancelarreserva_clicked()
{

    int quarto = (ui->comboBox->currentIndex())+1;
    QString rg = ui->txt_rgreserva->text();
    bool rgvalida = usuario.validaRg(rg);

    if(rgvalida) {
        bool cancelareserva = usuarior.cancelaReserva(quarto, rg);

        if (cancelareserva) {
            QMessageBox::information(this,"Hotel XXX","Cancelamento feito com sucesso");

            ui->listWidget->clear();
            int disp = usuarior.getQtddisponivel();
            for (int i=0; i<disp; i++)
                ui->listWidget->addItem(QString::number(usuarior.imprimeQuartos(i)));
        }
        else
            QMessageBox::warning(this,"Hotel XXX","Dados incorretos para cancelamento. Verifique "
                                                  "se o quarto está disponivel e se rg foi digitado corretamente ");

    }
    else
        QMessageBox::warning(this,"Hotel XXX","Você ainda não possui cadastro!");

}

void alocacao::on_pushButton_clicked()
{
    ui->listWidget->clear();
    int disp = usuarior.getQtddisponivel();
    for (int i=0; i<disp; i++)
        ui->listWidget->addItem(QString::number(usuarior.imprimeQuartos(i)));
}
