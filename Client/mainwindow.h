#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <mainhead.h>
#include <mainwindow2.h>
#include <dialogr.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider_rangeChanged(int min, int max);

    void on_horizontalSlider_sliderMoved(int position);

    void on_lineEdit_2_cursorPositionChanged(int arg1, int arg2);

    void on_commandLinkButton_clicked();

private:
    Ui::MainWindow *ui;
    int connectLogin();
    MainWindow2 m2;
    DialogR r1;
};

#endif // MAINWINDOW_H
