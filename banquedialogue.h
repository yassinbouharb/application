#ifndef BANQUEDIALOGUE_H
#define BANQUEDIALOGUE_H

#include <QDialog>

namespace Ui {
class banquedialogue;
}

class banquedialogue : public QDialog
{
    Q_OBJECT

public:
    explicit banquedialogue(QWidget *parent = nullptr);
    ~banquedialogue();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_destroyed();

private:
    Ui::banquedialogue *ui;
};

#endif // BANQUEDIALOGUE_H
