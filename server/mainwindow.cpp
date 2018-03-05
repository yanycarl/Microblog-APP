#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QObject>
#include <windows.h>
#include <time.h>
#include <qstring.h>
#include <qfile.h>
#include <qtextstream.h>
#include <qtextcodec.h>

#include "QtSql/QtSql"
#define BUFF_SIZE 1024
#define Default_Port 8888

QUdpSocket *clientConnection;
Thread* t1;
QHostAddress add;
quint16 port;

using namespace std;

void clean(char* orgin,char* net){
    QString s1;
    int j=0;
    s1=QString(orgin);
    for(int i=0;i<s1.length();i++){
        if((orgin[i]>='0'&&orgin[i]<='9')||(orgin[i]>='A'&&orgin[i]<='Z')||(orgin[i]>='a'&&orgin[i]<='z')){
            net[j]=orgin[i];
            j++;
        }
    }
    net[j]='\0';
    return;
}

QString connectSQL_P2(QString &token){
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//连接ODBC的Driver
    QString dsn = QString::fromLocal8Bit("qtodbc");
    db.setHostName("127.0.0.1");//设置名称、用户名、密码
    db.setDatabaseName(dsn);
    db.setUserName("sa");
    db.setPassword("131415926");
    if(!db.open())
    {
        qDebug()<<db.lastError().text();
        return 0;
    }
    else
    qDebug()<<"database open success!";
    QSqlQuery query(db);
    QSqlQuery query2(db);
    QString s1="";


    //----------------QUERY START---------------

        query.exec("select * from usertable where id='"+token+"'");

    //----------------QUERY END-----------------

    while(query.next()){
        s1=query.value(0).toString()+"%"+query.value(2).toString()+"%"+query.value(3).toString()+"%"+query.value(4).toString()+"%"+query.value(5).toString()+"%"+query.value(6).toString()+"%"+query.value(7).toString()+"%"+query.value(8).toString()+"%";
    }
    return s1;

}

QString connectSQL_P(QString &token){
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//连接ODBC的Driver
    QString dsn = QString::fromLocal8Bit("qtodbc");
    db.setHostName("127.0.0.1");//设置名称、用户名、密码
    db.setDatabaseName(dsn);
    db.setUserName("sa");
    db.setPassword("131415926");
    if(!db.open())
    {
        qDebug()<<db.lastError().text();
        return 0;
    }
    else
    qDebug()<<"database open success!";
    QSqlQuery query(db);
    QSqlQuery query2(db);
    QString s1="";


    //----------------QUERY START---------------

        query2.exec("select * from pagelist where title='"+token+"'");
        while(query2.next()){
            s1=query.value(0).toString();
        }
        query.exec("select * from usertable where token='"+s1+"'");

    //----------------QUERY END-----------------

    while(query.next()){
        s1=query.value(0).toString()+"%"+query.value(2).toString()+"%"+query.value(3).toString()+"%"+query.value(4).toString()+"%"+query.value(5).toString()+"%"+query.value(6).toString()+"%"+query.value(7).toString()+"%"+query.value(8).toString()+"%";
    }
    return s1;

}

void connectSQL_N(QString token1,QString token2,QString token3){
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//连接ODBC的Driver
    QString dsn = QString::fromLocal8Bit("qtodbc");
    db.setHostName("127.0.0.1");//设置名称、用户名、密码
    db.setDatabaseName(dsn);
    db.setUserName("sa");
    db.setPassword("131415926");
    if(!db.open())
    {
        qDebug()<<db.lastError().text();
        return;
    }
    else
    qDebug()<<"database open success!";
    QSqlQuery query(db);

    //----------------QUERY START---------------
    query.exec("insert into pagelist values('"+token3+"','"+token1+"','"+token1+"');");


    //----------------QUERY END-----------------

    QFile file(token1+".txt");
    if ( file.open(QIODevice::WriteOnly) )
    {
        QTextStream stream(&file);
        file.write(token2.toLatin1().data());
        file.close();
    }
    return;
}

QString connectSQL_F(QString &title){
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//连接ODBC的Driver
    QString dsn = QString::fromLocal8Bit("qtodbc");
    db.setHostName("127.0.0.1");//设置名称、用户名、密码
    db.setDatabaseName(dsn);
    db.setUserName("sa");
    db.setPassword("131415926");
    if(!db.open())
    {
        qDebug()<<db.lastError().text();
        return 0;
    }
    else
    qDebug()<<"database open success!";
    QSqlQuery query(db);
    QString s1="";

    cout<<"HH1H:"<<title.toLatin1().data()<<endl;

    //----------------QUERY START---------------
    query.exec("select * from pagelist where title=\'"+title+"\'; ");


    //----------------QUERY END-----------------

    if(query.next()){
        cout<<"Here"<<endl;
        s1=query.value(1).toString();
        QFile file(s1+".txt");
        s1="";
        if ( file.open(QIODevice::ReadOnly) )
        {
            QTextStream stream( &file );
            while (!stream.atEnd())
            {
                s1=s1+stream.readLine();
            }
            file.close();
        }
    }
    else s1="";
    cout<<"HHH:"<<s1.toLatin1().data()<<endl;
    return s1;
}

QString connectSQL_S(QString &token){
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//连接ODBC的Driver
    QString dsn = QString::fromLocal8Bit("qtodbc");
    db.setHostName("127.0.0.1");//设置名称、用户名、密码
    db.setDatabaseName(dsn);
    db.setUserName("sa");
    db.setPassword("131415926");
    if(!db.open())
    {
        qDebug()<<db.lastError().text();
        return 0;
    }
    else
    qDebug()<<"database open success!";
    QSqlQuery query(db);
    QString s1="";


    //----------------QUERY START---------------

    query.exec("select* from pagelist where title LIKE '%"+token+"%'; ");

    //----------------QUERY END-----------------

    while(query.next()){
        s1=s1+"%"+query.value(2).toString();
    }
    s1=s1+"%";
    return s1;

}

QString connectSQL_G(QString &token){
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//连接ODBC的Driver
    QString dsn = QString::fromLocal8Bit("qtodbc");
    db.setHostName("127.0.0.1");//设置名称、用户名、密码
    db.setDatabaseName(dsn);
    db.setUserName("sa");
    db.setPassword("131415926");
    if(!db.open())
    {
        qDebug()<<db.lastError().text();
        return 0;
    }
    else
    qDebug()<<"database open success!";
    QSqlQuery query(db);
    QString s1="";


    //----------------QUERY START---------------

    if(token!="G")
        query.exec("select* from pagelist where token=\'"+token+"\'; ");
    else
        query.exec("select* from pagelist");

    cout<<"G:"<<QString("select* from pagelist where token=\'"+token+"\'; ").toLatin1().data();
    //----------------QUERY END-----------------

    while(query.next()){
        s1=s1+"%"+query.value(2).toString();
    }
    s1=s1+"%";
    return s1;

}

int connectSQL(QString &n,QString &p){

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//连接ODBC的Driver
    QString dsn = QString::fromLocal8Bit("qtodbc");
    db.setHostName("127.0.0.1");//设置名称、用户名、密码
    db.setDatabaseName(dsn);
    db.setUserName("sa");
    db.setPassword("131415926");
    if(!db.open())
    {
        qDebug()<<db.lastError().text();
        return 0;
    }
    else
    qDebug()<<"database open success!";
    QSqlQuery query(db);


    //----------------QUERY START---------------

    query.exec("select * from usertable where id=\'"+n+"\' and pwd=\'"+p+"\'");
    cout<<"Q:"<<QString("select * from usertable where id=\'"+n+"\' and pwd=\'"+p+"\'").toLatin1().data()<<endl;

    //----------------QUERY END-----------------

    if(query.next()){
        return query.value(2).toInt();
    }
    else return 0;
}

int connectSQL_R(QString &n,QString &p,QString &r,QString &s){

    QString toke;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");//连接ODBC的Driver
    QString dsn = QString::fromLocal8Bit("qtodbc");
    db.setHostName("127.0.0.1");//设置名称、用户名、密码
    db.setDatabaseName(dsn);
    db.setUserName("sa");
    db.setPassword("131415926");
    if(!db.open())
    {
        qDebug()<<db.lastError().text();
        return 0;
    }
    else
    qDebug()<<"database open success!";
    QSqlQuery query(db);
    QSqlQuery query2(db);
    srand(clock());

    //----------------QUERY START---------------
    query2.exec("select count(*) from usertable;");
    if(query2.next()){
        toke=QString::number(query2.value(0).toInt()+1);
    }
    cout<<"T:"<<toke.toLatin1().data()<<endl;
    query.exec("insert into usertable values('"+n+"','"+p+"','"+toke+"','"+r+"','"+s+"','o','o','o','o')");

    //----------------QUERY END-----------------

    return toke.toInt();
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    clientConnection=new QUdpSocket;
    clientConnection->bind(8888);//绑定端口
    connect(clientConnection,SIGNAL(readyRead()),this,SLOT(acceptConnection()));//开始监听

    ui->listWidget->addItem("Start Server Succesful.");
    ui->listWidget->addItem("Binded 8888 port.");
    ui->listWidget->addItem("Start Listining......");//状态

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::acceptConnection()//Accept the connection if possible.
{
    disconnect(clientConnection);//断开监听此套接字
    t1= new Thread;
    ui->listWidget->addItem("Waiting for client's messages.");
    t1->run();
    finishConnection();
}


void Thread::run()//To do after ACK.
{
    int i;int j;int t=0;
    QByteArray temp;
    QString s1;
    char* buf2;
    char* buf;
    buf=(char*)malloc(sizeof(char)*BUFF_SIZE);//初始化套接字和存储空间
    clientConnection->readDatagram(buf,BUFF_SIZE,&add,&port);//接收报文同时获取客户IP和端口号
    cout<<"Get:"<<buf<<endl;
    buf2=(char*)malloc(sizeof(char)*1024);
    s1=QString(buf);
    if(buf[0]>='0'&&buf[0]<='9')//登陆
    {
        QString s2;
        QString s3;
         t=buf[0]-'0';
         for(i=1;i<t+1;i++)
         {
             buf2[i-1]=buf[i];
         }
         buf2[i-1]='\0';
         s2=QString(buf2);
         buf2=(char*)malloc(sizeof(char)*1024);
         for(i=t+1,j=0;i<s1.length();i++,j++)
         {
             buf2[j]=buf[i];
         }
         buf2[j]='\0';
         s3=QString(buf2);
         t=connectSQL(s2,s3);
         cout<<"QUERY successfully."<<endl;

         if(t!=0){
             s1="Echo:"+QString::number(t);
             temp = s1.toLatin1();
             buf=temp.data();
         }
         else{
             s1="ERROR";
             temp = s1.toLatin1();
             buf=temp.data();
         }
         clientConnection->writeDatagram(buf,BUFF_SIZE,add,port);//回复客户*/
    }

    else if(buf[0]=='R'){//注册
        QString s2;
        QString s3;
        QString s4;
        QString s5;
        QString s6;
        j=0;
        for(i=1;i<s1.length();i++)
        {
            if(buf[i]=='%')
            {
                buf2[j]='\0';
                s2=QString(buf2);
                i++;
                j=0;
                break;
            }
            buf2[j]=buf[i];
            j++;
        }

        for(;i<s1.length();i++)//s3
        {
            if(buf[i]=='%')
            {
                buf2[j]='\0';
                s3=QString(buf2);
                i++;
                j=0;

                break;
            }
            buf2[j]=buf[i];
            j++;
        }

        for(;i<s1.length();i++)//s4
        {
            if(buf[i]=='%')
            {
                buf2[j]='\0';
                s4=QString(buf2);
                i++;
                j=0;
                break;
            }
            buf2[j]=buf[i];
            j++;
        }

        for(;i<s1.length();i++)//s5
        {
            if(buf[i]=='%')
            {
                buf2[j]='\0';
                s5=QString(buf2);
                i++;
                j=0;
                break;
            }
            buf2[j]=buf[i];
            j++;
        }

        t=connectSQL_R(s2,s3,s4,s5);

        if(t!=0){
            s1="Echo:"+QString::number(t);
            temp = s1.toLatin1();
            buf=temp.data();
        }
        else{
            s1="ERROR";
            temp = s1.toLatin1();
            buf=temp.data();
        }
        clientConnection->writeDatagram(buf,BUFF_SIZE,add,port);//回复客户*/
    }

    else if(buf[0]=='S'){//搜索
        QString token1,token2;
        j=0;
        for(i=1;i<s1.length();i++)
        {
            buf2[j]=buf[i];
            j++;
        }
        buf2[j]='\0';
        token1=QString(buf2);

        token2=connectSQL_S(token1);

        if(token2!=""){
            s1="Echo:"+token2;
            temp = s1.toLatin1();
            buf=temp.data();
        }
        else{
            s1="ERROR";
            temp = s1.toLatin1();
            buf=temp.data();
        }
        clientConnection->writeDatagram(buf,BUFF_SIZE,add,port);//回复客户*/

    }

    else if(buf[0]=='G'){//全球

        QString token1,token2;
        token1="G";

        token2=connectSQL_G(token1);

        if(token2!=""){
            s1="Echo:"+token2;
            temp = s1.toLatin1();
            buf=temp.data();
        }
        else{
            s1="ERROR";
            temp = s1.toLatin1();
            buf=temp.data();
        }
        clientConnection->writeDatagram(buf,BUFF_SIZE,add,port);//回复客户*/
    }

    else if(buf[0]=='P'){//个人动态

        QString token1,token2;
        j=0;
        for(i=1;i<s1.length();i++){
            buf2[j]=buf[i];
            j++;
        }
        buf2[j]='\0';
        token1=QString(buf2);

        token2=connectSQL_G(token1);

        if(token2!=""){
            s1="Echo:"+token2;
            temp = s1.toLatin1();
            buf=temp.data();
        }
        else{
            s1="ERROR";
            temp = s1.toLatin1();
            buf=temp.data();
        }
        clientConnection->writeDatagram(buf,BUFF_SIZE,add,port);//回复客户*/
    }

    else if(buf[0]=='F'){//读取

        QString token1,token2;
        j=0;
        for(i=1;i<s1.length();i++){
            buf2[j]=buf[i];
            j++;
        }
        buf2[j+1]='\0';
        token1=QString(buf2);

        token2=connectSQL_F(token1);

        if(token2!=""){
            s1=token2;
            temp = s1.toLatin1();
            buf=temp.data();
        }
        else{
            s1="ERROR";
            temp = s1.toLatin1();
            buf=temp.data();
        }
        cout<<"F:"<<buf<<endl;
        clientConnection->writeDatagram(buf,BUFF_SIZE,add,port);//回复客户*/
    }


    else if(buf[0]=='N'){//写入
        QString s1;
        QString token1,token2,token3;
        j=0;

        s1=QString(buf);
        for(i=2;i<buf[1]-'0'+2;i++){
            buf2[j]=buf[i];
            j++;
        }
        buf2[j+1]='\0';
        token1=QString(buf2);

        j=0;
        for(i=buf[1]-'0'+2;i<s1.length();i++){
           if(buf[i]!='%')
            {
                buf2[j]=buf[i];
                j++;
            }
            else if(buf[i]=='%'){
                buf2[j]='\0';
                token2=QString(buf2);
                j=0;
            }

           buf2[j]='\0';
           token3=QString(buf2);
        }
        connectSQL_N(token1,token2,token3);

    }

    else if(buf[0]=='I'){//个人信息
        QString token;
        j=0;
        for(i=1;i<s1.length();i++){
            buf2[j]=buf[i];
            j++;
        }
        buf2[j]='\0';
        token=QString(buf2);
        token=connectSQL_P2(token);

        if(token!=""){
            s1=token;
            temp = s1.toLatin1();
            buf=temp.data();
        }
        else{
            s1="ERROR";
            temp = s1.toLatin1();
            buf=temp.data();
        }
        cout<<"P:"<<buf<<endl;
        clientConnection->writeDatagram(buf,BUFF_SIZE,add,port);//回复客户*/

    }

    else if(buf[0]=='W'){//他人信息
        QString token;
        j=0;
        for(i=1;i<s1.length();i++){
            buf2[j]=buf[i];
            j++;
        }
        buf2[j]='\0';
        token=QString(buf2);
        token=connectSQL_P(token);

        if(token!=""){
            s1=token;
            temp = s1.toLatin1();
            buf=temp.data();
        }
        else{
            s1="ERROR";
            temp = s1.toLatin1();
            buf=temp.data();
        }
        cout<<"P:"<<buf<<endl;
        clientConnection->writeDatagram(buf,BUFF_SIZE,add,port);//回复客户*/

    }


    else{
        s1="ERROR";
        temp = s1.toLatin1();
        buf=temp.data();
        cout<<"ERROR,NO Service."<<endl;
    }
    cout<<"Reply:"<<buf<<endl;
    return;
}

void MainWindow::finishConnection(){//完成连接
    ui->listWidget->addItem("Feedback client's messages successfully.");
}

void Thread::readClient()//To read if we can.
{

}


void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->clear();
}
