   #include "ajouterdevis.h"
#include"devis.h"
#include "ui_ajouterdevis.h"
#include <QDate>
#include <QMessageBox>

ajouterdevis::ajouterdevis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterdevis)
{
    ui->setupUi(this);
}

ajouterdevis::~ajouterdevis()
{
    delete ui;
}

void ajouterdevis::on_buttonBox_accepted()
{
    int num = ui->num->text().toInt();
     QString nomdelasociete=ui->nomdelasociete->text();
     QString adresse=ui->adresse->text();
     double montant=ui->montant->text().toDouble();
     QString services=ui->servise->text();
     int payer=0;
     QDate date;

  devis d(nomdelasociete,adresse,services,num,montant,date.currentDate(),payer);
  bool test=d.ajouter();
  if(test)
{
      //ui->tabdevis->setModel(tmpdevis.afficher());//refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un devis"),
                  QObject::tr("devie ajouté.\n"), QMessageBox::Ok);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un devis"),
                  QObject::tr("Erreur num existe  !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


}
