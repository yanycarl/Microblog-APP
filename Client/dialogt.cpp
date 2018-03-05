#include "dialogt.h"
#include "ui_dialogt.h"

Dialogt::Dialogt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogt)
{
    ui->setupUi(this);
}

Dialogt::~Dialogt()
{
    delete ui;
}

void Dialogt::on_commandLinkButton_clicked()
{
    this->hide();
}

void Dialogt::clean(){
    ui->textBrowser->clear();
    Sleep(1000);
    clientSocket->readDatagram(buff2,1024,0,0);
    ui->textBrowser->setText(QString(buff2));
    return;
}

void Dialogt::on_commandLinkButton_2_clicked()
{
    d5.find("W"+author);
    d5.show();
}
