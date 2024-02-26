#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_plus_clicked();

    void on_division_clicked();

    void on_minus_clicked();

    void on_multiply_clicked();

    void on_SinX_clicked();

    void on_CosX_clicked();

    void on_TanX_clicked();

    void on_CtnX_clicked();

    void on_ExpX_clicked();

    void on_LnX_clicked();

    void on_LgX_clicked();

    void on_LogY_clicked();

    void on_ArcsinX_clicked();

    void on_Pow_clicked();

    void on_ArcsinX_3_clicked();

    void on_ArcsinX_4_clicked();

    void on_Sqrt_clicked();

    void on_Pi_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
