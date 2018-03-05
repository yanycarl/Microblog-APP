#ifndef DIALOGN_H
#define DIALOGN_H

#include <QDialog>
#include "mainhead.h"

namespace Ui {
class Dialogn;
}

class Dialogn : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogn(QWidget *parent = 0);
    ~Dialogn();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialogn *ui;
};

#endif // DIALOGN_H
