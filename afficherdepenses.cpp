#include "afficherdepenses.h"
#include "ui_afficherdepenses.h"
#include <QMessageBox>
afficherdepenses::afficherdepenses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::afficherdepenses)
{
    ui->setupUi(this);


        ui->comboBox->addItem("tri date");
        ui->comboBox->addItem("tri num");
        ui->comboBox->addItem("afficher les payer");
        ui->comboBox->addItem("afficher les non payer");
        ui->comboBox->addItem("montant");



}


afficherdepenses::~afficherdepenses()
{
    delete ui;
}





void afficherdepenses::on_comboBox_currentIndexChanged(int index)
{QString sql;
    if(index==0)

    {sql="select *from charges order by delai";}

   else if(index==1)
    {sql="select *from charges order by num";}
   else if(ui->comboBox->currentIndex()==2)

    {sql="select *from charges where payer=1";}
       else if(index==3)

    {sql="select *from charges where payer=0";
;}
  else   if(index==4)

     {sql="select *from charges order by montant";}
    ui->tableView->setModel(tmpdepense.afficher(sql));
}

void afficherdepenses::on_lineEdit_textEdited(const QString &arg1)
{



       QString r="select *from devis where num like " +arg1   ;



         ui->tableView->setModel(tmpdepense.afficher(r));



}
