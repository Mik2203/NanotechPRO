#include "widget_pages_list.h"
#include "ui_widget_pages_list.h"

widget_pages_list::widget_pages_list(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_pages_list)
{
    ui->setupUi(this);

    //скрыть страницы ионов
    ui->fr_list_1->setVisible(false);
    ui->fr_list_2->setVisible(false);
    ui->fr_list_3->setVisible(false);
    ui->pushB_del_page_0->setVisible(false);

    ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));


    //-----------------------------------------------------------------//
    //****** [Слоты]
    //-----------------------------------------------------------------//
    // слоты создания страниц
    connect(ui->pushB_add_page_0, SIGNAL(clicked()), this, SLOT(slot_pushB_add_page_0()));
    connect(ui->pushB_add_page_1, SIGNAL(clicked()), this, SLOT(slot_pushB_add_page_1()));
    connect(ui->pushB_add_page_2, SIGNAL(clicked()), this, SLOT(slot_pushB_add_page_2()));
    connect(ui->pushB_add_page_3, SIGNAL(clicked()), this, SLOT(slot_pushB_add_page_3()));

    // слоты удаления страниц
    connect(ui->pushB_del_page_0, SIGNAL(clicked()), this, SLOT(slot_pushB_del_page_0()));
    connect(ui->pushB_del_page_1, SIGNAL(clicked()), this, SLOT(slot_pushB_del_page_1()));
    connect(ui->pushB_del_page_2, SIGNAL(clicked()), this, SLOT(slot_pushB_del_page_2()));
    connect(ui->pushB_del_page_3, SIGNAL(clicked()), this, SLOT(slot_pushB_del_page_3()));

    // слоты переключение по страницам
    connect(ui->pushB_page_0, SIGNAL(clicked()), this, SLOT(slot_pushB_page_0()));
    connect(ui->pushB_page_1, SIGNAL(clicked()), this, SLOT(slot_pushB_page_1()));
    connect(ui->pushB_page_2, SIGNAL(clicked()), this, SLOT(slot_pushB_page_2()));
    connect(ui->pushB_page_3, SIGNAL(clicked()), this, SLOT(slot_pushB_page_3()));

    // Слот кнопки общего расчета
    connect(ui->pushB_page_general_0, SIGNAL(clicked()), this, SLOT(slot_pushB_page_general_0()));

    // Слот кнопки общей коррекции
    connect(ui->pushB_page_korr_0, SIGNAL(clicked()), this, SLOT(slot_pushB_page_korr_0()));
    //-----------------------------------------------------------------//


    // общая кнопка ее размер старта
    ui->pushB_page_general_0->setFixedSize(56, 23); //размер картинки
    ui->pushB_page_general_0->setIcon(QIcon(":/1.png")); // без иконки

    // кнопка коррекции ее размер старта
    ui->pushB_page_korr_0->setFixedSize(56, 23); //размер картинки
    ui->pushB_page_korr_0->setIcon(QIcon(":/1.png")); // без иконки

    // Переменные
    int_stackedW_page_0 = 0;
}

widget_pages_list::~widget_pages_list()
{
    delete ui;
}

//-----------------------------------------------------------//
//================== (слоты создания страниц)
//-----------------------------------------------------------//
void widget_pages_list::slot_pushB_add_page_0()
{
    int_add_page_0 = ui->pushB_page_0->text().toInt(0);
    slot_function_add_page(int_add_page_0);
}

void widget_pages_list::slot_pushB_add_page_1()
{
    int_add_page_0 = ui->pushB_page_1->text().toInt(0);
    slot_function_add_page(int_add_page_0);
}

void widget_pages_list::slot_pushB_add_page_2()
{
    int_add_page_0 = ui->pushB_page_2->text().toInt(0);
    slot_function_add_page(int_add_page_0);
}

void widget_pages_list::slot_pushB_add_page_3()
{
    int_add_page_0 = ui->pushB_page_3->text().toInt(0);
    slot_function_add_page(int_add_page_0);
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (слоты удаления страниц)
//-----------------------------------------------------------//
void widget_pages_list::slot_pushB_del_page_0()
{
    int_del_page_0 = ui->pushB_page_0->text().toInt(0);
    slot_function_del_page(int_del_page_0);
}

void widget_pages_list::slot_pushB_del_page_1()
{
    int_del_page_1 = ui->pushB_page_1->text().toInt(0);
    slot_function_del_page(int_del_page_1);
}

void widget_pages_list::slot_pushB_del_page_2()
{
    int_del_page_2 = ui->pushB_page_2->text().toInt(0);
    slot_function_del_page(int_del_page_2);
}

void widget_pages_list::slot_pushB_del_page_3()
{
    int_del_page_3 = ui->pushB_page_3->text().toInt(0);
    slot_function_del_page(int_del_page_3);
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (слоты переключение по страницам)
//-----------------------------------------------------------//
void widget_pages_list::slot_pushB_page_0()
{
    emit signal_pushB_page_0(int_stackedW_page_0);
}

void widget_pages_list::slot_pushB_page_1()
{
    emit signal_pushB_page_1(int_stackedW_page_1);
}

void widget_pages_list::slot_pushB_page_2()
{
    emit signal_pushB_page_2(int_stackedW_page_2);
}

void widget_pages_list::slot_pushB_page_3()
{
    emit signal_pushB_page_3(int_stackedW_page_3);
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (функция добавления страниц)
//-----------------------------------------------------------//
void widget_pages_list::slot_function_add_page(int index)
{
    if(index == 1)
    {
        int_stackedW_page_0 = 0;
        int_stackedW_page_1 = 1;
        qDebug() << "index1: " << index;

        ui->fr_list_1->setVisible(true);
        ui->pushB_del_page_0->setVisible(true);

        ui->pushB_add_page_3->setVisible(false); // Скрыть добавить страницу

        ui->pushB_add_page_0->setEnabled(false);

        ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
        ui->pushB_page_general_0->setIcon(QIcon(":/menu/page/push_geniral_0.png"));
        //        ui->pushB_page_general_0->setIconSize(QSize(ui->pushB_page_general_0->width(),
        //                                                    ui->pushB_page_general_0->height()));
        ui->pushB_page_general_0->setIconSize(QSize(19,19));

        ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки
        ui->pushB_page_korr_0->setIcon(QIcon(":/menu/page/push_korr_0.png"));
        ui->pushB_page_korr_0->setIconSize(QSize(19,19));
    }
    else
    {
        if(index == 2)
        {
            int_stackedW_page_1 = 1;
            int_stackedW_page_2 = 2;

            ui->pushB_add_page_1->setEnabled(false);
            ui->pushB_del_page_0->setEnabled(false);

            if(ui->fr_list_3->isVisible() == true)
            {
                qDebug() << "Проверка 1 до: " << ui->fr_list_2->isVisible()
                         << ui->fr_list_3->isVisible();

                if(ui->fr_list_1->isVisible() == false)
                {
                    ui->fr_list_1->setVisible(true);
                }

                ui->pushB_page_2->setText("3");
                ui->fr_list_2->setVisible(true);

                ui->pushB_page_3->setText("4");
                ui->fr_list_3->setVisible(true);
                int_stackedW_page_3 = 3;

                ui->pushB_page_general_0->setFixedSize(244, 23); //размер картинки
                ui->pushB_page_korr_0->setFixedSize(244, 23); //размер картинки

                qDebug() << "Проверка 1 после: " << ui->fr_list_2->isVisible()
                         << ui->fr_list_3->isVisible();
            }
            else
            {
                qDebug() << "Проверка 2 до: " << ui->fr_list_2->isVisible()
                         << ui->fr_list_3->isVisible();

                ui->pushB_page_2->setText("3");
                ui->fr_list_2->setVisible(true);
                ui->fr_list_1->setVisible(true);

                ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

                qDebug() << "Проверка 2 после: " << ui->fr_list_2->isVisible()
                         << ui->fr_list_3->isVisible();
            }

            qDebug() << "page_2: " << ui->pushB_page_2->text();
            qDebug() << "index2: " << index;
        }
        else
        {
            if(index == 3)
            {
                int_stackedW_page_2 = 2;

                ui->pushB_add_page_3->setVisible(false); // Скрыть добавить страницу

                if(ui->fr_list_0->isVisible() == true
                        && ui->fr_list_2->isVisible() == true
                        && ui->fr_list_3->isVisible() == true)
                {
                    ui->pushB_add_page_0->setEnabled(true);
                }

                if(ui->fr_list_2->isVisible() == true)
                {
                    ui->pushB_page_general_0->setFixedSize(244, 23); //размер картинки
                    ui->pushB_page_korr_0->setFixedSize(244, 23); //размер картинки
                    ui->fr_list_3->setVisible(true);
                    int_stackedW_page_3 = 3;
                    ui->pushB_page_3->setText("4");

                    // Скрыть кнопки добавить страницу
                    ui->pushB_add_page_0->setVisible(false);
                    ui->pushB_add_page_1->setVisible(false);
                    ui->pushB_add_page_2->setVisible(false);
                }
                else
                {
                    ui->pushB_page_general_0->setFixedSize(244, 23); //размер картинки
                    ui->pushB_page_korr_0->setFixedSize(244, 23); //размер картинки

                    ui->pushB_page_3->setText("4");
                    int_stackedW_page_3 = 3;

                    qDebug() << "page_2->page_3: " << ui->pushB_page_3->text();

                    ui->fr_list_2->setVisible(true);
                    ui->fr_list_3->setVisible(true);

                    // Скрыть кнопки добавить страницу
                    ui->pushB_add_page_0->setVisible(false);
                    ui->pushB_add_page_1->setVisible(false);
                    ui->pushB_add_page_2->setVisible(false);
                    ui->pushB_add_page_3->setVisible(false);
                }
                qDebug() << "index3: " << index;
            }
            else
            {
                if(index == 4)
                {
                    int_stackedW_page_3 = 3;

                    if(ui->fr_list_0->isVisible() == true
                            && ui->fr_list_2->isVisible() == true
                            && ui->fr_list_3->isVisible() == true)
                    {
                        ui->fr_list_1->setVisible(true);
                        ui->pushB_page_1->setText("2");

                        ui->pushB_page_2->setText("3");

                        ui->pushB_page_3->setText("4");

                        ui->pushB_add_page_3->setVisible(false);

                    }

                    ui->pushB_add_page_3->setEnabled(false);
                    ui->pushB_del_page_2->setEnabled(false);

                    qDebug() << "index4: " << index;
                    ui->fr_list_0->setVisible(true);
                }
            }
        }
    }

}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (функция удаления страниц)
//-----------------------------------------------------------//
void widget_pages_list::slot_function_del_page(int index)
{
    if(index == 1)
    {
        int_hidden_show_1 = 0;

        ui->pushB_add_page_0->setEnabled(true);
        ui->pushB_del_page_0->setEnabled(true);

        ui->pushB_del_page_0->setVisible(false); // скрыть кнопку удалить страницу

        ui->pushB_add_page_0->setVisible(true);
        ui->pushB_add_page_1->setVisible(true);
        ui->pushB_add_page_2->setVisible(true);

        qDebug() << "del_index1: " << index;

        if(ui->fr_list_2->isVisible() == false)
        {
            ui->pushB_page_general_0->setFixedSize(56, 23); //размер картинки
            ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));

            ui->pushB_page_korr_0->setFixedSize(56, 23); //размер картинки
            ui->pushB_page_korr_0->setIcon(QIcon(":/1.png"));
        }

        ui->fr_list_1->setVisible(false); // скрыть блок 2 страницы страницу
    }
    else
    {
        if(index == 2)
        {

            int_hidden_show_2 = 0;

            ui->pushB_add_page_0->setEnabled(true);
            ui->pushB_del_page_0->setEnabled(true);

            ui->pushB_add_page_0->setVisible(true); // показать кнопку добавить страницу
            ui->pushB_del_page_0->setVisible(false); // скрыть кнопку удалить страницу

            ui->pushB_add_page_1->setVisible(true);
            ui->pushB_add_page_2->setVisible(true);

            qDebug() << "del_index2: " << index;

            if(ui->fr_list_1->isVisible() == true)
            {
                qDebug() << "изменилось что-то: ";

                //ui->pushB_page_3->setText("3");
                //int_stackedW_page_3 = 2;

                if(ui->fr_list_1->isVisible() == true
                        && ui->fr_list_2->isVisible() == true)
                {
                    qDebug() << "Все хорошо: ";
                    ui->fr_list_1->setVisible(false); // скрыть блок 2 страницы страницу

                    ui->pushB_page_2->setText("2");
                    int_stackedW_page_2 = 1;

                    ui->pushB_page_3->setText("3");
                    int_stackedW_page_3 = 2;

                    ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                    ui->pushB_page_general_0->setIcon(QIcon(":/menu/page/push_geniral_0.png"));

                    ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки
                    ui->pushB_page_korr_0->setIcon(QIcon(":/menu/page/push_korr_0.png"));

                    if(ui->fr_list_0->isVisible() == true
                            && ui->fr_list_2->isVisible() == true)
                    {
                        ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
                        ui->pushB_page_general_0->setIcon(QIcon(":/menu/page/push_geniral_0.png"));

                        ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки
                        ui->pushB_page_korr_0->setIcon(QIcon(":/menu/page/push_korr_0.png"));
                    }

                    if(ui->fr_list_0->isVisible() == true
                            && ui->fr_list_3->isVisible() == true)
                    {
                        ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                        ui->pushB_page_general_0->setIcon(QIcon(":/menu/page/push_geniral_0.png"));

                        ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки
                        ui->pushB_page_korr_0->setIcon(QIcon(":/menu/page/push_korr_0.png"));
                    }

                    if(ui->fr_list_0->isVisible() == true
                            && ui->fr_list_2->isVisible() == true
                            && ui->fr_list_3->isVisible() == true)
                    {
                        ui->pushB_add_page_0->setEnabled(false);
                        ui->pushB_add_page_3->setVisible(true);
                    }
                }
                else
                {
                    ui->fr_list_1->setVisible(false); // скрыть блок 2 страницы страницу

                    //ui->fr_list_2->setVisible(true);
                    ui->pushB_page_2->setText("2");
                    int_stackedW_page_2 = 1;

                    //ui->fr_list_3->setVisible(true);
                    ui->pushB_page_3->setText("2");
                    int_stackedW_page_3 = 1;

                    qDebug() << "изменилась page_2: " << ui->pushB_page_2->text()
                             << " изменилась page_3: " << ui->pushB_page_3->text();

                    ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
                    ui->pushB_page_general_0->setIcon(QIcon(":/menu/page/push_geniral_0.png"));

                    ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки
                    ui->pushB_page_korr_0->setIcon(QIcon(":/menu/page/push_korr_0.png"));
                }

                if(ui->fr_list_2->isVisible() == false
                        && ui->fr_list_3->isVisible() == false)
                {
                    qDebug() << "изменилась page_3--- скрыта: ";
                    ui->fr_list_3->setVisible(false);

                    ui->pushB_page_general_0->setFixedSize(56, 23); //размер картинки
                    ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));

                    ui->pushB_page_korr_0->setFixedSize(56, 23); //размер картинки
                    ui->pushB_page_korr_0->setIcon(QIcon(":/1.png"));
                }

            }
            else
            {
                if(ui->fr_list_3->isVisible() == true)
                {
                    ui->fr_list_3->setVisible(false);

                    ui->pushB_page_3->setText("2");
                    int_stackedW_page_3 = 1;

                    qDebug() << "изменилась page_2 скрыта: "
                             << " изменилась page_3: " << ui->pushB_page_3->text();

                    ui->pushB_page_general_0->setFixedSize(56, 23); //размер картинки
                    ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));

                    ui->pushB_page_korr_0->setFixedSize(56, 23); //размер картинки
                    ui->pushB_page_korr_0->setIcon(QIcon(":/1.png"));
                }
                else
                {
                    qDebug() << "изменилась page_3 скрыта: ";
                    ui->fr_list_2->setVisible(false);
                    ui->fr_list_3->setVisible(false);



                    ui->pushB_page_general_0->setFixedSize(56, 23); //размер картинки
                    ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));

                    ui->pushB_page_korr_0->setFixedSize(56, 23); //размер картинки
                    ui->pushB_page_korr_0->setIcon(QIcon(":/1.png"));
                }
            }

        }
        else
        {
            if(index == 3)
            {
                int_hidden_show_3 = 0;

                ui->pushB_add_page_1->setEnabled(true);
                ui->pushB_del_page_1->setEnabled(true);

                // Показать кнопки добавить страницу
                ui->pushB_add_page_0->setVisible(true);
                ui->pushB_add_page_1->setVisible(true);
                ui->pushB_add_page_2->setVisible(true);

                //ui->fr_list_2->setVisible(false); // скрыть блок 3 страницы страницу

                qDebug() << "del_index3: " << index;
                if((ui->fr_list_2->isVisible() == true && ui->fr_list_3->isVisible() == true))
                {
                    ui->pushB_page_3->setText("3");
                    int_stackedW_page_3 = 2;
                    ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                    ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

                    qDebug() << "скрыть page_2: "
                             << " изменилась page_3: " << ui->pushB_page_3->text();

                    ui->fr_list_2->setVisible(false);
                    ui->fr_list_3->setVisible(true);

                    ui->pushB_add_page_3->setVisible(true); // Показать добавить страницу
                }
                else
                {
                    qDebug() << "ui->fr_list_3->isVisible() == false";
                    if(ui->fr_list_3->isVisible() == false)
                    {
                        qDebug() << "скрыть page_3: ";
                        ui->fr_list_3->setVisible(false);
                        ui->fr_list_2->setVisible(false);

                        ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
                        ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки
                    }
                    else
                    {
                        qDebug() << "drewrewrewr43534545";
                        ui->fr_list_3->setVisible(false);
                        ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
                        ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки
                    }
                }
            }
            else
            {
                if(index == 4)
                {
                    int_hidden_show_4 = 0;

                    ui->pushB_add_page_1->setEnabled(false);
                    ui->pushB_add_page_2->setEnabled(true);
                    ui->pushB_del_page_2->setEnabled(true);

                    // Показать кнопки добавить страницу
                    ui->pushB_add_page_0->setVisible(true);
                    ui->pushB_add_page_1->setVisible(true);
                    ui->pushB_add_page_2->setVisible(true);

                    ui->fr_list_3->setVisible(false); // скрыть блок 4 страницы страницу

                    qDebug() << "del_index4: " << index;

                    if(ui->fr_list_2->isVisible() == true)
                    {
                        ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                        ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки
                    }
                }
            }
        }
    }
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (Добавить страницы)
//-----------------------------------------------------------//
void widget_pages_list::on_add_page_0_clicked()
{
    //показать страницы ионов
    ui->fr_list_1->setVisible(true);
    ui->fr_list_2->setVisible(true);
    ui->fr_list_3->setVisible(true);
    int_stackedW_page_0 = 0;
    int_stackedW_page_1 = 1;
    int_stackedW_page_2 = 2;
    int_stackedW_page_3 = 3;

    ui->pushB_add_page_0->setVisible(false);
    ui->pushB_add_page_1->setVisible(false);
    ui->pushB_add_page_2->setVisible(false);

    ui->pushB_del_page_0->setEnabled(false);
    ui->pushB_del_page_1->setEnabled(false);
    ui->pushB_del_page_2->setEnabled(false);
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (Слот кнопки общего расчета)
//-----------------------------------------------------------//
void widget_pages_list::slot_pushB_page_general_0()
{

}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (Слот кнопки общей коррекции)
//-----------------------------------------------------------//
void widget_pages_list::slot_pushB_page_korr_0()
{

}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (Событие слота "Кнопка общий расчет")
//-----------------------------------------------------------//
void widget_pages_list::on_pushB_page_general_0_toggled(bool general)
{
    switch (general)
    {
    case 0:
        if(ui->pushB_page_general_0->width() >= 118)
        {
            qDebug() << "checked_false:" << general;
            ui->pushB_page_general_0->setIcon(QIcon(":/menu/page/push_geniral_0.png"));
            ui->pushB_page_general_0->setIconSize(QSize(19,19));
        }
        else
        {
            qDebug() << "размер иконки мал:" << ui->pushB_page_general_0->width();
        }
        break;
    case 1:
        if(ui->pushB_page_general_0->width() >= 118)
        {
            qDebug() << "checked_true:" << general;
            ui->pushB_page_general_0->setIcon(QIcon(":/menu/page/push_geniral_1.png"));
            ui->pushB_page_general_0->setIconSize(QSize(19,19));
            ui->pushB_page_general_0->setEnabled(false);

            // Пауза
            QTime time2;
            time2.start();
            for(;time2.elapsed() < 1000;)
            {
                qApp->processEvents();
            }

            ui->pushB_page_general_0->setEnabled(true);
            ui->pushB_page_general_0->setChecked(false);
        }
        else
        {
            //qDebug() << "размер иконки мал:" << ui->pushB_page_general_0->width();

            ui->pushB_page_general_0->setEnabled(false);

            // Пауза
            QTime time2;
            time2.start();
            for(;time2.elapsed() < 1000;)
            {
                qApp->processEvents();
            }

            ui->pushB_page_general_0->setEnabled(true);
            ui->pushB_page_general_0->setChecked(false);
        }
        break;
    default:
        break;
    }
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (Событие слота "Кнопка общий коррекции")
//-----------------------------------------------------------//
void widget_pages_list::on_pushB_page_korr_0_toggled(bool korr)
{
    switch (korr)
    {
    case 0:
        if(ui->pushB_page_korr_0->width() >= 118)
        {
            qDebug() << "checked_false:" << korr;
            ui->pushB_page_korr_0->setIcon(QIcon(":/menu/page/push_korr_0.png"));
            ui->pushB_page_korr_0->setIconSize(QSize(19,19));
        }
        else
        {
            qDebug() << "размер иконки мал:" << ui->pushB_page_korr_0->width();
        }
        break;
    case 1:
        if(ui->pushB_page_korr_0->width() >= 118)
        {
            qDebug() << "checked_true:" << korr;
            ui->pushB_page_korr_0->setIcon(QIcon(":/menu/page/push_korr_1.png"));
            ui->pushB_page_korr_0->setIconSize(QSize(19,19));
            ui->pushB_page_korr_0->setEnabled(false);

            // Пауза
            QTime time2;
            time2.start();
            for(;time2.elapsed() < 1000;)
            {
                qApp->processEvents();
            }

            ui->pushB_page_korr_0->setEnabled(true);
            ui->pushB_page_korr_0->setChecked(false);
        }
        else
        {
            //qDebug() << "размер иконки мал:" << ui->pushB_page_korr_0->width();

            ui->pushB_page_korr_0->setEnabled(false);

            // Пауза
            QTime time2;
            time2.start();
            for(;time2.elapsed() < 1000;)
            {
                qApp->processEvents();
            }

            ui->pushB_page_korr_0->setEnabled(true);
            ui->pushB_page_korr_0->setChecked(false);
        }
        break;
    default:
        break;
    }
}
//-----------------------------------------------------------//
