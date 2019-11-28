#ifndef DEVIS_H
#define DEVIS_H


#include <QString>
#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class devis
{
private:

    QString nomdelasociete;
    QString adresseselasociete;
    QString service;
    int num;
    QDate date;
    double montant;
    int payer;
public:
    devis();

    devis(QString,QString,QString,int,double,QDate,int);
    bool ajouter();
    bool modifier(int id);
    QSqlQueryModel * afficher(QString R);
    bool supprimer(int);

    QString getnom(){return nomdelasociete; }
    QString getservice()
    {return  service;}
    QString getadresse()
    {return  adresseselasociete;
    }
    double getmontant()
    {return  montant;

    }




};

#endif // DEVIS_H
