#ifndef DIALOGT_H
#define DIALOGT_H

#include <QDialog>
#include "mainhead.h"
#include "dialogme.h"

namespace Ui {
class Dialogt;
}

class Dialogt : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogt(QWidget *parent = 0);
    ~Dialogt();
    void clean();

private slots:
    void on_commandLinkButton_clicked();

    void on_commandLinkButton_2_clicked();

private:
    Ui::Dialogt *ui;
    Dialogme d5;
};

#endif // DIALOGT_H
