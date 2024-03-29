#ifndef MAIL_H
#define MAIL_H

#include <QDialog>
#include "smtp.h"
namespace Ui {
class mail;
}

class mail : public QDialog
{
    Q_OBJECT

public:
    explicit mail(QWidget *parent = nullptr);
    ~mail();

private slots:
    void sendMail();
    void mailSent(QString);
private:
    Ui::mail *ui;
};

#endif // MAIL_H
