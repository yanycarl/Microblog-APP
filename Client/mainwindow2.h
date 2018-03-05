#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <mainhead.h>
#include <mainwindow3.h>

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = 0);
    ~MainWindow2();

private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::MainWindow2 *ui;
    MainWindow3 m3;
};

#endif // MAINWINDOW2_H
