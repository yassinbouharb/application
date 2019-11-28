#include "creeruncomptebanque.h"
#include "ui_creeruncomptebanque.h"
#include <iostream>
#include <fstream>
#include <string>
creeruncomptebanque::creeruncomptebanque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creeruncomptebanque)
{
    ui->setupUi(this);
}

creeruncomptebanque::~creeruncomptebanque()
{
    delete ui;
}


void creeruncomptebanque::on_buttonBox_accepted()
{using namespace std;
    string const nomFichier("banque.txt");
    ofstream monFlux(nomFichier.c_str());

    monFlux <<ui->RIB->text().toStdString()<<"\n"<<ui->nom->text().toStdString() ;
}
