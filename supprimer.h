#ifndef SUPPRIMER_H
#define SUPPRIMER_H
#include"devis.h"
#include"depenses.h"
#include <QDialog>

namespace Ui {
class supprimer;
}

class supprimer : public QDialog
{
    Q_OBJECT

public:
    explicit supprimer(QWidget *parent = nullptr);
    ~supprimer();

private slots:
    void on_buttonBox_accepted();

private:
    depenses tmpdepense;
    devis tmpdevis;
    Ui::supprimer *ui;

};

#endif // SUPPRIMER_H
