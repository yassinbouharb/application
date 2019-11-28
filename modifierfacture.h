#ifndef MODIFIERFACTURE_H
#define MODIFIERFACTURE_H
#include"depenses.h"
#include <QDialog>

namespace Ui {
class modifierfacture;
}

class modifierfacture : public QDialog
{
    Q_OBJECT

public:
    explicit modifierfacture(QWidget *parent = nullptr);
    ~modifierfacture();

public slots:
    void on_buttonBox_accepted();

private slots:
    void on_pushButton_clicked();

private:
    Ui::modifierfacture *ui;

};

#endif // MODIFIERFACTURE_H
