#include "dialogn.h"
#include "ui_dialogn.h"

Dialogn::Dialogn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogn)
{
    ui->setupUi(this);
}

Dialogn::~Dialogn()
{
    delete ui;
}

void Dialogn::on_pushButton_clicked()
{
    QString s1;
    s1=ui->lineEdit->text();
    s1="N"+QString::number(s1.length())+s1+ui->lineEdit_2->text()+"%"+token;
    buff=s1.toLatin1().data();
    cout<<buff<<endl;
    clientSocket->writeDatagram(buff,1024,QHostAddress::LocalHost,8888);//发送数据
    this->hide();
}
