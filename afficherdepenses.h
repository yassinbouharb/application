#ifndef AFFICHERDEPENSES_H
#define AFFICHERDEPENSES_H
#include "depenses.h"
#include <QDialog>

namespace Ui {
class afficherdepenses;
}

class afficherdepenses : public QDialog
{
    Q_OBJECT

public:
    explicit afficherdepenses(QWidget *parent = nullptr);
    ~afficherdepenses();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::afficherdepenses *ui;
    depenses tmpdepense;
};

#endif // AFFICHERDEPENSES_H
