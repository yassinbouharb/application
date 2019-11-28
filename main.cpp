#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connexion.h"
#include <QtDebug>
#include<QFile>
int main(int argc, char *argv[])
{
 QApplication a(argc, argv);


    QFile File("C:/Users/LENOVO/Desktop/esprit/projet c++/devis/style/Darkeum.qss");

File.open(QFile::ReadOnly);
QString s=QLatin1String(File.readAll());
a.setStyleSheet(s);


        Connexion c;

      bool test=c.ouvrirConnexion();
      MainWindow w;
     if(test)
      {w.showNormal();

          QMessageBox::information(nullptr, QObject::tr("database is  open"),
                      QObject::tr("connection avec succés"), QMessageBox::Ok );

      }
      else
          QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                      QObject::tr("connection failed.\n"
                                  "Click Cancel to exit."), QMessageBox::Close);

        return a.exec();}
