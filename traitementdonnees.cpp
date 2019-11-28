#include "traitementdonnees.h"
#include "ui_traitementdonnees.h"
#include<QSqlQuery>
#include<QMessageBox>
traitementdonnees::traitementdonnees(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::traitementdonnees)
{
    ui->setupUi(this);
    ui->comboBox->addItem("devis");
    ui->comboBox->addItem("facture");
}

traitementdonnees::~traitementdonnees()
{
    delete ui;
}

void traitementdonnees::on_buttonBox_accepted()
{   int id=ui->lineEdit->text().toInt();

    QSqlQuery query;


     QMessageBox::information(nullptr, QObject::tr("traitement"),
                 QObject::tr("traitement effectuer"), QMessageBox::Ok );
    if(ui->comboBox->currentIndex()==0)
    {
        query.prepare("UPDATE devis SET PAYER = :PAYER where num= :idd" );
         query.bindValue(":idd",id);
         query.bindValue(":PAYER",1);
         query.exec();

    }
    else {
        QSqlQuery query;

        query.prepare("UPDATE charges SET PAYER = 1 where num=:id" );
         query.bindValue(":id",id);
         query.exec();

    }
}
