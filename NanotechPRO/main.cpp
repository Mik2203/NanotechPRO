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

#include "QFontDatabase"
#include "QFont"
#include "QTreeWidget"
#include "QTreeWidgetItem"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    QTextCodec::setCodecForLocale(codec); // error

//    int id = -1;
//            id = QFontDatabase::addApplicationFont(":/font/arial/arial.ttf"); //путь к шрифту
//    QString family = QFontDatabase::applicationFontFamilies(id).at(0); //имя шрифта
//    QFont f(family);  // QFont c вашим шрифтом

//    QFontDatabase database;
//        QTreeWidget fontTree;
//        fontTree.setColumnCount(2);
//        fontTree.setHeaderLabels(QStringList() << "Font" << "Smooth Sizes");

//        QString sizes;
//        QString st_nameFont, st_styleFont;
//        QString st_numberFont;

//        QStringList nameFont;
//        QStringList styleFont;

//        foreach (const QString &family, database.families())
//        {
//            if (family.contains("Arial"))
//            {
//                nameFont += family;
//            }

////            st_nameFont = nameFont.at(0);
//            //qDebug() << "Имя Шрифта: " << family;

//            foreach (const QString &style, database.styles(family))
//            {
//                if (style.contains("Normal"))
//                {
//                    styleFont += style;
//                }

//                //qDebug() << "Нормальный, жирный... " << style;
//                //st_styleFont += styleFont.at(0);

//                foreach (int points, database.smoothSizes(family, style))
//                    sizes += QString::number(points) + ' ';

////                if (points.contains("Normal"))
////                {
////                    sizes += QString::number(points) + ' ';
////                }

////                st_numberFont += sizes;

//                //qDebug() << "Размер шрифта " << sizes;

//                //styleItem->setText(2, sizes.trimmed());
//            }
//        }

//    qApp->setFont(QFont(nameFont.at(0), 12, styleFont));






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
