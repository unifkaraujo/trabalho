#ifndef ALOCACAO_H
#define ALOCACAO_H

#include <QDialog>

namespace Ui {
class alocacao;
}

class alocacao : public QDialog
{
    Q_OBJECT

public:
    explicit alocacao(QWidget *parent = nullptr);
    ~alocacao();

private slots:
    void on_btn_reserva_clicked();

    void on_btn_cadastrar_clicked();

    void on_btn_consultarcadastro_clicked();

    void on_btn_cancelarreserva_clicked();

    void on_pushButton_clicked();

private:
    Ui::alocacao *ui;
};

#endif // ALOCACAO_H
