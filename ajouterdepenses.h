  #ifndef AJOUTERDEPENSES_H
#define AJOUTERDEPENSES_H

#include <QDialog>

namespace Ui {
class ajouterdepenses;
}

class ajouterdepenses : public QDialog
{
    Q_OBJECT

public:
    explicit ajouterdepenses(QWidget *parent = nullptr);
    ~ajouterdepenses();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::ajouterdepenses *ui;
};

#endif // AJOUTERDEPENSES_H
