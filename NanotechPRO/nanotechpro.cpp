#include "nanotechpro.h"
#include "ui_nanotechpro.h"

NanotechPRO::NanotechPRO(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NanotechPRO)
{
    ui->setupUi(this);

    //старт программы
    ui->stackedW_0->setCurrentIndex(0);

    //Эти две строчки позволют форме становитьс¤ прозрачной
    //setAttribute(Qt::WA_TranslucentBackground);
    //setStyleSheet("background:transparent;");

    //Этот код уберет все внешние элементы формы
    setWindowFlags(Qt::Dialog);
}

NanotechPRO::~NanotechPRO()
{
    delete ui;
}

//-----------------------------------------------------------//
//================== (Размер файла)
//-----------------------------------------------------------//
QString fileSize(qint64 nSize)
{
    qint64 i = 0;
    for (; nSize > 1023; nSize /= 1024, ++i) { }
    return QString().setNum(nSize) +" "+ "BKMGT"[i];
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (Версия программы)
//-----------------------------------------------------------//
void NanotechPRO::slotVerSize()
{
    QString ver(VER_PRODUCTVERSION_STR);
        int verr, verr2;
        verr = VER_PRODUCTVERSION;
        //verr2 = VER_PRODUCTVERSION_STR;
        ui->la_version_1->setText("Версия: " + /*ver.number(verr)*/ ver);
        qDebug() << "Версия программы " << VER_PRODUCTVERSION << verr2;
        qDebug() << path_size_file_1;

        path_size_file_1 =  path_size_file_1.left(path_size_file_1.lastIndexOf("/exe")+1);
        path_size_file_2 =  path_size_file_2.left(path_size_file_2.lastIndexOf("/exe")+1);

        QSettings settings_V("Version");
        QCoreApplication::setOrganizationName("Version");

        QFile fileVer_1, fileVer_2;

        fileVer_1.setFileName(path_dir_1 + "/NanotechPRO/nanotechpro.cpp");
        fileVer_2.setFileName(path_dir_1 + "/NanotechPRO/nanotechpro.h");


        QFileInfo fiVer(fileVer_1);
        QString size_file_1 = fiVer.absoluteFilePath();
        qDebug() << "[ ИМЯ nanotechpro.cpp ] " << size_file_1;

        QFileInfo fiVer2(fileVer_2);
        QString size_file_2 = fiVer2.absoluteFilePath();
        qDebug() << "[ ИМЯ nanotechpro.h ] " << size_file_2;

        settings_V.setValue("Size/nanotechpro.cpp", fileSize(fiVer.size()));
        settings_V.setValue("Size/nanotechpro.h", fileSize(fiVer2.size()));

        qDebug() << "[ Size - nanotechpro.cpp / h ] " << settings_V.value("Size/nanotechpro.cpp").toString()
                 << " " << settings_V.value("Size/nanotechpro.h").toString();
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (Новый проект)
//-----------------------------------------------------------//
void NanotechPRO::on_pushB_new_pro_0_clicked()
{
    //Этот код возращает все внешние элементы формы
    setWindowFlags(Qt::Window);
    ui->stackedW_0->setCurrentIndex(1);
}
//-----------------------------------------------------------//
