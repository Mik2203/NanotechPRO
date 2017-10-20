#include "widget_sys_stage.h"
#include "ui_widget_sys_stage.h"

widget_sys_stage::widget_sys_stage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_sys_stage)
{
    ui->setupUi(this);

    //-----------------------------------------------------------------//
    //****** [Слоты]
    //-----------------------------------------------------------------//
    // переключение страниц Блок 1
    connect(ui->pushB_page_0, SIGNAL(clicked()), this, SLOT(slot_pushB_page_0()));
    connect(ui->pushB_page_1, SIGNAL(clicked()), this, SLOT(slot_pushB_page_1()));
    // Блок 1 слоты (добавить/удалить)
    // add
    connect(ui->pushB_add_page_0, SIGNAL(clicked()), this, SLOT(slot_pushB_add_page_0()));
    //connect(ui->pushB_add_page_1, SIGNAL(clicked()), this, SLOT(slot_pushB_add_page_1()));
    // del
    connect(ui->pushB_del_page_0, SIGNAL(clicked()), this, SLOT(slot_pushB_del_page_0()));
    connect(ui->pushB_del_page_1, SIGNAL(clicked()), this, SLOT(slot_pushB_del_page_1()));

    // переключение страниц Блок 2
    connect(ui->pushB_sys_page_1, SIGNAL(clicked()), this, SLOT(slot_pushB_sys_page_1()));
    connect(ui->pushB_sys_page_2, SIGNAL(clicked()), this, SLOT(slot_pushB_sys_page_2()));
    connect(ui->pushB_sys_page_3, SIGNAL(clicked()), this, SLOT(slot_pushB_sys_page_3()));
    connect(ui->pushB_sys_page_4, SIGNAL(clicked()), this, SLOT(slot_pushB_sys_page_4()));

    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Скрыть компанеты]
    //-----------------------------------------------------------------//
    // Блок 1 (страницы)
    ui->fr_block_1_page_2->setVisible(false);

    // Блок 2 (страницы)
    ui->fr_block_2_page_2->setVisible(false);
    ui->fr_block_2_page_3->setVisible(false);
    ui->fr_block_2_page_4->setVisible(false);
    //-----------------------------------------------------------------//

    //-----------------------------------------------------------------//
    //****** [Приоритет запуска компонентов]
    //-----------------------------------------------------------------//
    slot_pushB_all(0);
    slot_pushB_all(11);
    //-----------------------------------------------------------------//
}

widget_sys_stage::~widget_sys_stage()
{
    delete ui;
}

//-----------------------------------------------------------------//
//****** [Слот для всех ссылающихся кнопок]
//-----------------------------------------------------------------//
void widget_sys_stage::slot_pushB_all(int index)
{
    switch (index)
    {
    case 0:
        ui->pushB_page_0->setCheckable(true);
        ui->pushB_page_0->setChecked(true);
        ui->pushB_page_1->setChecked(false);

        if(ui->fr_block_1_page_2->isVisible() == false)
        {
            ui->pushB_add_page_0->setVisible(true);
            ui->pushB_del_page_0->setVisible(false);

            ui->pushB_add_page_1->setVisible(false);
            ui->pushB_del_page_1->setVisible(false);

            ui->stackedW_sys_1->setCurrentIndex(0);

            ui->pushB_page_0->setFont(QFont("Arial", 10, QFont::Bold));
            ui->pushB_page_1->setFont(QFont("Arial", 9, QFont::Normal));
        }
        else
        {
            ui->pushB_add_page_0->setVisible(false);
            ui->pushB_del_page_0->setVisible(true);
            ui->pushB_del_page_1->setVisible(false);

            ui->stackedW_sys_1->setCurrentIndex(0);

            ui->pushB_page_0->setFont(QFont("Arial", 10, QFont::Bold));
            ui->pushB_page_1->setFont(QFont("Arial", 9, QFont::Normal));
        }

        break;
    case 1:
        ui->pushB_page_1->setCheckable(true);
        ui->pushB_page_1->setChecked(true);
        ui->pushB_page_0->setChecked(false);

        if(ui->fr_block_1_page_2->isVisible() == true)
        {
            ui->pushB_add_page_0->setVisible(false);
            ui->pushB_del_page_0->setVisible(false);

            ui->pushB_add_page_1->setVisible(false);
            ui->pushB_del_page_1->setVisible(true);

            ui->stackedW_sys_1->setCurrentIndex(1);

            ui->pushB_page_0->setFont(QFont("Arial", 9, QFont::Normal));
            ui->pushB_page_1->setFont(QFont("Arial", 10, QFont::Bold));
        }
        break;

    case 11:
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

        ui->stackedW_sys_2->setCurrentIndex(0);
        break;

    case 12:
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

        ui->stackedW_sys_2->setCurrentIndex(1);
        break;

    case 13:
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

        ui->stackedW_sys_2->setCurrentIndex(2);
        break;

    case 14:
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

        ui->stackedW_sys_2->setCurrentIndex(3);
        break;
    default:
        qDebug() << "страницы с таким номеров не существует! ( " << index << " )";
        break;
    }
}
//-----------------------------------------------------------------//

//-----------------------------------------------------------------//
//****** [общий слот для страниц (добавить/удалить)]
//-----------------------------------------------------------------//
void widget_sys_stage::slot_page_list_all(int index)
{
    switch (index)
    {
    case 0: // pushB_add_page_0
        ui->fr_block_1_page_2->setVisible(true); // показать
        ui->pushB_add_page_0->setVisible(false);
        break;

    case 1: // pushB_del_page_0
        ui->fr_block_1_page_2->setVisible(false); // скрыть
        ui->pushB_del_page_0->setVisible(false);
        break;

    case 2: // pushB_del_page_1
        ui->fr_block_1_page_2->setVisible(false); // скрыть
        ui->pushB_del_page_1->setVisible(false);
        break;
    default:
        qDebug() << "страницы с таким номеров не существует! ( " << index << " )";
        break;
    }
}

//-----------------------------------------------------------------//

//-----------------------------------------------------------------//
//****** [Блок 1 (преключение страниц)]
//-----------------------------------------------------------------//
void widget_sys_stage::slot_pushB_page_0()
{
    slot_pushB_all(0);
}

void widget_sys_stage::slot_pushB_page_1()
{
    slot_pushB_all(1);
}
//-----------------------------------------------------------------//

//-----------------------------------------------------------------//
//****** [Блок 2 (преключение страниц)]
//-----------------------------------------------------------------//
void widget_sys_stage::slot_pushB_sys_page_1()
{
    slot_pushB_all(11);
}

void widget_sys_stage::slot_pushB_sys_page_2()
{
    slot_pushB_all(12);
}

void widget_sys_stage::slot_pushB_sys_page_3()
{
    slot_pushB_all(13);
}

void widget_sys_stage::slot_pushB_sys_page_4()
{
    slot_pushB_all(14);
}
//-----------------------------------------------------------------//

//-----------------------------------------------------------------//
//****** [Блок 1 слоты (добавить/удалить)]
//-----------------------------------------------------------------//
// add
void widget_sys_stage::slot_pushB_add_page_0()
{
    slot_page_list_all(0);
}

// del 0
void widget_sys_stage::slot_pushB_del_page_0()
{
    slot_page_list_all(1);
}

// del 1
void widget_sys_stage::slot_pushB_del_page_1()
{
    slot_page_list_all(2);
}
//-----------------------------------------------------------------//
