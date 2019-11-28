#include "banquedialogue.h"
#include "ui_banquedialogue.h"
#include "devis.h"
#include <creeruncomptebanque.h>
#include <iostream>
#include <fstream>
#include <string>
#include <QSqlQuery>
using namespace std;
banquedialogue::banquedialogue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::banquedialogue)
{
    ui->setupUi(this);


    ifstream fichier("banque.txt");

    if(fichier)
{       ui->pushButton->hide();
       string ligne;

       getline(fichier, ligne);
       QString l=QString::fromStdString(ligne);
          ui->RIB->setText(l) ;
          getline(fichier, ligne);
           l=QString::fromStdString(ligne);
             ui->nom->setText(l) ;



    double devis;
    double charges;
    double som;

        QSqlQuery r("SELECT SUM(montant) "
                    "FROM devis");


        QSqlQuery r1("SELECT SUM(montant) "
                     "FROM charges");
 r.first();
 r1.first();
        devis=r.value(0).toDouble();
        charges=r1.value(0).toDouble();
        som=devis-charges;
        l=QString::number(som);

        ui->solde->setText(l);


}


}

banquedialogue::~banquedialogue()
{
    delete ui;
}

void banquedialogue::on_pushButton_clicked()
{ creeruncomptebanque aff;
    aff.setModal(true);
    aff.exec();

}


