#include "dialogme.h"
#include "ui_dialogme.h"

Dialogme::Dialogme(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogme)
{
    ui->setupUi(this);
    ui->pushButton->move(1920,1080);
}

Dialogme::~Dialogme()
{
    delete ui;
}

void Dialogme::find(QString idFind){
    int i,j;
    char* buff3;
    buff3=(char*)malloc(sizeof(char)*1024);
    buff=QString(idFind).toLatin1().data();
    clientSocket->writeDatagram(buff,1024,QHostAddress::LocalHost,8888);//发送数据
    clientSocket->waitForReadyRead(1000);
    clientSocket->readDatagram(buff2,1024);
    QString s,s2;
    int count=0;
    s=QString(buff2);
    j=0;
    for(i=0;i<s.length();i++){
        if(buff2[i]!='%'){
            buff3[j]=buff2[i];
            j++;
        }
        else{
            buff3[j]='\0';
            j=0;
            s2=QString(buff3);
            count++;
            if(count==1){
                ui->lineEdit->setText(s2);
            }
            else if(count==2){
                ui->lineEdit_2->setText(s2);
            }
            else if(count==3){
                ui->lineEdit_4->setText(s2);
            }
            else if(count==4){
                ui->lineEdit_5->setText(s2);
            }
            else if(count==5){
                ui->lineEdit_6->setText(s2);
            }
            else if(count==6){
                ui->lineEdit_7->setText(s2);
            }
            else if(count==7){
                ui->lineEdit_8->setText(s2);
            }
            else if(count==8){
                ui->lineEdit_3->setText(s2);
            }
        }
    }
    return;
}

void Dialogme::on_lineEdit_editingFinished()
{
    ui->pushButton->move(320,620);
    ui->pushButton_2->move(610,620);
}

void Dialogme::on_pushButton_2_clicked()
{
    this->hide();
    ui->pushButton_2->move(480,620);
    ui->pushButton->move(1920,1080);
}

void Dialogme::on_lineEdit_2_editingFinished()
{
    ui->pushButton->move(320,620);
    ui->pushButton_2->move(610,620);
}

void Dialogme::on_lineEdit_3_editingFinished()
{
    ui->pushButton->move(320,620);
    ui->pushButton_2->move(610,620);
}

void Dialogme::on_lineEdit_4_editingFinished()
{
    ui->pushButton->move(320,620);
    ui->pushButton_2->move(610,620);
}

void Dialogme::on_lineEdit_5_editingFinished()
{
    ui->pushButton->move(320,620);
    ui->pushButton_2->move(610,620);
}

void Dialogme::on_lineEdit_6_editingFinished()
{
    ui->pushButton->move(320,620);
    ui->pushButton_2->move(610,620);
}

void Dialogme::on_lineEdit_7_editingFinished()
{
    ui->pushButton->move(320,620);
    ui->pushButton_2->move(610,620);
}

void Dialogme::on_lineEdit_8_editingFinished()
{
    ui->pushButton->move(320,620);
    ui->pushButton_2->move(610,620);
}

void Dialogme::on_lineEdit_4_cursorPositionChanged(int arg1, int arg2)
{

}
