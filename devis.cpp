#include "devis.h"
devis::devis()
{};
devis::devis(QString  nomdelasociete, QString adresse , QString service , int num , double montant ,QDate date,int payer)
{   this->num=num;
    this->montant=montant;
    this->date=date.currentDate();
    this->service=service;
    this->nomdelasociete=nomdelasociete;
    this->adresseselasociete=adresse;
    this->payer=payer;
}
bool devis::modifier(int id)
{
    QSqlQuery query;

    query.prepare("UPDATE devis SET ADRESSE_DE_LA_SOCIETE =:ADRESSE_DE_LA_SOCIETE ,  NOM_DE_LA_SOCIETE=:NOM_DE_LA_SOCIETE, montant=:montant, SERVICE=:service where num=:id" );
    query.bindValue(":NOM_DE_LA_SOCIETE",nomdelasociete);
    query.bindValue(":ADRESSE_DE_LA_SOCIETE",adresseselasociete);
    query.bindValue(":service",service);
    query.bindValue(":id",id);
    query.bindValue(":montant",montant);


    return    query.exec();

}
bool devis::ajouter()
{
QSqlQuery query;

query.prepare("INSERT INTO devis (NOM_DE_LA_SOCIETE, ADRESSE_DE_LA_SOCIETE, SERVICE, NUM , MONTANT , PAYER, DATEE) "
                    "VALUES (:NOM_DE_LA_SOCIETE , :ADRESSE_DE_LA_SOCIETE , :SERVICE , :NUM , :MONTANT ,:PAYER ,:DATEE)");
query.bindValue(":NOM_DE_LA_SOCIETE",nomdelasociete);
query.bindValue(":ADRESSE_DE_LA_SOCIETE",adresseselasociete);
query.bindValue(":SERVICE",service);
query.bindValue(":NUM",num);
query.bindValue(":MONTANT",montant);
query.bindValue(":PAYER",payer);
query.bindValue(":DATEE",date);

return    query.exec();
}

QSqlQueryModel * devis::afficher(QString R)
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery(R);
/*model->setHeaderData(0, Qt::Horizontal, QObject::tr("num"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom_de_la_societe "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("service"));
 model->setHeaderData(3, Qt::Horizontal, QObject::tr("nom_de_la_societe"));
  model->setHeaderData(3, Qt::Horizontal, QObject::tr("montant"));*/
    return model;
}

bool devis::supprimer(int idd)
{
QSqlQuery query;
query.prepare("Delete from devis where num =:id ");
query.bindValue(":id",idd);
return    query.exec();
}



