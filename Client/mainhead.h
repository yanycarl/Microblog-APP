#ifndef MAINHEAD_H
#define MAINHEAD_H
#include <QMainWindow>
#include <iostream>
#include <QtNetwork/QtNetwork>
#include <time.h>
#include <windows.h>
#include <QMessageBox>

extern long harshPass();

using namespace std;

extern QString id;
extern long pass;
extern QString token;

extern QString region;
extern QString sex;
extern QString age;
extern QString occupation;
extern QString tel;

extern char* buff;
extern char* buff2;
extern QUdpSocket* clientSocket;
extern QHostAddress add;
extern quint16 port;

extern QString author;

#endif // MAINHEAD_H
