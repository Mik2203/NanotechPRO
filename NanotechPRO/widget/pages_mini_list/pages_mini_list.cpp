#include "pages_mini_list.h"
#include "ui_pages_mini_list.h"

pages_mini_list::pages_mini_list(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pages_mini_list)
{
    ui->setupUi(this);

    //-----------------------------------------------------------------//
    //****** [Слоты]
    //-----------------------------------------------------------------//
    // переключение страниц Блок 2
    connect(ui->pushB_sys_page_1, SIGNAL(clicked()), this, SLOT(slot_pushB_sys_page_1()));
    connect(ui->pushB_sys_page_2, SIGNAL(clicked()), this, SLOT(slot_pushB_sys_page_2()));
    connect(ui->pushB_sys_page_3, SIGNAL(clicked()), this, SLOT(slot_pushB_sys_page_3()));
    connect(ui->pushB_sys_page_4, SIGNAL(clicked()), this, SLOT(slot_pushB_sys_page_4()));
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Скрыть компанеты]
    //-----------------------------------------------------------------//
    // Блок 2 (страницы)
//    ui->fr_block_2_page_2->setVisible(false);
//    ui->fr_block_2_page_3->setVisible(false);
//    ui->fr_block_2_page_4->setVisible(false);
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** []
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** []
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** []
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Приоритет запуска компонентов]
    //-----------------------------------------------------------------//
    slot_mini_list_pushB_all(0);
    int_CurrentIndex = 0;
    //-----------------------------------------------------------------//
}

pages_mini_list::~pages_mini_list()
{
    delete ui;
}


//-----------------------------------------------------------------//
//****** [Слот для всех ссылающихся кнопок]
//-----------------------------------------------------------------//
void pages_mini_list::slot_mini_list_pushB_all(int index)
{
    switch (index)
    {
    case 0:
        ui->pushB_sys_page_1->setCheckable(true);
        ui->pushB_sys_page_1->setChecked(true);
        ui->pushB_sys_page_2->setChecked(false);
        ui->pushB_sys_page_3->setChecked(false);
        ui->pushB_sys_page_4->setChecked(false);

        ui->pushB_add_sys_page_1->setVisible(true);
        ui->pushB_del_sys_page_1->setVisible(true);
        ui->pushB_add_sys_page_2->setVisible(false);
        ui->pushB_del_sys_page_2->setVisible(false);
        ui->pushB_add_sys_page_3->setVisible(false);
        ui->pushB_del_sys_page_3->setVisible(false);
        ui->pushB_add_sys_page_4->setVisible(false);
        ui->pushB_del_sys_page_4->setVisible(false);

        ui->pushB_sys_page_1->setFont(QFont("Arial", 10, QFont::Bold));
        ui->pushB_sys_page_2->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_sys_page_3->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_sys_page_4->setFont(QFont("Arial", 9, QFont::Normal));

        emit signal_CurrentIndex(int_CurrentIndex); // signal
        break;
    case 1:
        ui->pushB_sys_page_2->setCheckable(true);
        ui->pushB_sys_page_2->setChecked(true);
        ui->pushB_sys_page_1->setChecked(false);
        ui->pushB_sys_page_3->setChecked(false);
        ui->pushB_sys_page_4->setChecked(false);

        ui->pushB_add_sys_page_1->setVisible(false);
        ui->pushB_del_sys_page_1->setVisible(false);
        ui->pushB_add_sys_page_2->setVisible(true);
        ui->pushB_del_sys_page_2->setVisible(true);
        ui->pushB_add_sys_page_3->setVisible(false);
        ui->pushB_del_sys_page_3->setVisible(false);
        ui->pushB_add_sys_page_4->setVisible(false);
        ui->pushB_del_sys_page_4->setVisible(false);

        ui->pushB_sys_page_1->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_sys_page_2->setFont(QFont("Arial", 10, QFont::Bold));
        ui->pushB_sys_page_3->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_sys_page_4->setFont(QFont("Arial", 9, QFont::Normal));

        emit signal_CurrentIndex(int_CurrentIndex); // signal
        break;
    case 2:
        ui->pushB_sys_page_3->setCheckable(true);
        ui->pushB_sys_page_3->setChecked(true);
        ui->pushB_sys_page_1->setChecked(false);
        ui->pushB_sys_page_2->setChecked(false);
        ui->pushB_sys_page_4->setChecked(false);

        ui->pushB_add_sys_page_1->setVisible(false);
        ui->pushB_del_sys_page_1->setVisible(false);
        ui->pushB_add_sys_page_2->setVisible(false);
        ui->pushB_del_sys_page_2->setVisible(false);
        ui->pushB_add_sys_page_3->setVisible(true);
        ui->pushB_del_sys_page_3->setVisible(true);
        ui->pushB_add_sys_page_4->setVisible(false);
        ui->pushB_del_sys_page_4->setVisible(false);

        ui->pushB_sys_page_1->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_sys_page_2->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_sys_page_3->setFont(QFont("Arial", 10, QFont::Bold));
        ui->pushB_sys_page_4->setFont(QFont("Arial", 9, QFont::Normal));

        emit signal_CurrentIndex(int_CurrentIndex); // signal
        break;
    case 3:
        ui->pushB_sys_page_4->setCheckable(true);
        ui->pushB_sys_page_4->setChecked(true);
        ui->pushB_sys_page_1->setChecked(false);
        ui->pushB_sys_page_2->setChecked(false);
        ui->pushB_sys_page_3->setChecked(false);

        ui->pushB_add_sys_page_1->setVisible(false);
        ui->pushB_del_sys_page_1->setVisible(false);
        ui->pushB_add_sys_page_2->setVisible(false);
        ui->pushB_del_sys_page_2->setVisible(false);
        ui->pushB_add_sys_page_3->setVisible(false);
        ui->pushB_del_sys_page_3->setVisible(false);
        ui->pushB_add_sys_page_4->setVisible(true);
        ui->pushB_del_sys_page_4->setVisible(true);

        ui->pushB_sys_page_1->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_sys_page_2->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_sys_page_3->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_sys_page_4->setFont(QFont("Arial", 10, QFont::Bold));

        emit signal_CurrentIndex(int_CurrentIndex); // signal
        break;
    default:
        qDebug() << "страницы с таким номеров не существует! ( " << index << " )";
        break;
    }
}
//-----------------------------------------------------------------//

//-----------------------------------------------------------------//
//****** [Блок 2 (преключение страниц)]
//-----------------------------------------------------------------//
void pages_mini_list::slot_pushB_sys_page_1()
{
    int_CurrentIndex = 0;
    slot_mini_list_pushB_all(0);
}

void pages_mini_list::slot_pushB_sys_page_2()
{
    int_CurrentIndex = 1;
    slot_mini_list_pushB_all(1);
}

void pages_mini_list::slot_pushB_sys_page_3()
{
    int_CurrentIndex = 2;
    slot_mini_list_pushB_all(2);
}

void pages_mini_list::slot_pushB_sys_page_4()
{
    int_CurrentIndex = 3;
    slot_mini_list_pushB_all(3);
}
//-----------------------------------------------------------------//

//-----------------------------------------------------------------//
//****** []
//-----------------------------------------------------------------//
void pages_mini_list::slot_vis_invis_list(int index)
{
    switch (index)
    {
    case 1: // добавить

        break;
    case 2: // удалить

        break;
    default:
        qDebug() << "страницы с таким номеров не существует! ( " << index << " )";
        break;
    }
}

//-----------------------------------------------------------------//

//-----------------------------------------------------------------//
//****** []
//-----------------------------------------------------------------//

//-----------------------------------------------------------------//
