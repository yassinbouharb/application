#include "telecharger.h"
#include "ui_telecharger.h"
#include <QSqlQuery>
#include <fstream>
#include<string>
#include<QDate>
telecharger::telecharger(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telecharger)
{
    ui->setupUi(this);
    ui->comboBox->addItem("devis");
    ui->comboBox->addItem("charges");
}

telecharger::~telecharger()
{
    delete ui;
}

void telecharger::on_buttonBox_accepted()
{

if(ui->comboBox->currentIndex()==0)
{
using namespace ::std;
 QSqlQuery requete;
        requete.prepare ("SELECT *FROM devis where num =:id");
requete.bindValue(":id",ui->lineEdit->text().toInt());
requete.exec();
int num;
requete.first();
       num = requete.value(0).toInt();
     QString nom=requete.value(1).toString();
       QString adresse=requete.value(2).toString();
       double montant=requete.value(3).toDouble();
        string a=adresse.toStdString();
       ofstream objetfichier;
       string b=nom.toStdString();
       string nomficher= requete.value(0).toString().toStdString()+".txt";
       objetfichier.open(nomficher, ios::out); //on ouvrre le fichier en ecriture 
       objetfichier <<"\t \t  num: "<<  num  <<"  "<< endl;
       objetfichier <<"        adresse :\t"<< a   <<"  "<< endl;
      objetfichier<<"         nom de la societe:\t"<<b<<""<<endl;
      objetfichier<<"          montant total :\t"<<montant<<""<<endl;

       objetfichier.close(); //on ferme le fichier pour liberer la mémoire

}
else
{
    using namespace ::std;
     QSqlQuery requete;
            requete.prepare ("SELECT *FROM charges where num =:id");
    requete.bindValue(":id",ui->lineEdit->text().toInt());
    requete.exec();
    int num;
    requete.first();
           num = requete.value(3).toInt();
         string nom=requete.value(0).toString().toStdString();
           QString adresse=requete.value(1).toString();
           double montant=requete.value(5).toDouble();
            string a=adresse.toStdString();
           ofstream objetfichier;
           string RIB =requete.value(2).toString().toStdString();
            QDate delai=requete.value(4).toDate();
            string commetaire=requete.value(6).toString().toStdString();

           string nomficher= requete.value(3).toString().toStdString()+".txt";
           objetfichier.open(nomficher, ios::out); //on ouvrre le fichier en ecriture
           objetfichier <<"\t \t  num               : \n\n"<<  num  <<"  "<< endl;
             objetfichier<<"           RIB          :\t\n\n"<<RIB<<""<<endl;
           objetfichier <<"        adresse          :\t\n\n"<< a   <<"  "<< endl;
          objetfichier<<"          nom de la societe:\t\n\n"<<nom<<""<<endl;
          objetfichier<<"          montant total    :\t\n\n"<<montant<<""<<endl;
          objetfichier<<"          commentaire      :\t\n\n"<<commetaire<<""<<endl;
           objetfichier<<"         delai            :\t\n\n"<<delai.toString().toStdString()<<endl;
           objetfichier.close(); //on ferme le fichier pour liberer la mémoire


}
}



