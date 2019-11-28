#ifndef MODIFIER_H
#define MODIFIER_H
#include"modifierdevis.h"
#include <QDialog>
#include "modifierfacture.h"
namespace Ui {
class modifier;
}

class modifier : public QDialog
{
    Q_OBJECT

public:
    explicit modifier(QWidget *parent = nullptr);
    ~modifier();

private slots:
    void on_buttonBox_accepted();

    void on_depenses_clicked();

    void on_devis_clicked();

private:
    Ui::modifier *ui;
    modifierdevis *tmp;
    modifierfacture tmpfacture;
};

#endif // MODIFIER_H
