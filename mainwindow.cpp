#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLineEdit>
#include <QLabel>
#include <QString>
#include <QMessageBox>


#include <cmath>


#define PI 3.1415926535


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}


int MainWindow::VariablesConvert(int& X, int& Y)
{
    QString StrX = ui->EnterX->text();
    QString StrY = ui->EnterY->text();
    bool ok;
    X = StrX.toInt(&ok);
    if (!ok) {
        QMessageBox::critical(this, "Input Error", "Please enter a valid value for X");
        return 1; 
    }
    Y = StrY.toInt(&ok);
    if (!ok) {
        QMessageBox::critical(this, "Input Error", "Please enter a valid value for Y");
        return 1;
    }
    return 0;
}


void MainWindow::on_plus_clicked()
{
    int X, Y;
    if (VariablesConvert(X, Y) != 0) return; 
    ui->ResultLabel->setText(QString::number(X + Y));
}


void MainWindow::on_division_clicked()
{
    int X, Y;
    VariablesConvert(X, Y, ui);
    if (Y == 0) {
        QMessageBox::critical(this, "Помилка змінної Y!", "На нуль ділити не можна");
    } else {
        ui->ResultLabel->setText(QString::number(X / Y));
    }
}


void MainWindow::on_minus_clicked()
{
    int X, Y;
    VariablesConvert(X, Y, ui);
    ui->ResultLabel->setText(QString::number(X - Y));
}


void MainWindow::on_multiply_clicked()
{
    int X, Y;
    VariablesConvert(X, Y, ui);
    ui->ResultLabel->setText(QString::number(X * Y));
}


void MainWindow::on_SinX_clicked()
{
    int X,Y;
    VariablesConvert(X, Y, ui);
    ui->ResultLabel->setText(QString::number(sin(X)));
}


void MainWindow::on_CosX_clicked()
{
    int X,Y;
    VariablesConvert(X, Y, ui);
    ui->ResultLabel->setText(QString::number(cos(X)));
}


void MainWindow::on_TanX_clicked()
{
    int X,Y;
    VariablesConvert(X, Y, ui);
    ui->ResultLabel->setText(QString::number(tan(X)));
}


void MainWindow::on_CtnX_clicked()
{
    int X,Y;
    VariablesConvert(X, Y, ui);
    ui->ResultLabel->setText(QString::number(1/tan(X)));
}


void MainWindow::on_ExpX_clicked()
{
    int X,Y;
    VariablesConvert(X, Y, ui);
    ui->ResultLabel->setText(QString::number(exp(X)));
}


void MainWindow::on_LnX_clicked()
{
    int X,Y;
    VariablesConvert(X, Y, ui);
    ui->ResultLabel->setText(QString::number(log(X)));
}


void MainWindow::on_LgX_clicked()
{
    int X,Y;
    VariablesConvert(X, Y, ui);
    ui->ResultLabel->setText(QString::number(log10(X)));
}


void MainWindow::on_LogY_clicked()
{
    int X,Y;
    VariablesConvert(X, Y, ui);
    ui->ResultLabel->setText(QString::number(log(X)/log(Y)));
}


void MainWindow::on_ArcsinX_clicked()
{
    int X,Y;
    VariablesConvert(X, Y, ui);
    ui->ResultLabel->setText(QString::number(asin(X)));
}


void MainWindow::on_Pow_clicked()
{
    int X,Y;
    VariablesConvert(X, Y, ui);
    ui->ResultLabel->setText(QString::number(pow(X,Y)));
}


void MainWindow::on_Sqrt_clicked()
{
    int X,Y;
    VariablesConvert(X, Y, ui);
    ui->ResultLabel->setText(QString::number(sqrt(X)));
}


void MainWindow::on_Pi_clicked()
{
    ui->ResultLabel->setText(QString::number(PI));
}

