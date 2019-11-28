#ifndef DEPENSES_H
#define DEPENSES_H
#include <QString>
#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>

class depenses
{

 public:


    depenses(QString, QString, QString, int,int,double,QDate);
    bool ajouter();
    QSqlQueryModel * afficher(QString R);
    bool supprimer(int);
    depenses();
bool modifier(int);

private:

    QString nomdelasociete;
    QString adresseselasociete;
    int RIB;
    int num;
    QDate date;
    double montant;
    QString commentaire;
    int payer;
};

#endif // DEPENSES_H
