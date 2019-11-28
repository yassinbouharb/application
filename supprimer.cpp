#include "supprimer.h"
#include "ui_supprimer.h"
#include<QMessageBox>
supprimer::supprimer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supprimer)
{
    ui->setupUi(this);
    ui->comboBox->addItem("devis");
    ui->comboBox->addItem("facture");
}

supprimer::~supprimer()
{
    delete ui;
}

void supprimer::on_buttonBox_accepted()
{
    int id = ui->lineEdit->text().toInt();

    bool test;
    if(ui->comboBox->currentIndex()==0)
    {
         test=tmpdevis.supprimer(id);

    }
    else {
        test=tmpdepense.supprimer(id);
    }

    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("supprimer"),
                    QObject::tr(" supprimé.\n"), QMessageBox::Ok);

    }
    else
       { QMessageBox::critical(nullptr, QObject::tr("Supprimer "),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
}
