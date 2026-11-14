#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tiporaiz.h"
#include <sstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnResolver_clicked()
{
    bool okA;
    bool okB;
    bool okC;
    float a = ui->lineA->text().toFloat(&okA);
    float b = ui->lineB->text().toFloat(&okB);
    float c = ui->lineC->text().toFloat(&okC);

    if (!okA || !okB || !okC || a == 0) {
        ui->label_R_Resultado->setText("Ecuacion Invalida");
        return;
    }

    Ecuacion e(a, b, c);
    std::unique_ptr<Raiz> sol = TipoRaiz(e);

    std::ostringstream pol_caract;
    e.imprimir_pol_caract(pol_caract);
    ui->label_R_PolCaract->setText(QString::fromStdString(pol_caract.str()));

    std::ostringstream raices;
    sol->imprimir_raices(raices);
    ui->label_R_Raices->setText(QString::fromStdString(raices.str()));

    std::ostringstream resultado;
    sol->imprimir_resultado(resultado);
    ui->label_R_Resultado->setText(QString::fromStdString(resultado.str()));


}