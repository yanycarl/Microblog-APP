#ifndef MAINWINDOW3_H
#define MAINWINDOW3_H

#include <QMainWindow>
#include "mainhead.h"
#include "dialogt.h"
#include "dialogn.h"
#include "dialogme.h"

namespace Ui {
class MainWindow3;
}

class MainWindow3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3(QWidget *parent = 0);
    ~MainWindow3();

private slots:
    void on_commandLinkButton_clicked();

    void on_commandLinkButton_2_clicked();

    void on_pushButton_clicked();

    void on_b1_clicked();

    void on_commandLinkButton_6_clicked();

    void on_commandLinkButton_3_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_commandLinkButton_4_clicked();

    void on_commandLinkButton_5_clicked();

private:
    Ui::MainWindow3 *ui;
    Dialogt d2;
    Dialogn d3;
    Dialogme d4;
    void start();
};

#endif // MAINWINDOW3_H
