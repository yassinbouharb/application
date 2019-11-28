#ifndef DEPENSESAFFICHER_H
#define DEPENSESAFFICHER_H

#include <QDialog>

namespace Ui {
class depensesafficher;
}

class depensesafficher : public QDialog
{
    Q_OBJECT

public:
    explicit depensesafficher(QWidget *parent = nullptr);
    ~depensesafficher();

private:
    Ui::depensesafficher *ui;
};

#endif // DEPENSESAFFICHER_H
