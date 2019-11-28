#ifndef CREERUNCOMPTEBANQUE_H
#define CREERUNCOMPTEBANQUE_H

#include <QDialog>

namespace Ui {
class creeruncomptebanque;
}

class creeruncomptebanque : public QDialog
{
    Q_OBJECT

public:
    explicit creeruncomptebanque(QWidget *parent = nullptr);
    ~creeruncomptebanque();


private slots:
    void on_buttonBox_accepted();

private:
    Ui::creeruncomptebanque *ui;
};

#endif // CREERUNCOMPTEBANQUE_H
