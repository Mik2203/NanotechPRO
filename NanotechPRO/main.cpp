#include <QtGui>
#include <QApplication>
#include "nanotechpro.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    NanotechPRO w;
    w.show();

    return a.exec();
}
