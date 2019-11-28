#include "devisafficher.h"
#include "ui_devisafficher.h"
//#include "devis.h"
#include<string>

devisafficher::devisafficher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::devisafficher)
{QString sql;
    ui->setupUi(this);
    ui->tableView->setModel(tmpdevis.afficher("select *from devis"));
    ui->comboBox->addItem("tri date");
    ui->comboBox->addItem("tri num");
    ui->comboBox->addItem("afficher les payer");
    ui->comboBox->addItem("afficher les non payer");
    ui->comboBox->addItem("montant");



    ui->tableView->setModel(tmpdevis.afficher("select *from devis"));
}

devisafficher::~devisafficher()
{
    delete ui;
}



void devisafficher::on_comboBox_currentIndexChanged(int index)
{QString sql;
    if (index==0)
    {sql="select *from devis order by datee";}
    if (index==1)
    {sql="select *from devis order by num";}
    if (index==2)
    {sql="select *from devis where  payer=1";}
    if (index==3)
    {sql="select *from devis  where  payer=0";}
    if (index==4)
    {sql="select *from devis order by montant";}
    ui->tableView->setModel(tmpdevis.afficher(sql));
}


void devisafficher::on_lineEdit_textChanged(const QString &arg1)
{

   QString r="select *from devis where num like " +arg1   ;



     ui->tableView->setModel(tmpdevis.afficher(r));

}
