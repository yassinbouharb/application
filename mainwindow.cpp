#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDate>

#include <QMessageBox>
#include <mainwindow.h>
#include <ui_mainwindow.h>
#include "ajouterdevis.h"
#include "ajouterdepenses.h"
#include "afficherdepenses.h"
#include"supprimer.h"
#include"mail.h"
#include "banquedialogue.h"
#include"traitementdonnees.h"
#include "modifier.h"
#include<qdesktopservices.h>
#include<QUrl>
#include"musique.h"
#include "devisafficher.h"
#include <telecharger.h>
#include"mail.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
ui->setupUi(this);
musique m;
int l=0,h=0;
QVector<double>x(20), y(20),a(20),b(20),s(20),z(20);
QSqlQuery requete("select *from devis order by datee ");
int i=0;
while (requete.next())
    {if(x[i]!=requete.value(6).toDate().month())
    { y[i] =requete.value(4).toDouble();
        x[i]  = requete.value(6).toDate().month();
    s[i]=x[i];
          z[i]=x[i];
    }
else{

          y[i]+=requete.value(4).toDouble();
         }

        i++;}
// create graph and assign data to it:
ui->plot->addGraph();
ui->plot->graph(0)->setData(x, y);

// give the axes some labels:
ui->plot->xAxis->setLabel("date");
ui->plot->yAxis->setLabel("recettes ");
// set axes ranges, so we see all data:
ui->plot->xAxis->setRange(0, 12);
 ui->plot->yAxis->setRange(0, 1500);
 ui->plot->replot();
 QSqlQuery r("select *from charges order by delai");
  i=0;
 while (r.next())
     {if(a[i]!=r.value(4).toDate().month())
        { b[i] =r.value(5).toDouble();
       a[i]  = r.value(4).toDate().month();
    s[i]-=a[i];
    z[i]-=b[i];
     }
 else{

            b[i]+=r.value(5).toDouble();
          }

         i++;}



 // create graph and assign data to it:
 ui->widget2->addGraph();
 ui->widget2->graph(0)->setData(a,b);

 // give the axes some labels:
 ui->widget2->xAxis->setLabel("date");
 ui->widget2->yAxis->setLabel("depenses ");
 // set axes ranges, so we see all data:
 ui->widget2->xAxis->setRange(0, 12);
  ui->widget2->yAxis->setRange(0, 15000);
  ui->widget2->replot();



  ui->widget_3->addGraph();
  ui->widget_3->graph(0)->setData(s,z);

  // give the axes some labels:
  ui->widget_3->xAxis->setLabel("date");
  ui->widget_3->yAxis->setLabel("solde ");
  // set axes ranges, so we see all data:
  ui->widget_3->xAxis->setRange(0, 12);
   ui->widget_3->yAxis->setRange(-1500 , 1500);
   ui->widget_3->replot();
  // *************

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushajouterdevis_clicked()
{
    ajouterdevis ajouter;
        ajouter.setModal(true);
    ajouter.exec();
}

void MainWindow::on_ajouterdepense_clicked()
{
    ajouterdepenses depense;
    depense.setModal(true);
    depense.exec();
}

void MainWindow::on_pushdevis_clicked()
{
    devisafficher aff;
    aff.setModal(true);
    aff.exec();

}

void MainWindow::on_pushdepense_clicked()
{
    afficherdepenses aff;
    aff.setModal(true);
aff.exec();}

void MainWindow::on_pushtraitement_clicked()
{
    traitementdonnees aff;
    aff.setModal(true);
    aff.exec();
}

void MainWindow::on_pushannuler_clicked()
{
    supprimer aff;
    aff.setModal(true);
    aff.exec();
}

void MainWindow::on_pushenvoyer_clicked()
{
    mail aff;
    aff.setModal(true);
    aff.exec();
}

void MainWindow::on_pushbanque_clicked()
{
    banquedialogue aff;
    aff.setModal(true);
    aff.exec();
}

void MainWindow::on_pushButton_clicked()
{modifier aff;
    aff.setModal(true);
    aff.exec();

}

void MainWindow::on_pushmail_clicked()
{
    QDesktopServices::openUrl(QUrl("https://mail.google.com/mail/u/0/#inbox"));


}





void MainWindow::on_pushtelecharger_clicked()
{
    telecharger aff;
        aff.setModal(true);
        aff.exec();
}



void MainWindow::on_pushButton_1_clicked()
{text+='1';
ui->textBrowser->setText(text);
}

void MainWindow::on_pushButton_2_clicked()
{
    text+='2';
    ui->textBrowser->setText(text);
}

void MainWindow::on_pushButton_3_clicked()
{
    text+='3';
    ui->textBrowser->setText(text);
}

void MainWindow::on_pushButtonplus_clicked()
{
    text+='+';
    ui->textBrowser->setText(text);
}

void MainWindow::on_pushButton_4_clicked()
{
    text+='4';
    ui->textBrowser->setText(text);
}

void MainWindow::on_pushButton_5_clicked()
{
    text+='5';
    ui->textBrowser->setText(text);
}

void MainWindow::on_pushButton_6_clicked()
{
    text+='6';
    ui->textBrowser->setText(text);
}

void MainWindow::on_pushButton__clicked()
{
    text+='-';
    ui->textBrowser->setText(text);
}

void MainWindow::on_pushButton_7_clicked()
{
    text+='7';
    ui->textBrowser->setText(text);
}

void MainWindow::on_pushButton_8_clicked()
{
    text+='8';
    ui->textBrowser->setText(text);
}

void MainWindow::on_pushButton_9_clicked()
{
    text+='9';
    ui->textBrowser->setText(text);
}

void MainWindow::on_pushButton_f_clicked()
{
    text+='*';
    ui->textBrowser->setText(text);
}

void MainWindow::on_pushButton_clear_clicked()
{
    text="";
    ui->textBrowser->setText(text);
}

void MainWindow::on_pushButton_0_clicked()
{
    text+='0';
    ui->textBrowser->setText(text);
}

void MainWindow::on_pushButton_e_clicked()
{
    QString a,b;
    double r;
    text+='=';

    while((text[i]!='+')&&(text[i]!='-')&&(text[i]!='*')&&(text[i]!='/'))
        {
        a+=text[i];
        i++;
    }
    if(text[i]=='+')
    {
        i++;
        while ((text[i]!='+')&&(text[i]!='-')&&(text[i]!='*')&&(text[i]!='/')&&(text[i]!='='))
                {
                b+=text[i];
                i++;
            }
        r=a.toDouble()+b.toDouble();
    }
    if(text[i]=='-')
    {  i++;
        while ((text[i]!='+')&&(text[i]!='-')&&(text[i]!='*')&&(text[i]!='/')&&(text[i]!='='))
                {
                b+=text[i];
                i++;
            }
        r=a.toDouble()-b.toDouble();
    }
    if(text[i]=='*')
    {
        i++;
        while ((text[i]!='+')&&(text[i]!='-')&&(text[i]!='*')&&(text[i]!='/')&&(text[i]!='='))
                {
                b+=text[i];
                i++;
            }
        r=a.toDouble()*b.toDouble();
    }
    if(text[i]=='/')
    {
        i++;
        while ((text[i]!='+')&&(text[i]!='-')&&(text[i]!='*')&&(text[i]!='/')&&(text[i]!='='))
                {
                b+=text[i];
                i++;
            }
        r=a.toDouble()/b.toDouble();
    }
text+=QString::number(r);
i++;
    ui->textBrowser->setText(text);

}

void MainWindow::on_pushButton_s_clicked()
{
    text+='/';
    ui->textBrowser->setText(text);
}




void MainWindow::on_pushButton_10_clicked()
{
    m.playmusique();

}

void MainWindow::on_pushButton_14_clicked()
{
m.stopmusique();
}

void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    m.volume(position);
}

void MainWindow::on_pushButton_11_clicked()
{
    mail aff;
    aff.setModal(true);
    aff.exec();
}
