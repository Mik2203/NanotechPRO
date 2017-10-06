#include "doprogress.h"
#include <QThread>

doprogress::doprogress(QObject *parent) :
    QObject(parent)
{

}

//void doprogress::goProgress(){
//    for(int i =0; i < 100; ++i)
//    {
//        progressBar->setValue(i);
//        QThread::msleep(5000);
//    }
//}
