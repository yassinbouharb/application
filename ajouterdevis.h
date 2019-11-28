#ifndef AJOUTERDEVIS_H
#define AJOUTERDEVIS_H

#include <QDialog>

namespace Ui {
class ajouterdevis;
}

class ajouterdevis : public QDialog
{
    Q_OBJECT

public:
    explicit ajouterdevis(QWidget *parent = nullptr);
    ~ajouterdevis();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::ajouterdevis *ui;
};

#endif // AJOUTERDEVIS_H
