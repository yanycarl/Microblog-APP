#ifndef DIALOGR_H
#define DIALOGR_H

#include <QDialog>
#include "mainhead.h"

namespace Ui {
class DialogR;
}

class DialogR : public QDialog
{
    Q_OBJECT

public:
    explicit DialogR(QWidget *parent = 0);
    ~DialogR();

private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::DialogR *ui;
};

#endif // DIALOGR_H
