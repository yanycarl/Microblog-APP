#ifndef THREAD_H
#define THREAD_H
#include <mainwindow.h>
#include <QThread>
#include <iostream>

class Thread : public QThread
{
    Q_OBJECT
public:
    void run();

private slots:
    void readClient();
};
#endif // THREAD_H
