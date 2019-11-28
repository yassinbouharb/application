#include "modifier.h"
#include "ui_modifier.h"
#include"modifierdevis.h"
#include"modifierfacture.h"
#include"devis.h"
#include<QMessageBox>
modifier::modifier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifier)
{
    ui->setupUi(this);

}

modifier::~modifier()
{
    delete ui;
}



void modifier::on_depenses_clicked()
{
    modifierfacture aff2;
    aff2.setModal(true);
    aff2.exec();
}

void modifier::on_devis_clicked()
{
    modifierdevis aff;
            aff.setModal(true);
            aff.exec();
}
