#include "depenses.h"

depenses::depenses()
{}
depenses::depenses(QString nom, QString adresse, QString commentaire, int RIB,int num,double montant,QDate date)
{this->nomdelasociete=nom;
    this->RIB=RIB;
    this->num=num;
    this->date=date;
    this->montant=montant;
    this->commentaire=commentaire;
    this->adresseselasociete=adresse;

   this->payer=0;
}
bool depenses::modifier(int id)
{
    QSqlQuery query;

    query.prepare("UPDATE CHARGES SET NOM_DE_LA_SOCIETE =:NOM_DE_LA_SOCIETE ,ADRESSE_DE_LA_SOCIETE=:ADRESSE_DE_LA_SOCIETE ,RIB=:RIB, MONTANT=:MONTANT, DELAI=:DELAI,COMMENTAIRE=:COMMENTAIREwhere NUM=:id" );

    query.bindValue(":id",id);
    query.bindValue(":NOM_DE_LA_SOCIETE",nomdelasociete);
    query.bindValue(":ADRESSE_DE_LA_SOCIETE",adresseselasociete);
    query.bindValue(":RIB",RIB);

    query.bindValue(":MONTANT",montant);
    query.bindValue(":COMMENTAIRE",commentaire);
    query.bindValue(":DELAI",date);
    query.bindValue(":PAYER",payer);


    return    query.exec();}
bool depenses::ajouter()
{
QSqlQuery query;

query.prepare("INSERT INTO charges (NOM_DE_LA_SOCIETE, ADRESSE_DE_LA_SOCIETE, RIB, NUM , MONTANT, COMMENTAIRE,DELAI , PAYER) "
                    "VALUES (:NOM_DE_LA_SOCIETE , :ADRESSE_DE_LA_SOCIETE , :RIB , :NUM , :MONTANT , :COMMENTAIRE , :DELAI  , :PAYER)");
query.bindValue(":NOM_DE_LA_SOCIETE",nomdelasociete);
query.bindValue(":ADRESSE_DE_LA_SOCIETE",adresseselasociete);
query.bindValue(":RIB",RIB);
query.bindValue(":NUM",num);
query.bindValue(":MONTANT",montant);
query.bindValue(":COMMENTAIRE",commentaire);
query.bindValue(":DELAI",date);
query.bindValue(":PAYER",payer);
return    query.exec();
}
QSqlQueryModel * depenses::afficher(QString R)
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery(R);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("num"));
    return model;
}

bool depenses::supprimer(int idd)
{
QSqlQuery query;
query.prepare("Delete from charges where num =:id ");
query.bindValue(":id",idd);
return    query.exec();
}
