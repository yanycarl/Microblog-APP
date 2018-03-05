#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    buff=(char*)malloc(1024*sizeof(char));
    buff2=(char*)malloc(1024*sizeof(char));
    ui->label_4->move(1980,1080);
    ui->horizontalSlider->move(1980,1080);

}

MainWindow::~MainWindow()
{
    delete ui;
}

using namespace std;
long pass;
QString id;
QString token;
QString region;
QString sex;
QString age;
QString occupation;
QString tel;

char* buff;
char* buff2;
QUdpSocket* clientSocket;
QHostAddress add;
quint16 port;

QString author;

//--------------------加密模块-----------------------
#define P 10007
#define N 988027

double powxy(long a,long e){
    double result;
    double mu;
    double b;
    b=double(a);
    mu=(b*b);
    result=long(mu/N);
    result=mu-result*N;
    for(long i=1;i<=e-2;i++)
    {
        mu=(result*b);
        result=long(mu/N);
        result=mu-result*N;
    }
    return result;
}

long crypt(long m)
{
    long p;
    p=P;
    return powxy(m,p);
}


long harshPass(){
    return crypt(pass);
}

//--------------------加密模块（结束）----------------

//----------------------登陆按钮---------------------
void MainWindow::on_pushButton_clicked()
{
    id=ui->lineEdit->text();
    pass=ui->lineEdit_2->text().toLong();
    token=QString::number(harshPass());
    ui->pushButton->move(1920,1080);
    connectLogin();
}
//----------------------登陆按钮（结束）--------------

//---------------------连接登陆服务器-----------------
int MainWindow::connectLogin()
{
    token=QString::number(id.length())+id+token;
    QByteArray a1;
    a1=token.toLatin1();
    buff=a1.data();
    clientSocket=new QUdpSocket(this);
    clientSocket->writeDatagram(buff,20,QHostAddress::LocalHost,8888);
    ui->label_4->move(30,290);
    ui->horizontalSlider->move(50,390);

}
//---------------------连接登陆服务器（结束）-----------------

//-------------------------验证登陆-------------------------

void MainWindow::on_horizontalSlider_rangeChanged(int min, int max)
{

}

void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    int success=0;
    int i;
    if(position>90 && success==0)
    {
        clientSocket->readDatagram(buff2,1024);
        char* buff3;
        buff3=(char*)malloc(sizeof(char)*1024);
        QString s1;
        s1=QString(buff2);
        if(buff2[0]=='E'&&buff2[4]==':')
        {
            success=1;
            for(i=0;i<s1.length();i++)
            {
                buff3[i]=buff2[i+5];
            }
            buff3[i]='\0';
            token=QString(buff3);
        }
        else if(buff2[0]=='E'&&buff2[1]=='R'){
            success=-1;
        }
    }

    if(position>95&& success==1){
        Sleep(1000);
        //this->hide();
        m2.show();
    }
    else if(position>95&& success==0){
        ui->label_4->setText("网络连接异常，请重试");
        ui->horizontalSlider->setValue(0);
    }
    else if(position>95&& success==-1){
        ui->label_4->setText("用户名或密码输入错误，请重试");
    }
}

void MainWindow::on_lineEdit_2_cursorPositionChanged(int arg1, int arg2)
{
    ui->horizontalSlider->setValue(0);
    ui->label_4->setText("身份验证：请将滑块滑至最右端。\n\n\n\n");
    ui->label_4->move(1980,1080);
    ui->horizontalSlider->move(1980,1080);
    ui->pushButton->move(100,310);
}

//--------------------验证登陆（结束）----------------------

//--------------------  注册（开始） ----------------------

void MainWindow::on_commandLinkButton_clicked()
{
    r1.show();
}

//--------------------  注册（结束） ----------------------
