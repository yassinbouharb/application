#include "ajouterdepenses.h"
#include "ui_ajouterdepenses.h"
#include "depenses.h"
#include <QMessageBox>
ajouterdepenses::ajouterdepenses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterdepenses)
{
    ui->setupUi(this);
}

ajouterdepenses::~ajouterdepenses()
{
    delete ui;
}

void ajouterdepenses::on_buttonBox_accepted()
{
    int num = ui->num->text().toInt();
     QString nomdelasociete=ui->nom->text();
     QString adresse=ui->adresse->text();
     double montant=ui->monatant->text().toDouble();
     int RIB=ui->rib->text().toInt();
     QString commentaire=ui->commenetaire->text();
     QDate date=ui->dateEdit->date();

  depenses d(nomdelasociete,adresse,commentaire,RIB,num,montant,date);
  bool test=d.ajouter();
  if(test)
{
      //ui->tabdevis->setModel(tmpdevis.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter une charge"),
                  QObject::tr("charge ajouté.\n"), QMessageBox::Ok);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter une charge"),
                  QObject::tr("Erreur num deja exixte !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}
