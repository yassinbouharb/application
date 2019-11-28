#ifndef DEVISAFFICHER_H
#define DEVISAFFICHER_H
#include"devis.h"
#include <QDialog>

namespace Ui {
class devisafficher;
}

class devisafficher : public QDialog
{
    Q_OBJECT

public:
    explicit devisafficher(QWidget *parent = nullptr);
    ~devisafficher();

private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_activated(const QString &arg1);

    void on_comboBox_currentIndexChanged(int index);

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::devisafficher *ui;
    devis tmpdevis;
    QString r;
};

#endif // DEVISAFFICHER_H
