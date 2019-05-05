#ifndef QUARTOS_H
#define QUARTOS_H

#include <QDialog>

namespace Ui {
class quartos;
}

class quartos : public QDialog
{
    Q_OBJECT

public:
    explicit quartos(QWidget *parent = nullptr);
    ~quartos();

private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_clicked();

private:
    Ui::quartos *ui;
};

#endif // QUARTOS_H
