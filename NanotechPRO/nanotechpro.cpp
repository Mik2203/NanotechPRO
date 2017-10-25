#include "nanotechpro.h"
#include "ui_nanotechpro.h"

NanotechPRO::NanotechPRO(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NanotechPRO)
{
    ui->setupUi(this);

    this->setWindowTitle("NanotechPRO");
    //-----------------------------------------------------------------//
    //****** [Загрузка шрифта для программы]
    //-----------------------------------------------------------------//
    loadFontFamilyFromTTF();
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [ПРИОРИТЕТЫ]
    //-----------------------------------------------------------------//
    QRegExp add_res_1("[A-Za-zА-Яа-яЁё0-9]{1,50}"); // Используються символы ^[-+]?[0-9]*\\.?[0-9]+$
    ui->lineE_new_pro_0->setValidator(new QRegExpValidator(add_res_1, ui->lineE_new_pro_0));
    //-----------------------------------------------------------------//

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
    Widget_stream_data->StackedW_data_0()->setCurrentIndex(0);

    Widget_sedimentation = new widget_sedimentation;
    Widget_sedimentation->setParent(ui->fr_sedimentation_0);
    ui->fr_sedimentation_0->layout()->addWidget(Widget_sedimentation);
    Widget_sedimentation->show();
    Widget_sedimentation->st_Widget_sedimentation_list()->setCurrentIndex(0);

    Widget_sys_stage = new widget_sys_stage;
    Widget_sys_stage->setParent(ui->fr_sys_panel_1);
    ui->fr_sys_panel_1->layout()->addWidget(Widget_sys_stage);
    Widget_sys_stage->show();

    Widget_rootAdmin = new widget_rootAdmin;
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Подключение для классов (СИГНАЛ/СЛОТ)]
    //-----------------------------------------------------------------//
    connect(Widget_pages_list, SIGNAL(signal_pushB_page_0(int)), this, SLOT(slotSignal_pushB_page_0(int)));
    connect(Widget_pages_list, SIGNAL(signal_pushB_page_1(int)), this, SLOT(slotSignal_pushB_page_0(int)));
    connect(Widget_pages_list, SIGNAL(signal_pushB_page_2(int)), this, SLOT(slotSignal_pushB_page_0(int)));
    connect(Widget_pages_list, SIGNAL(signal_pushB_page_3(int)), this, SLOT(slotSignal_pushB_page_0(int)));

    //админка
    connect(Widget_rootAdmin, SIGNAL(signal_checkB_1(int, bool)), this, SLOT(slot_rankRoot2(int, bool)));
    connect(Widget_rootAdmin, SIGNAL(signal_checkB_2(bool)), this, SLOT(slot_rankPriority(bool)));
    connect(Widget_rootAdmin, SIGNAL(signal_Push_name(QString, int)), this, SLOT(slot_Push_name(QString, int)));
    connect(Widget_rootAdmin, SIGNAL(signal_Logo_images(QString)), this, SLOT(slot_Logo_images(QString)));
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

    sett_nano = new QSettings(pathPro + "/NanotechPRO/core/settings/options.ntpt", QSettings::IniFormat);
    qDebug() << "QSettings: " << pathPro;
    qDebug() << "Версия: " << sett_nano->value("Version/ver").toString();
    //sett_nano->setValue("Version/ver", 0);


    //-----------------------------------------------------------------//

    //-----------------------------------------------------------//
    //=== (Без привязки к меню)
    //-----------------------------------------------------------//
    actionRoot = new QAction(("&Админка"), this);
    actionRoot->setShortcut(tr("Ctrl+Alt+A"));
    connect(actionRoot, SIGNAL(triggered()), this, SLOT(slot_rankRoot()));
    this->addAction(actionRoot); // Без меню дейсвие
    //-----------------------------------------------------------//

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
    QStringList rankList;
    rankList.clear();
    rankList << "777" << "755" << "root" << "user";
    if(sett_nano->value("Other/rank0").toInt() == rankList[0].toInt())
    {
        ui->stackedW_0->setCurrentIndex(1);
        qDebug() << "rank: " << rankList[2] << "[" << rankList[0] << "]";

        ui->menubar->setHidden(false);
        ui->statusbar->setHidden(false);
    }
    else if(sett_nano->value("Other/rank0").toInt() == rankList[1].toInt())
    {
        ui->stackedW_0->setCurrentIndex(0);
        qDebug() << "rank: " << rankList[3] << "[" << rankList[1] << "]";

        ui->menubar->setHidden(true);
        ui->statusbar->setHidden(true);

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

        // Осадкоокисление
        ui->stackedW_sedimentation_0->setCurrentIndex(0);

        // Кнопка создания проекта
        ui->pushB_new_pro_0->setVisible(false);
    }

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
    //****** [QSettings - вкл/выкл приложение]
    //-----------------------------------------------------------------//
    // глобал переменные
    str_rank = sett_nano->value("Other/rank0").toString();
    str_name = sett_nano->value("Other/priority").toString();
    str_img = sett_nano->value("Other/img").toString();
    int dlina = str_img.length();
    if(dlina != 0)
    {
        //qDebug() << "PHOTO_glob: " << str_img << dlina;
        Widget_rootAdmin->Lab_foto_0()->setStyleSheet("image: url(:/admin/adm/"+str_img+");");
    }
    else
    {
        str_img = "not_photo_1.png";
        //qDebug() << "not PHOTO: " << str_img;
        Widget_rootAdmin->Lab_foto_0()->setStyleSheet("image: url(:/admin/adm/"+str_img+");");
    }

    // Приоритет для разработчика
    if(str_rank == "777")
    {
        Widget_rootAdmin->Class_checkB_1()->setEnabled(true);
    }
    else
    {
        Widget_rootAdmin->Class_checkB_1()->setEnabled(false);
    }

    // режим разработчика
    if(sett_nano->value("Other/status").toString() == "true")
    {
        Widget_rootAdmin->Class_checkB_1()->setChecked(true);
        Widget_rootAdmin->on_checkB_1_clicked(true);
        Widget_rootAdmin->Lab_rank_0()->setText("<span style=\" font-size:9pt;\
                                                font-weight:600;color:#5555ff;\">"+str_rank+"</span>");
    }
    else
    {
        Widget_rootAdmin->Class_checkB_1()->setChecked(false);
        Widget_rootAdmin->on_checkB_1_clicked(false);
        Widget_rootAdmin->Lab_rank_0()->setText("<span style=\" font-size:9pt;\
                                                font-weight:600;color:#ffaa7f;\">"+str_rank+"</span>");
    }

    // редактировать данные
    if(sett_nano->value("Other/edit_priority").toString() == "true")
    {
        Widget_rootAdmin->Class_checkB_2()->setChecked(true);
        Widget_rootAdmin->on_checkB_2_clicked(true);
        Widget_rootAdmin->Lab_name_0()->setText("<span style=\" font-size:9pt;\
                                                font-weight:400;color:#000000;\">Имя: </span>\
                                                <span style=\" font-size:9pt;\
                                                font-weight:600;color:#5555ff;\">"+str_name+"</span>");

        for(int i = 0; i < Widget_rootAdmin->listImage.count(); ++i)
        {
            if(Widget_rootAdmin->listImage.at(i)
                    == str_img)
            {
               Widget_rootAdmin->on_coBox_1_activated(i);
               Widget_rootAdmin->CoBox_1()->setCurrentIndex(i);
               //qDebug() << "Что тут?" << str_comBox;
               //qDebug() << "аааа" << Widget_rootAdmin->listImage.at(i) << str_img;
            }
        }
    }
    else
    {
        Widget_rootAdmin->Class_checkB_2()->setChecked(false);
        Widget_rootAdmin->on_checkB_2_clicked(false);
        Widget_rootAdmin->Lab_name_0()->setText("<span style=\" font-size:9pt;\
                                                font-weight:400;color:#000000;\">Имя: </span>\
                                                <span style=\" font-size:9pt;\
                                                font-weight:600;color:#5555ff;\">"+str_name+"</span>");
    }
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
    connect(ui->pushB_changes_0, SIGNAL(clicked()), this, SLOT(slot_pushB_changes_0()));
    connect(ui->pushB_softener_0, SIGNAL(clicked()), this, SLOT(slot_pushB_softener_0()));
    connect(ui->pushB_correction_0, SIGNAL(clicked()), this, SLOT(slot_pushB_correction_0()));

    // кнопки закладок страниц
    connect(ui->pushB_page_wother, SIGNAL(clicked()), this, SLOT(slot_PushB_page_wother()));
    connect(ui->pushB_page_system, SIGNAL(clicked()), this, SLOT(slot_PushB_page_system()));
    connect(ui->pushB_page_worning, SIGNAL(clicked()), this, SLOT(slot_PushB_page_worning()));
    connect(ui->pushB_page_result, SIGNAL(clicked()), this, SLOT(slot_PushB_page_result()));
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
    ui->lineE_new_pro_0->setPlaceholderText("Введите название проекта");
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [  ]
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//

}

void NanotechPRO::loadFontFamilyFromTTF()
{
    QFontDatabase database;
    static QString fonts, styles;
    static bool loaded = false;
    QStringList result;
    result.clear();
    if(!loaded)
    {
        loaded = true;
        QStringList nameFont;
        nameFont << "Arial" << "Comic Sans MS" << "Segoe UI" << "Times New Roman";


        foreach (const QString &str, database.families())
        {
            if (str.contains("Arial"))
                result += str;

            foreach (const QString &style, database.styles(str))
            {
                if (style.contains("Normal")) // Cursive, Bold, Normal
                    result += style;
            }
        }

        int st_style;

        if(!result.empty())
        {
            fonts = result.at(0);
        }

        QString family = fonts;

        st_style = result.at(1).toInt(0);

        //qApp->setFont(QFont(family.isEmpty()?QStringLiteral("Bold"):family, 12));

        qApp->setFont(QFont(family, 8, st_style));

        qDebug() << "FONTS: " << result.at(0) << result.at(1);
    }
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
    ui->laLogo_1->setGeometry(0,0,32,0);
    ui->laLogo_1->setMinimumSize(0,0);
    ui->laLogo_1->setMaximumSize(32,32);

    machine_01 = new QStateMachine(this);
    s_01 = new QState(machine_01);
    s_02 = new QState(machine_01);

    animation_01 = new QPropertyAnimation(ui->laLogo_1, "size");
    animation_01->setDuration(3000);

    s_01->assignProperty(ui->laLogo_1, "size", QSize(32,0));
    s_02->assignProperty(ui->laLogo_1, "size", QSize(32,32));

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

        ui->fr_menu_0->setVisible(true);// Панель инструментов
        // Панели меню
        ui->menubar->setHidden(false);
        ui->statusbar->setHidden(false);
        // Процесс создание проекта
        ui->pBar_1->setValue(0);
        ui->pBar_1->setVisible(false);

        slot_pushB_all(21); // Меню [Вода]

        // кнопка новый проект
        ui->pushB_new_pro_0->setVisible(false);
        ui->lineE_new_pro_0->clear();

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
void NanotechPRO::slot_pushB_changes_0()
{
    slot_pushB_all(01);
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//=== (осадкообразование [умягчитель])
//-----------------------------------------------------------//
void NanotechPRO::slot_pushB_softener_0()
{
    slot_pushB_all(02);
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//=== (осадкообразование [коррекция pH])
//-----------------------------------------------------------//
void NanotechPRO::slot_pushB_correction_0()
{
    slot_pushB_all(03);
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//=== (Кнопка меню [Вода])
//-----------------------------------------------------------//
void NanotechPRO::slot_PushB_page_wother()
{
    slot_pushB_all(21);
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//=== (Кнопка меню [Система])
//-----------------------------------------------------------//
void NanotechPRO::slot_PushB_page_system()
{
    slot_pushB_all(22);
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//=== (Кнопка меню [Предупреждение])
//-----------------------------------------------------------//
void NanotechPRO::slot_PushB_page_worning()
{
    slot_pushB_all(23);
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//=== (Кнопка меню [Результат])
//-----------------------------------------------------------//
void NanotechPRO::slot_PushB_page_result()
{
    slot_pushB_all(24);
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//=== (Слот для переключения кнопок)
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
        ui->pushB_changes_0->setChecked(true);
        ui->pushB_softener_0->setChecked(false);
        ui->pushB_correction_0->setChecked(false);
        break;
    case 02:
        Widget_sedimentation->st_Widget_sedimentation_list()->setCurrentIndex(1);
        Widget_pages_list->pushB_1()->setVisible(true);

        ui->pushB_changes_0->setFont(QFont("Arial", 8, QFont::Normal));
        ui->pushB_softener_0->setFont(QFont("Arial", 9, QFont::Bold));
        ui->pushB_correction_0->setFont(QFont("Arial", 8, QFont::Normal));

        ui->pushB_changes_0->setChecked(false);
        ui->pushB_softener_0->setCheckable(true);
        ui->pushB_softener_0->setChecked(true);
        ui->pushB_correction_0->setChecked(false);
        break;
    case 03:
        Widget_sedimentation->st_Widget_sedimentation_list()->setCurrentIndex(2);
        Widget_pages_list->pushB_1()->setVisible(true);

        ui->pushB_changes_0->setFont(QFont("Arial", 8, QFont::Normal));
        ui->pushB_softener_0->setFont(QFont("Arial", 8, QFont::Normal));
        ui->pushB_correction_0->setFont(QFont("Arial", 9, QFont::Bold));

        ui->pushB_changes_0->setChecked(false);
        ui->pushB_softener_0->setChecked(false);
        ui->pushB_correction_0->setCheckable(true);
        ui->pushB_correction_0->setChecked(true);
        break;

    case 21:
        ui->stackedW_0->setCurrentIndex(1);
        ui->pushB_page_wother->setCheckable(true);
//        ui->pushB_page_system->setCheckable(false);
//        ui->pushB_page_worning->setCheckable(false);
//        ui->pushB_page_result->setCheckable(false);

        ui->pushB_page_wother->setChecked(true);
        ui->pushB_page_system->setChecked(false);
        ui->pushB_page_worning->setChecked(false);
        ui->pushB_page_result->setChecked(false);
        break;

    case 22:
        ui->stackedW_0->setCurrentIndex(2);
//        ui->pushB_page_wother->setCheckable(false);
        ui->pushB_page_system->setCheckable(true);
//        ui->pushB_page_worning->setCheckable(false);
//        ui->pushB_page_result->setCheckable(false);

        ui->pushB_page_wother->setChecked(false);
        ui->pushB_page_system->setChecked(true);
        ui->pushB_page_worning->setChecked(false);
        ui->pushB_page_result->setChecked(false);
        break;

    case 23:
        ui->stackedW_0->setCurrentIndex(3);
//        ui->pushB_page_wother->setCheckable(false);
//        ui->pushB_page_system->setCheckable(false);
        ui->pushB_page_worning->setCheckable(true);
//        ui->pushB_page_result->setCheckable(false);

        ui->pushB_page_wother->setChecked(false);
        ui->pushB_page_system->setChecked(false);
        ui->pushB_page_worning->setChecked(true);
        ui->pushB_page_result->setChecked(false);
        break;

    case 24:
        ui->stackedW_0->setCurrentIndex(4);
//        ui->pushB_page_wother->setCheckable(false);
//        ui->pushB_page_system->setCheckable(false);
//        ui->pushB_page_worning->setCheckable(false);
        ui->pushB_page_result->setCheckable(true);

        ui->pushB_page_wother->setChecked(false);
        ui->pushB_page_system->setChecked(false);
        ui->pushB_page_worning->setChecked(false);
        ui->pushB_page_result->setChecked(true);
        break;
    default:
        qDebug() << "нет таких данных!";
        break;
    }
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//=== (Событие - кнопка новый проект)
//-----------------------------------------------------------//
void NanotechPRO::on_lineE_new_pro_0_textEdited(const QString &arg1)
{
    int length = arg1.length();
    //qDebug() << "Кол-во символов: " << length;

    if(length >= 4)
    {
        ui->pushB_new_pro_0->setVisible(true);
        ui->lineE_new_pro_0->setStyleSheet("color: rgb(85, 85, 255);");
        ui->lineE_new_pro_0->setFont(QFont("Arial", 9, QFont::Normal));
    }
    else
    {
        ui->pushB_new_pro_0->setVisible(false);
        ui->lineE_new_pro_0->setStyleSheet("color: rgb(255, 0, 0);");
        ui->lineE_new_pro_0->setFont(QFont("Arial", 9, QFont::Bold));
    }

    if(length == 0)
    {
        ui->lineE_new_pro_0->setStyleSheet("color: rgb(0, 0, 0);");
        ui->lineE_new_pro_0->setFont(QFont("Arial", 9, QFont::Normal));
    }

    //QString arg1 = ui->lineE_new_pro_0->toPlainText();;
//    int i;
//    QRegExp latin( "[a-z]|[A-Z]{1,50}" );
//    QRegExp rus( "[А-Яа-яЁё0-9]{1,50}" );
//    QRegExp number( "[0-9]{1,50}" );
//    for (i=0; i <= arg1.length(); ++i)
//    {
//        if (arg1.mid(i,1).contains(latin))
//        {
//            QString tmp;
//            tmp = ui->lineE_new_pro_0->text();

//            ui->lineE_new_pro_0->setText(tmp);
//            ui->lineE_new_pro_0->setStyleSheet("color: rgb(85, 85, 255);");
//            qDebug() << "if";
//            break;
//        }

//        if (arg1.mid(i,1).contains(rus))
//        {
//            QString tmp;
//            tmp = ui->lineE_new_pro_0->text();
//            //tmp.append( "<font color=darkgreen>" );
//            //tmp.append( ui->lineE_new_pro_0->toPlainText().mid(i,1) );
//            //tmp.append( "</font>" );

//            ui->lineE_new_pro_0->setText(tr("<font color=red>1111</font>"));
//            //ui->lineE_new_pro_0->setStyleSheet("color: rgb(0, 255, 0);");
//            qDebug() << "else if";

//            break;
//        }

//        if(arg1.mid(i,1).contains(number))
//        {
//            QString tmp;
//            tmp = ui->lineE_new_pro_0->text();
//            //tmp.append( "<font color=darkgreen>" );
//            //tmp.append( ui->lineE_new_pro_0->toPlainText().mid(i,1) );
//            //tmp.append( "</font>" );

//            ui->lineE_new_pro_0->setText(tr("<font color=red>1111</font>"));
//            //ui->lineE_new_pro_0->setStyleSheet("color: rgb(0, 255, 0);");
//            qDebug() << "else";

//            break;
//        }
//    }
}
//-----------------------------------------------------------//


void NanotechPRO::slot_rankRoot()
{
    QWidget* Form = new QWidget;
    QBoxLayout* pbxLayout = new QBoxLayout(QBoxLayout::LeftToRight);
    pbxLayout->addWidget(Widget_rootAdmin);
    Form->setLayout(pbxLayout);
    Form->setWindowTitle("Права доступа!");
    Form->setMaximumSize(400,350);
    Form->setMinimumSize(400,350);
    Form->show();
}

void NanotechPRO::slot_rankRoot2(int check, bool check2)
{
    switch (check2)
    {
    case true:
        //sett_nano->setValue("Other/priority", "root");
        //sett_nano->setValue("Other/rank0", check);
        sett_nano->setValue("Other/status", check2);

        str_name = sett_nano->value("Other/priority").toString();
        str_rank = sett_nano->value("Other/rank0").toString();

        Widget_rootAdmin->Lab_rank_0()->setText("<span style=\" font-size:9pt;\
                                                font-weight:600;color:#5555ff;\">"+str_rank+"</span>");

        Widget_rootAdmin->Lab_name_0()->setText("<span style=\" font-size:9pt;\
                                                font-weight:400;color:#000000;\">Имя: </span>\
                                                <span style=\" font-size:9pt;\
                                                font-weight:600;color:#5555ff;\">"+str_name+"</span>");
        break;
    case false:
        //sett_nano->setValue("Other/rank0", check);
        sett_nano->setValue("Other/status", check2);

        str_rank = sett_nano->value("Other/rank0").toString();

        Widget_rootAdmin->Lab_rank_0()->setText("<span style=\" font-size:9pt;\
                                                font-weight:600;color:#ffaa7f;\">"+str_rank+"</span>");
        break;
    default:
        qDebug() << "[slot_rankRoot2] нет такого индекса";
        break;
    }
}

void NanotechPRO::slot_rankPriority(bool check)
{
    switch (check)
    {
    case false:
        sett_nano->setValue("Other/edit_priority", check);
        break;
    case true:
        sett_nano->setValue("Other/edit_priority", check);

        str_img = sett_nano->value("Other/img").toString();

        Widget_rootAdmin->LineE_0()->setText(sett_nano->value("Other/priority").toString());
        Widget_rootAdmin->LineE_rank_0()->setText(sett_nano->value("Other/rank0").toString());

        for(int i = 0; i < Widget_rootAdmin->listImage.count(); ++i)
        {
            if(Widget_rootAdmin->listImage.at(i)
                    == str_img)
            {
               Widget_rootAdmin->on_coBox_1_activated(i);
               Widget_rootAdmin->CoBox_1()->setCurrentIndex(i);
               //qDebug() << "Что тут?" << str_comBox;
               //qDebug() << "аааа" << Widget_rootAdmin->listImage.at(i) << str_img;
            }


        }

        break;
    default:
        break;
    }
}

void NanotechPRO::slot_Push_name(QString str, int rank)
{
    if(!str.isNull())
    {
        sett_nano->setValue("Other/priority", str);
        sett_nano->setValue("Other/rank0", rank);


        str_name = sett_nano->value("Other/priority").toString();
        str_rank = sett_nano->value("Other/rank0").toString();


        qDebug() << "if: " << str_name << "Что передаю:" << str;
        Widget_rootAdmin->Lab_name_0()->setText("<span style=\" font-size:9pt;\
                                                font-weight:400;color:#000000;\">Имя: </span>\
                                                <span style=\" font-size:9pt;\
                                                font-weight:600;color:#5555ff;\">"+str_name+"</span>");

        Widget_rootAdmin->Lab_rank_0()->setText("<span style=\" font-size:9pt;\
                                                font-weight:600;color:#5555ff;\">"+str_rank+"</span>");


    }
    else
    {
        sett_nano->setValue("Other/priority", "NULL");
        sett_nano->setValue("Other/rank0", "NULL");

        str_name = sett_nano->value("Other/priority").toString();
        str_rank = sett_nano->value("Other/rank0").toString();


        qDebug() << "else: " << str_name << "Что передаю:" << str;
        Widget_rootAdmin->Lab_name_0()->setText("<span style=\" font-size:9pt;\
                                                font-weight:400;color:#000000;\">Имя: </span>\
                                                <span style=\" font-size:9pt;\
                                                font-weight:600;color:#ff0000;\">"+str_name+"</span>");

        Widget_rootAdmin->Lab_rank_0()->setText("<span style=\" font-size:9pt;\
                                                font-weight:600;color:#ff0000;\">"+str_rank+"</span>");

    }
}


void NanotechPRO::slot_Logo_images(QString str)
{
    qDebug() << "slot_PHOTO: " << str;
    if(!str.isNull())
    {
        sett_nano->setValue("Other/img", str);
        str_img = sett_nano->value("Other/img").toString();
        Widget_rootAdmin->Lab_foto_0()->setStyleSheet("image: url(:/admin/adm/"+str_img+");");
    }
    else
    {
        qDebug() << "slot_notPHOTO: " << str;
        str_img = "not_photo_1.png";
        Widget_rootAdmin->Lab_foto_0()->setStyleSheet("image: url(:/admin/adm/"+str_img+");");
    }
}
