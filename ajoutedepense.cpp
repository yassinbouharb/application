#include "ajoutedepense.h"
#include "ui_ajouterdepense.h"
#include <QDate>
#include <QMessageBox>
ajouterdepense::ajouterdepense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouterdepense)
{
    ui->setupUi(this);
}

ajouterdepense::~ajouterdepenses()
{
    delete ui;
}
