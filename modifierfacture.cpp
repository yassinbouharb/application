#include "modifierfacture.h"
#include "ui_modifierfacture.h"

modifierfacture::modifierfacture(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifierfacture)
{
    ui->setupUi(this);
}

modifierfacture::~modifierfacture()
{
    delete ui;
}

void modifierfacture::on_buttonBox_accepted()
{

     QString nomdelasociete=ui->nom->text();
     QString adresse=ui->adresse->text();
     double montant=ui->monatant->text().toDouble();
     int RIB=ui->rib->text().toInt();
     QString commentaire=ui->commenetaire->text();
     QDate date=ui->dateEdit->date();
    int num =ui->num->text().toInt();

  depenses d(nomdelasociete,adresse,commentaire,RIB,0,montant,date);
  d.modifier(num);

}

void modifierfacture::on_pushButton_clicked()
{
    QSqlQuery r;

        r.prepare("select * from charges where num =:num");
        r.bindValue(":num",ui->num->text().toInt());
        r.exec();
        r.first();
        ui->nom->setText(r.value(0).toString());
        ui->adresse->setText(r.value(1).toString());
         ui->rib->setText(r.value(3).toString());
         ui->commenetaire->setText(r.value(7).toString());
         ui->dateEdit->setDate(r.value(5).toDate());
         ui->monatant->setText(r.value(6).toString());
}
