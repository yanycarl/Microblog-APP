#include "dialogr.h"
#include "ui_dialogr.h"

DialogR::DialogR(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogR)
{
    ui->setupUi(this);
}

DialogR::~DialogR()
{
    delete ui;
}

void DialogR::on_commandLinkButton_clicked()
{
    if(ui->lineEdit->text().length()>9){
        QMessageBox m1;
        m1.warning(NULL, "注册警告", "用户ID不能超过9位,且必须均为数字或字母", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

    }
    id=ui->lineEdit->text();
    if(ui->lineEdit_2->text().length()>8){
        QMessageBox m1;
        m1.warning(NULL, "注册警告", "密码不能超过8位", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);

    }
    pass=ui->lineEdit_2->text().toLong();
    region=ui->lineEdit_4->text();
    if(ui->radioButton->isChecked()==TRUE){
        sex="male";
    }
    else{
        sex="female";
    }
    age=ui->lineEdit_3->text();
    occupation=ui->lineEdit_5->text();
    tel=ui->lineEdit_6->text();
    this->hide();


    token=QString::number(harshPass());
    token="R"+id+"%"+token+"%"+region+"%"+sex+"%";
    QByteArray a1;
    a1=token.toLatin1();
    buff=a1.data();
    clientSocket=new QUdpSocket(this);
    clientSocket->writeDatagram(buff,20,QHostAddress::LocalHost,8888);
}
