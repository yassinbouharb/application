#include "depensesafficher.h"
#include "ui_depensesafficher.h"

depensesafficher::depensesafficher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::depensesafficher)
{
    ui->setupUi(this);
}

depensesafficher::~depensesafficher()
{
    delete ui;
}
