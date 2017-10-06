#include "nanotechpro.h"
#include "ui_nanotechpro.h"

NanotechPRO::NanotechPRO(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NanotechPRO)
{
    ui->setupUi(this);

    //-----------------------------------------------------------------//
    //****** [Меню]
    //-----------------------------------------------------------------//
    ui->ac_1->setShortcut(tr("Ctrl+W"));
    ui->ac_1->setStatusTip("Открыть проект");
    connect(ui->ac_1, SIGNAL(triggered()), this, SLOT(slot_ac_menu_1()));

    ui->ac_2->setShortcut(tr("Ctrl+E"));
    ui->ac_2->setStatusTip("Сохранить проект");
    connect(ui->ac_2, SIGNAL(triggered()), this, SLOT(slot_ac_menu_2()));

    ui->ac_3->setShortcut(tr("Ctrl+Q"));
    ui->ac_3->setStatusTip("Закрыть программу");
    connect(ui->ac_3, SIGNAL(triggered()), this, SLOT(slot_ac_menu_3()));
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Старт программы]
    //-----------------------------------------------------------------//
    ui->stackedW_0->setCurrentIndex(0);
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Эти две строчки позволют форме становитьс¤ прозрачной]
    //-----------------------------------------------------------------//
    //setAttribute(Qt::WA_TranslucentBackground);
    //setStyleSheet("background:transparent;");
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Этот код уберет все внешние элементы формы]
    //-----------------------------------------------------------------//
//    this->setWindowFlags(Qt::Tool | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
//    this->setWindowFlags(Qt::Tool
//                         | Qt::MSWindowsFixedSizeDialogHint
//                         | Qt::WindowTitleHint
//                         | Qt::CustomizeWindowHint);
    //setWindowFlags(Qt::Tool);

//    setAttribute(Qt::WA_CanHostQMdiSubWindowTitleBar);
//    setWindowFlags(Qt::FramelessWindowHint);

    //Qt::WindowFlags flags = windowFlags();
//    setWindowFlags(Qt::Tool
//                   | Qt::WindowTitleHint
//                   | Qt::CustomizeWindowHint);
    //show();

    ui->menubar->setHidden(true);
    ui->statusbar->setHidden(true);
    // кнопка для анимации (постоянно скрыта - только для теста)
    ui->pushB_1->setVisible(false);
    // процесс создания проекта
    ui->pBar_1->setVisible(false);
    // Логотип
    ui->laLogo_1->setVisible(false);
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Версия программы]
    //-----------------------------------------------------------------//
    slotVerSize();
    //-----------------------------------------------------------------//



    //-----------------------------------------------------------------//
    //****** [Загрузка окна]
    //-----------------------------------------------------------------//
    ui->pBar_1->setMaximum(100);
    ui->pBar_1->setValue(0);
    //-----------------------------------------------------------------//
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
    //    qint64 i = 0;
    //    for (; nSize > 1023; nSize /= 1024, ++i) { }
    //    return QString().setNum(nSize) +" "+ "BKMGT"[i];

    double a;
    qint64 i = 0;
    a = nSize;
    for (; a > 1023; a /= 1024, ++i)
    {}
    return QString("%1").arg(a,0,'f',3) + " " + "BKMGT"[i]; // 2.067 M
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
    TimerLoading = new QTimer(this);
    connect(TimerLoading, SIGNAL(timeout()), this, SLOT(slotTimerLoading()));
    TimerLoading->start(30);//40

    //-----------------------------------------------------------------//
    //************* (Анимации)
    //-----------------------------------------------------------------//
    //*** [ МЕНЮ ]
    ui->laLogo_1->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    ui->laLogo_1->setGeometry(0,0,48,0);
    ui->laLogo_1->setMinimumSize(0,0);
    ui->laLogo_1->setMaximumSize(48,48);

    machine_01 = new QStateMachine(this);
    s_01 = new QState(machine_01);
    s_02 = new QState(machine_01);

    animation_01 = new QPropertyAnimation(ui->laLogo_1, "size");
    animation_01->setDuration(3000);

    s_01->assignProperty(ui->laLogo_1, "size", QSize(48,0));
    s_02->assignProperty(ui->laLogo_1, "size", QSize(48,48));

    transition_01 = s_01->addTransition(ui->pushB_1, SIGNAL(clicked()), s_02);
    transition_01->addAnimation(animation_01);

    transition_02 = s_02->addTransition(ui->pushB_1, SIGNAL(clicked()), s_01);
    transition_02->addAnimation(animation_01);

    machine_01->setInitialState(s_01);
    machine_01->start();
    //-----------------------------------------------------------------//
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (Создание нового окна проекта)
//-----------------------------------------------------------//
void NanotechPRO::slotTimerLoading()
{
    //Этот код возращает все внешние элементы формы


//    setWindowFlags(Qt::Dialog | Qt::WindowStaysOnBottomHint);

    ui->pBar_1->setVisible(true);
    ui->laLogo_1->setVisible(true);

    QApplication::processEvents();
    ui->pBar_1->setValue(ui->pBar_1->value() + 1);
    if(ui->pBar_1->value() == 5)
    {
        qDebug() << "5";
        ui->pushB_1->click();
    }

    if(ui->pBar_1->value() == 100)
    {
        TimerLoading->stop();
        qDebug() << "Стоп таймер!";
        //accept();



        // Пауза
        QTime time;
        time.start();
        for(;time.elapsed() < 2000;)
        {
         qApp->processEvents();
        }

        ui->stackedW_0->setCurrentIndex(1);

        // Пауза
        QTime time2;
        time2.start();
        for(;time2.elapsed() < 1000;)
        {
         qApp->processEvents();
        }

        ui->menubar->setHidden(false);
        ui->statusbar->setHidden(false);

        ui->pushB_1->click();
    }
}
//-----------------------------------------------------------//

void NanotechPRO::slot_ac_menu_1()
{
      NanotechPRO::setWindowFlags(Qt::Window);
//    Qt::WindowFlags flags = windowFlags();
//    setWindowFlags(flags
//                   | Qt::Window
//                   | Qt::WindowShadeButtonHint);
    //window->show();
}

void NanotechPRO::slot_ac_menu_2()
{
    exit(0);
}

void NanotechPRO::slot_ac_menu_3()
{
    exit(0);
}
