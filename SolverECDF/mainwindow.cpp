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
        ui->labelResultado->setText("Ecuacion Invalida");
        return;
    }

    Ecuacion e(a, b, c);
    std::unique_ptr<Raiz> sol = TipoRaiz(e);
    std::ostringstream ss;
    sol->imprimir(ss);
    ui->labelResultado->setText(QString::fromStdString(ss.str()));
}