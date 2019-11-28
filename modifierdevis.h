#ifndef MODIFIERDEVIS_H
#define MODIFIERDEVIS_H
#include<iostream>

#include <QDialog>
#include"devis.h"
namespace Ui {
class modifierdevis;
}

class modifierdevis : public QDialog
{
    Q_OBJECT

public:
    explicit modifierdevis(QWidget *parent = nullptr);
    ~modifierdevis();

public slots:
    devis on_buttonBox_accepted();

private slots:
    void on_pushButton_clicked();

private:
    Ui::modifierdevis *ui;
};

#endif // MODIFIERDEVIS_H
