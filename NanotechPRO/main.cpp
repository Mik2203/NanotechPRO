#include <QtGui>
#include <QApplication>
#include "nanotechpro.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QTextCodec>
#include <QTextDecoder>
#include <QByteArray>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
     QTextCodec::setCodecForLocale(codec); // error

    NanotechPRO w;
    w.show();

    return a.exec();
}
