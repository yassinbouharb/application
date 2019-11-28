#ifndef TELECHARGER_H
#define TELECHARGER_H

#include <QDialog>

namespace Ui {
class telecharger;
}

class telecharger : public QDialog
{
    Q_OBJECT

public:
    explicit telecharger(QWidget *parent = nullptr);
    ~telecharger();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::telecharger *ui;
};

#endif // TELECHARGER_H
