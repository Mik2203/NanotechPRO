#include "nanotechpro.h"
#include "ui_nanotechpro.h"

NanotechPRO::NanotechPRO(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NanotechPRO)
{
    ui->setupUi(this);

    //-----------------------------------------------------------------//
    //****** [Подключение классов]
    //-----------------------------------------------------------------//
    Widget_pages_list = new widget_pages_list;
    Widget_pages_list->setParent(ui->fr_pages_list_0);
    ui->fr_pages_list_0->layout()->addWidget(Widget_pages_list);
    Widget_pages_list->show();

    Widget_stream_data = new widget_stream_data;
    Widget_stream_data->setParent(ui->fr_stackedW_page_0);
    ui->fr_stackedW_page_0->layout()->addWidget(Widget_stream_data);
    Widget_stream_data->show();

    Widget_sedimentation = new widget_sedimentation;
    Widget_sedimentation->setParent(ui->fr_sedimentation_0);
    ui->fr_sedimentation_0->layout()->addWidget(Widget_sedimentation);
    Widget_sedimentation->show();
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Подключение для классов (СИГНАЛ/СЛОТ)]
    //-----------------------------------------------------------------//
    connect(Widget_pages_list, SIGNAL(signal_pushB_page_0(int)), this, SLOT(slotSignal_pushB_page_0(int)));
    connect(Widget_pages_list, SIGNAL(signal_pushB_page_1(int)), this, SLOT(slotSignal_pushB_page_0(int)));
    connect(Widget_pages_list, SIGNAL(signal_pushB_page_2(int)), this, SLOT(slotSignal_pushB_page_0(int)));
    connect(Widget_pages_list, SIGNAL(signal_pushB_page_3(int)), this, SLOT(slotSignal_pushB_page_0(int)));
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Глобальные пути]
    //-----------------------------------------------------------------//
    qint64 sys_dss = 0;
    spthApp = QApplication::applicationDirPath(); //путь
    proSize = spthApp;
    spthApp = spthApp.left(spthApp.lastIndexOf("/exe") + 1);
    pathPro = spthApp;

    //qDebug() << "ProSize: " << proSize ;
    QFileInfo fiSi(proSize + "/nanotechpro.exe");
    sys_dss = fiSi.size();
    st_size = fileSize(sys_dss);

    sett_nano = new QSettings(pathPro += "/NanotechPRO/core/settings/options.ntpt", QSettings::IniFormat);
    qDebug() << "QSettings: " << pathPro;
    qDebug() << "Версия: " << sett_nano->value("Version/ver").toString();
    //sett_nano->setValue("Version/ver", 0);
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Меню]
    //-----------------------------------------------------------------//
    ui->ac_new->setShortcut(tr("Ctrl+N"));
    ui->ac_new->setStatusTip("Новый проект расчета");
    connect(ui->ac_new, SIGNAL(triggered()), this, SLOT(slot_ac_menu_new()));

    ui->ac_1->setShortcut(tr("Ctrl+W"));
    ui->ac_1->setStatusTip("Открыть проект");
    connect(ui->ac_1, SIGNAL(triggered()), this, SLOT(slot_ac_menu_1()));

    ui->ac_2->setShortcut(tr("Ctrl+E"));
    ui->ac_2->setStatusTip("Сохранить проект");
    connect(ui->ac_2, SIGNAL(triggered()), this, SLOT(slot_ac_menu_2()));

    ui->ac_exit->setShortcut(tr("Ctrl+Q"));
    ui->ac_exit->setStatusTip("Закрыть программу");
    connect(ui->ac_exit, SIGNAL(triggered()), this, SLOT(slot_ac_menu_exit()));
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
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Статус/положение окон]
    //-----------------------------------------------------------------//
    // показать панель меню
    ui->menubar->setHidden(true);
    ui->statusbar->setHidden(true);

    // кнопка для анимации (постоянно скрыта - только для теста)
    ui->pushB_1->setVisible(false);

    // процесс создания проекта
    ui->pBar_1->setVisible(false);

    // Логотип
    ui->laLogo_1->setVisible(false);

    // Панель инструментов
    ui->fr_menu_0->setVisible(false);

    // Старт проекта
    ui->stackedW_0->setCurrentIndex(0);
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Версия программы]
    //-----------------------------------------------------------------//
    slotVerSize();
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Слоты]
    //-----------------------------------------------------------------//
    // осадкообразование
    connect(ui->pushB_changes_0, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_changes_0(bool)));
    connect(ui->pushB_softener_0, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_softener_0(bool)));
    connect(ui->pushB_correction_0, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_correction_0(bool)));
    //-----------------------------------------------------------------//


    //-----------------------------------------------------------------//
    //****** [Загрузка окна]
    //-----------------------------------------------------------------//
    ui->pBar_1->setMaximum(100);
    ui->pBar_1->setValue(0);
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [ Запуск переменных ]
    //-----------------------------------------------------------------//
    slot_pushB_all(01);
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [  ]
    //-----------------------------------------------------------------//

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
    qint64 dss_int = 0;
    qint64 cpp_int = 0;
    qint64 rezult = 0;

    st_ver = sett_nano->value("Version/ver").toString();
    st_verDate = "    [" + sett_nano->value("Sys_date/date").toString() + "]";

    QFileInfo dss_info(proSize + "/nanotechpro.exe");
    dss_int = dss_info.size();

    QFileInfo cpp_info(pathPro + "/NanotechPRO/nanotechpro.cpp");
    cpp_int = cpp_info.size();

    st_date = QDate::currentDate().toString("dd.MM.yyyy");

    rezult = dss_int + cpp_int;

    qDebug() << "Size: " <<  fileSize(rezult) << st_size;
    if(((sett_nano->value("Sys_date/date").toString() != st_date)
        && (sett_nano->value("Sys_size/size").toString() != fileSize(dss_int))))
    {
        int i, num[4];

        allText = sett_nano->value("Version/ver", "").toString();
        if(allText == "")
        {
            allText = "0.0.0.0";
        }
        QStringList skList;
        skList = allText.split(".");

        num[0] = skList.at(0).toInt(); //num[0] = str1.section(",",0,0).toInt();
        num[1] = skList.at(1).toInt(); //num[1] = str1.section(",",1,1).toInt();
        num[2] = skList.at(2).toInt(); //num[2] = str1.section(",",2,2).toInt();
        num[3] = skList.at(3).toInt(); //num[3] = str1.section(",",3,3).toInt();

        for(i = 3; i >= 0; --i)
        {
            num[i]++;
            if((num[i] < 10) || (i == 0))
                break;
            else
                num[i] = 0;
        }

        str2 = QString("%1.%2.%3.%4").arg(num[0]).arg(num[1]).arg(num[2]).arg(num[3]);

        allText =  str2;
        qDebug() << "Версия: " << allText;

        st_ver = sett_nano->value("Version/ver").toString();
        st_verDate = "    [" + sett_nano->value("Sys_date/date").toString() + "]";

        sett_nano->setValue("Version/ver",allText);
        sett_nano->setValue("Sys_date/date", st_date);
        sett_nano->setValue("Sys_size/size", fileSize(dss_int));
    }
    slotVerReset();
}

// Обновить версию проекта сразу
void NanotechPRO::slotVerReset()
{
    return ui->la_version_1->setText("Версия: " + st_ver);
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

        // Панель инструментов
        ui->fr_menu_0->setVisible(true);

        ui->menubar->setHidden(false);
        ui->statusbar->setHidden(false);

        ui->pBar_1->setValue(0);

        ui->pushB_1->click();
    }
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (Создание меню)
//-----------------------------------------------------------//
void NanotechPRO::slot_ac_menu_1()
{
    // Открыть сохраненный файл <name>.ntp
}

void NanotechPRO::slot_ac_menu_2()
{
    exit(0);
    // Сохранить файл <name>.ntp
}

void NanotechPRO::slot_ac_menu_exit()
{
    exit(0);
}

// Новый
void NanotechPRO::slot_ac_menu_new()
{
    ui->stackedW_0->setCurrentIndex(0);
    // Задать впорос, вы хотите сохранить изменения проекта

    ui->menubar->setHidden(true);
    ui->statusbar->setHidden(true);

    // Панель инструментов
    ui->fr_menu_0->setVisible(false);
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (кнопки переключения, панели меню)
//-----------------------------------------------------------//
void NanotechPRO::on_panel_menu_0_clicked()
{
    ui->stackedW_panel_0->setCurrentIndex(0);
}

void NanotechPRO::on_panel_menu_1_clicked()
{
    ui->stackedW_panel_0->setCurrentIndex(1);
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (слоты переключение по страницам)
//-----------------------------------------------------------//
void NanotechPRO::slotSignal_pushB_page_0(int int_page)
{
    switch(int_page)
    {
    case 0:
//        ui->stackedW_page_0->setCurrentIndex(int_page);
        qDebug() << "int" << int_page;
        Widget_stream_data->StackedW_data_0()->setCurrentIndex(int_page); // прием int сигнала
        break;
    case 1:
        qDebug() << "int1" << int_page;
        Widget_stream_data->StackedW_data_0()->setCurrentIndex(int_page); // прием int сигнала
        break;
    case 2:
        Widget_stream_data->StackedW_data_0()->setCurrentIndex(int_page); // прием int сигнала
        qDebug() << "int2" << int_page;
        break;
    case 3:
        Widget_stream_data->StackedW_data_0()->setCurrentIndex(int_page); // прием int сигнала
        qDebug() << "int3" << int_page;
        break;
    }
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//=== (осадкообразование [без изменений])
//-----------------------------------------------------------//
void NanotechPRO::slot_pushB_changes_0(bool pb1)
{
    if(ui->pushB_changes_0->isCheckable() == pb1)
    {
        //qDebug() << "true pb1";
        slot_pushB_all(01);
    }
    else
    {
        //qDebug() << "false pb1";
    }
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//=== (осадкообразование [умягчитель])
//-----------------------------------------------------------//
void NanotechPRO::slot_pushB_softener_0(bool pb2)
{
    if(ui->pushB_softener_0->isCheckable() == pb2)
    {
        //qDebug() << "true pb2";
        slot_pushB_all(02);
    }
    else
    {
        //qDebug() << "false pb2";
    }
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//=== (осадкообразование [коррекция pH])
//-----------------------------------------------------------//
void NanotechPRO::slot_pushB_correction_0(bool pb3)
{
    if(ui->pushB_correction_0->isCheckable() == pb3)
    {
        //qDebug() << "true pb3";
        slot_pushB_all(03);
    }
    else
    {
        //qDebug() << "false pb3";
    }
}
//-----------------------------------------------------------//

void NanotechPRO::slot_pushB_all(int pb)
{
    switch (pb)
    {
    case 01:
        Widget_sedimentation->st_Widget_sedimentation_list()->setCurrentIndex(0);
        Widget_pages_list->pushB_1()->setVisible(false);

        ui->pushB_changes_0->setFont(QFont("Arial", 9, QFont::Bold));
        ui->pushB_softener_0->setFont(QFont("Arial", 8, QFont::Normal));
        ui->pushB_correction_0->setFont(QFont("Arial", 8, QFont::Normal));

        ui->pushB_changes_0->setCheckable(true);
        ui->pushB_softener_0->setCheckable(false);
        ui->pushB_correction_0->setCheckable(false);
        break;
    case 02:
        Widget_sedimentation->st_Widget_sedimentation_list()->setCurrentIndex(1);
        Widget_pages_list->pushB_1()->setVisible(true);

        ui->pushB_changes_0->setFont(QFont("Arial", 8, QFont::Normal));
        ui->pushB_softener_0->setFont(QFont("Arial", 9, QFont::Bold));
        ui->pushB_correction_0->setFont(QFont("Arial", 8, QFont::Normal));

        ui->pushB_changes_0->setCheckable(false);
        ui->pushB_softener_0->setCheckable(true);
        ui->pushB_correction_0->setCheckable(false);
        break;
    case 03:
        Widget_sedimentation->st_Widget_sedimentation_list()->setCurrentIndex(2);
        Widget_pages_list->pushB_1()->setVisible(true);

        ui->pushB_changes_0->setFont(QFont("Arial", 8, QFont::Normal));
        ui->pushB_softener_0->setFont(QFont("Arial", 8, QFont::Normal));
        ui->pushB_correction_0->setFont(QFont("Arial", 9, QFont::Bold));

        ui->pushB_changes_0->setCheckable(false);
        ui->pushB_softener_0->setCheckable(false);
        ui->pushB_correction_0->setCheckable(true);
        break;
    default:
        qDebug() << "нет таких данных!";
        break;
    }
}
