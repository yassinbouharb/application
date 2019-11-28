#ifndef AJOUTEDEPENSE_H
#define AJOUTEDEPENSE_H
#include <QString>
#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>


namespace Ui {
class ajouterdepense;
}

class ajouterdepense : public QDialog
{
    Q_OBJECT

public:

    explicit ajouterdepense(QWidget *parent = nullptr);
    ~ajouterdepense();
private:
    Ui::ajouterdepense *ui;
};



#endif // AJOUTEDEPENSE_H
