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
#include <QProgressBar>
#include <QHBoxLayout>
#include <QPushButton>
#include "style/styleloader.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    QTextCodec::setCodecForLocale(codec); // error


//    QWidget* window = new QWidget;
//    window->setWindowTitle("Progress Bar");
//    window->setWindowFlags(Qt::Window | Qt::WindowSystemMenuHint);
//    window->setMinimumHeight(100);
//    window->setMaximumHeight(100);
//    window->setMinimumWidth(300);
//    window->setMaximumWidth(300);

//    QHBoxLayout* buttons      = new QHBoxLayout;
//    QHBoxLayout* bar          = new QHBoxLayout;
//    QVBoxLayout* vlayout      = new QVBoxLayout;

//    doprogress slotbar;


//    QPushButton* start        = new QPushButton("Start");
//    QPushButton* exit         = new QPushButton("Exit");

//    QProgressBar* progressBar = new QProgressBar();
//    QObject::connect(exit, SIGNAL(clicked()), qApp ,SLOT(quit()));
//    QObject::connect(start, SIGNAL(clicked()), &slotbar, SLOT(goProgress()));

//    buttons->addWidget(start);
//    buttons->addWidget(exit);

//    bar->addWidget(progressBar);

//    vlayout->addLayout(buttons);
//    vlayout->addLayout(bar);

//    window->setLayout(vlayout);
//    window->show();

//********************************************************//
//    QFile styleF;

//    styleF.setFileName(":/css/stylesheet.css");
//    styleF.open(QFile::ReadOnly);
//    QString qssStr = styleF.readAll();

//    qApp->setStyleSheet(qssStr);

    NanotechPRO w;

    QString save_file = w.spthApp + "NanotechPRO/style/css/stylesheet.css";

    qDebug() << "Путик: " << save_file;

    // F6 обновляет css и вывод на экран
    StyleLoader::attach(save_file, QKeySequence("F6")); // Запуск css файла

    w.setWindowFlags(Qt::Window);
    w.show();
    return a.exec();
}
