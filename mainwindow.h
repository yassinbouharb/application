#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "devis.h"
#include "musique.h"
#include <QMainWindow>
#include <QDate>
#include<qcustomplot.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_clicked();

    void on_pushajouterdevis_clicked();

    void on_ajouterdepense_clicked();

    void on_pushdevis_clicked();

    void on_pushdepense_clicked();

    void on_pushtraitement_clicked();

    void on_pushannuler_clicked();

    void on_pushenvoyer_clicked();

    void on_pushbanque_clicked();

    void on_pushmail_clicked();

    void on_pushtelecharger_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButtonplus_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton__clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_f_clicked();
    void on_pushButton_clear_clicked();

    void on_pushButton_0_clicked();
    void on_pushButton_e_clicked();
    void on_pushButton_s_clicked();



    void on_pushButton_10_clicked();

    void on_pushButton_14_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_pushButton_11_clicked();

private:
    Ui::MainWindow *ui;
    QCustomPlot *customPlot;
    QString text;
    int i=0;
    musique m;
};

#endif // MAINWINDOW_H
