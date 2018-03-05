#include "mainwindow3.h"
#include "ui_mainwindow3.h"

MainWindow3::MainWindow3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow3)
{
    ui->setupUi(this);
    ui->lineEdit->move(1920,1080);
    ui->pushButton->move(1920,1080);
    buff=(char*)malloc(sizeof(char)*1024);
    buff2=(char*)malloc(sizeof(char)*1024);
    start();
}

MainWindow3::~MainWindow3()
{
    delete ui;
}

QString s1,s2,s3,s4;

void MainWindow3::start(){
    ui->lineEdit->move(1920,1080);
    ui->pushButton->move(1920,1080);
    s1="无内容";
    s2="无内容";
    s3="无内容";
    s4="无内容";
    ui->b1->hide();
    ui->b2->hide();
    ui->b3->hide();
    ui->b4->hide();
    ui->commandLinkButton_6->hide();
}

void MainWindow3::on_commandLinkButton_clicked()//搜索(S)
{
    start();
    ui->lineEdit->move(250,130);
    ui->pushButton->move(390,330);
}

void MainWindow3::on_commandLinkButton_2_clicked()//全球动态(G)
{
    start();
    s1="G";
    int success=0;
    int i;
    QString temp;
    char* buff3;
    buff3=(char*)malloc(1024);
    buff=s1.toLatin1().data();
    clientSocket->writeDatagram(buff,QHostAddress::LocalHost,8888);
    clientSocket->waitForReadyRead(1000);
    clientSocket->readDatagram(buff2,1024,&add,&port);

    temp=QString(buff2);
    if(buff2[0]=='E'&&buff2[4]==':')
    {
        success=1;
    }
    else if(buff2[0]=='E'&&buff2[1]=='R'){
        success=-1;
    }


    if(success==1){
        int j=0;
        int counter=0;
        for(i=6;i<temp.length();i++){
            if(buff2[i]=='%'){
                counter++;
                buff3[j]='\0';
                j=0;
                if(counter==1)
                    s1=QString(buff3);
                if(counter==2)
                    s2=QString(buff3);
                if(counter==3)
                    s3=QString(buff3);
                if(counter==4)
                    s4=QString(buff3);

            }
            else if(buff2[6]==' '){
                s1="无内容";
                s2="无内容";
                s3="无内容";
                s4="无内容";
            }
            else{
                buff3[j]=buff2[i];
                j++;
            }
        }
    }


    else if(success==0){
        s1="网络连接异常，请重试";
    }

    else if(success==-1){
        s1="数据异常";
    }

    ui->b1->setText(s1);
    ui->b1->show();
    ui->b2->setText(s2);
    ui->b2->show();
    ui->b3->setText(s3);
    ui->b3->show();
    ui->b4->setText(s4);
    ui->b4->show();
}

void MainWindow3::on_pushButton_clicked()//开始搜索
{
    start();
    int success=0;
    int i;
    QString temp;
    char* buff3;
    buff3=(char*)malloc(1024);
    buff=QString("S"+ui->lineEdit->text()).toLatin1().data();
    clientSocket->writeDatagram(buff,1024,QHostAddress::LocalHost,8888);//发送数据
    clientSocket->waitForReadyRead(1000);
    clientSocket->readDatagram(buff2,1024,&add,&port);

    temp=QString(buff2);
    if(buff2[0]=='E'&&buff2[4]==':')
    {
        success=1;
    }
    else if(buff2[0]=='E'&&buff2[1]=='R'){
        success=-1;
    }


    if(success==1){
        int j=0;
        int counter=0;
        for(i=6;i<temp.length();i++){
            if(buff2[i]=='%'){
                counter++;
                buff3[j]='\0';
                j=0;
                if(counter==1)
                    s1=QString(buff3);
                if(counter==2)
                    s2=QString(buff3);
                if(counter==3)
                    s3=QString(buff3);
                if(counter==4)
                    s4=QString(buff3);

            }
            else if(buff2[6]==' '){
                s1="无内容";
                s2="无内容";
                s3="无内容";
                s4="无内容";
            }
            else{
                buff3[j]=buff2[i];
                j++;
            }
        }
    }


    else if(success==0){
        s1="网络连接异常，请重试";
    }

    else if(success==-1){
        s1="数据异常";
    }

    ui->b1->setText(s1);
    ui->b1->show();
    ui->b2->setText(s2);
    ui->b2->show();
    ui->b3->setText(s3);
    ui->b3->show();
    ui->b4->setText(s4);
    ui->b4->show();
    return;

}


void MainWindow3::on_commandLinkButton_6_clicked()//发布动态
{
    start();
    d3.show();
}

void MainWindow3::on_commandLinkButton_3_clicked()//个人动态
{
    start();
    ui->commandLinkButton_6->show();
    int success=0;
    int i;
    QString temp;
    char* buff3;
    buff3=(char*)malloc(1024);
    buff=QString("P"+token).toLatin1().data();
    clientSocket->writeDatagram(buff,QHostAddress::LocalHost,8888);
    clientSocket->waitForReadyRead(1000);
    clientSocket->readDatagram(buff2,1024,&add,&port);

    temp=QString(buff2);
    if(buff2[0]=='E'&&buff2[4]==':')
    {
        success=1;
    }
    else if(buff2[0]=='E'&&buff2[1]=='R'){
        success=-1;
    }


    if(success==1){
        int j=0;
        int counter=1;
        for(i=6;i<temp.length();i++){
            if(buff2[i]=='%'){
                counter++;
                buff3[j]='\0';
                j=0;
                if(counter==2)
                    s2=QString(buff3);
                if(counter==3)
                    s3=QString(buff3);

            }
            else if(buff2[6]==' '){
                s1="无内容";
                s2="无内容";
                s3="无内容";
                s4="无内容";
            }
            else if(i==temp.length()-1){
                buff3[j]=buff2[i];
                j++;
                buff3[j]='\0';
                if(counter==3)
                    s4=QString(buff3);
                if(counter==2)
                    s3=QString(buff3);
                if(counter==1)
                    s2=QString(buff3);
            }
            else {
                buff3[j]=buff2[i];
                j++;
            }
        }
    }


    else if(success==0){
        s1="网络连接异常，请重试";
    }

    else if(success==-1){
        s1="数据异常";
    }


    ui->b2->setText(s2);
    ui->b2->show();
    ui->b3->setText(s3);
    ui->b3->show();
    ui->b4->setText(s4);
    ui->b4->show();
}


void MainWindow3::on_b1_clicked()
{
    buff=QString("F"+ui->b1->text()).toLatin1().data();
    clientSocket->writeDatagram(buff,1024,QHostAddress::LocalHost,8888);//发送数据
    d2.clean();
    d2.show();
}

void MainWindow3::on_b2_clicked()
{
    buff=QString("F"+ui->b2->text()).toLatin1().data();
    clientSocket->writeDatagram(buff,1024,QHostAddress::LocalHost,8888);//发送数据
    author=ui->b2->text();
    d2.clean();
    d2.show();

}

void MainWindow3::on_b3_clicked()
{
    buff=QString("F"+ui->b3->text()).toLatin1().data();
    clientSocket->writeDatagram(buff,1024,QHostAddress::LocalHost,8888);//发送数据
    author=ui->b3->text();
    d2.clean();
    d2.show();
}


void MainWindow3::on_b4_clicked()
{
    buff=QString("F"+ui->b4->text()).toLatin1().data();
    clientSocket->writeDatagram(buff,1024,QHostAddress::LocalHost,8888);//发送数据
    author=ui->b4->text();
    d2.clean();
    d2.show();
}

void MainWindow3::on_commandLinkButton_4_clicked()//关于我
{
    start();
    d4.find("I"+id);
    d4.show();
}

void MainWindow3::on_commandLinkButton_5_clicked()
{
    this->hide();
}
