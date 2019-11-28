#ifndef TRAITEMENTDONNEES_H
#define TRAITEMENTDONNEES_H

#include <QDialog>

namespace Ui {
class traitementdonnees;
}

class traitementdonnees : public QDialog
{
    Q_OBJECT

public:
    explicit traitementdonnees(QWidget *parent = nullptr);
    ~traitementdonnees();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::traitementdonnees *ui;
};

#endif // TRAITEMENTDONNEES_H
