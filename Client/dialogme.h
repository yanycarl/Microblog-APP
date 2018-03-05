#ifndef DIALOGME_H
#define DIALOGME_H

#include <QDialog>
#include <mainhead.h>

namespace Ui {
class Dialogme;
}

class Dialogme : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogme(QWidget *parent = 0);
    ~Dialogme();
    void find(QString idFind);
private slots:
    void on_lineEdit_editingFinished();

    void on_pushButton_2_clicked();

    void on_lineEdit_2_editingFinished();

    void on_lineEdit_4_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_3_editingFinished();

    void on_lineEdit_4_editingFinished();

    void on_lineEdit_5_editingFinished();

    void on_lineEdit_6_editingFinished();

    void on_lineEdit_7_editingFinished();

    void on_lineEdit_8_editingFinished();

private:
    Ui::Dialogme *ui;
};

#endif // DIALOGME_H
