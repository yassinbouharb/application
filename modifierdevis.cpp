#include "modifierdevis.h"
#include "ui_modifierdevis.h"
#include "devis.h"
#include"QDate"
#include<QMessageBox>
#include<QSqlQuery>
modifierdevis::modifierdevis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifierdevis)
{
    ui->setupUi(this);
}

modifierdevis::~modifierdevis()
{
    delete ui;
}


devis modifierdevis::on_buttonBox_accepted()
{
        int num= ui->num->text().toInt();
     QString nomdelasociete=ui->nom->text();
     QString adresse=ui->adresse->text();
     double montant=ui->montant->text().toDouble();
     QString services=ui->service->text();
     int payer=0;
     QDate date;


    devis d(nomdelasociete,adresse,services,0,montant,date.currentDate(),payer);
    d.modifier(num);
return d;
}

void modifierdevis::on_pushButton_clicked()
{QSqlQuery r;

    r.prepare("select * from devis where num =:num");
    r.bindValue(":num",ui->num->text().toInt());
    r.exec();
    r.first();
    ui->nom->setText(r.value(1).toString());
    ui->service->setText(r.value(3).toString());
     ui->montant->setText(r.value(4).toString());
     ui->adresse->setText(r.value(2).toString());




}
