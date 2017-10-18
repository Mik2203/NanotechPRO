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

    ui->pushB_page_korr_0->setVisible(false);

    ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));

    slot_pushB_alls(01);


    //-----------------------------------------------------------------//
    //****** [Слоты]
    //-----------------------------------------------------------------//
    // слоты создания страниц
    connect(ui->pushB_add_page_0, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_add_page_0(bool)));
    connect(ui->pushB_add_page_1, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_add_page_1(bool)));
    connect(ui->pushB_add_page_2, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_add_page_2(bool)));
    connect(ui->pushB_add_page_3, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_add_page_3(bool)));

    // слоты удаления страниц
    connect(ui->pushB_del_page_0, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_del_page_0(bool)));
    connect(ui->pushB_del_page_1, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_del_page_1(bool)));
    connect(ui->pushB_del_page_2, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_del_page_2(bool)));
    connect(ui->pushB_del_page_3, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_del_page_3(bool)));

    // слоты переключение по страницам
    connect(ui->pushB_page_0, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_page_0(bool)));
    connect(ui->pushB_page_1, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_page_1(bool)));
    connect(ui->pushB_page_2, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_page_2(bool)));
    connect(ui->pushB_page_3, SIGNAL(clicked(bool)), this, SLOT(slot_pushB_page_3(bool)));

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
//================== (унаследовать компонент)
//-----------------------------------------------------------//
QPushButton *widget_pages_list::pushB_1()
{
    return ui->pushB_page_korr_0;
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (слоты создания страниц)
//-----------------------------------------------------------//
void widget_pages_list::slot_pushB_add_page_0(bool page_0)
{
    if(ui->pushB_add_page_0->isCheckable() == page_0)
    {
        int_add_page_0 = ui->pushB_page_0->text().toInt(0);
        slot_function_add_page(int_add_page_0);
        ui->pushB_add_page_0->setVisible(false);
    }
    else
    {

    }
}

void widget_pages_list::slot_pushB_add_page_1(bool page_1)
{
    if(ui->pushB_add_page_1->isCheckable() == page_1)
    {
        int_add_page_0 = ui->pushB_page_1->text().toInt(0);
        slot_function_add_page(int_add_page_0);
        ui->pushB_add_page_1->setVisible(false);
    }
    else
    {

    }
}

void widget_pages_list::slot_pushB_add_page_2(bool page_2)
{
    if(ui->pushB_add_page_2->isCheckable() == page_2)
    {
        int_add_page_0 = ui->pushB_page_2->text().toInt(0);
        slot_function_add_page(int_add_page_0);
        ui->pushB_add_page_2->setVisible(false);
    }
    else
    {

    }
}

void widget_pages_list::slot_pushB_add_page_3(bool page_3)
{
    if(ui->pushB_add_page_3->isCheckable() == page_3)
    {
        int_add_page_0 = ui->pushB_page_3->text().toInt(0);
        slot_function_add_page(int_add_page_0);
        ui->pushB_add_page_3->setVisible(false);
    }
    else
    {

    }
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (слоты удаления страниц)
//-----------------------------------------------------------//
void widget_pages_list::slot_pushB_del_page_0(bool page_0)
{
    if(ui->pushB_del_page_0->isCheckable() == page_0)
    {
        int_del_page_0 = ui->pushB_page_0->text().toInt(0);
        slot_function_del_page(int_del_page_0);
    }
    else
    {

    }

}

void widget_pages_list::slot_pushB_del_page_1(bool page_1)
{
    if(ui->pushB_del_page_1->isCheckable() == page_1)
    {
        int_del_page_1 = ui->pushB_page_1->text().toInt(0);
        slot_function_del_page(int_del_page_1);
    }
    else
    {

    }
}

void widget_pages_list::slot_pushB_del_page_2(bool page_2)
{
    if(ui->pushB_del_page_2->isCheckable() == page_2)
    {
        int_del_page_2 = ui->pushB_page_2->text().toInt(0);
        slot_function_del_page(int_del_page_2);
    }
    else
    {

    }
}

void widget_pages_list::slot_pushB_del_page_3(bool page_3)
{
    if(ui->pushB_del_page_3->isCheckable() == page_3)
    {
        int_del_page_3 = ui->pushB_page_3->text().toInt(0);
        slot_function_del_page(int_del_page_3);
    }
    else
    {

    }
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (слоты переключение по страницам)
//-----------------------------------------------------------//
void widget_pages_list::slot_pushB_page_0(bool pb1)
{
    if(ui->pushB_page_0->isCheckable() == pb1)
    {
        emit signal_pushB_page_0(int_stackedW_page_0);
        slot_pushB_alls(01);
    }
    else
    {

    }

}

void widget_pages_list::slot_pushB_page_1(bool pb2)
{
    if(ui->pushB_page_1->isCheckable() == pb2)
    {
        emit signal_pushB_page_1(int_stackedW_page_1);
        slot_pushB_alls(02);
    }
    else
    {

    }
}

void widget_pages_list::slot_pushB_page_2(bool pb3)
{
    if(ui->pushB_page_2->isCheckable() == pb3)
    {
        emit signal_pushB_page_2(int_stackedW_page_2);
        slot_pushB_alls(03);
    }
    else
    {

    }
}

void widget_pages_list::slot_pushB_page_3(bool pb4)
{
    if(ui->pushB_page_3->isCheckable() == pb4)
    {
        emit signal_pushB_page_3(int_stackedW_page_3);
        slot_pushB_alls(04);
    }
    else
    {

    }
}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (функция добавления страниц)
//-----------------------------------------------------------//
void widget_pages_list::slot_function_add_page(int index)
{
//    if(index == 1)
//    {
//        int_stackedW_page_0 = 0;
//        int_stackedW_page_1 = 1;
//        qDebug() << "index1: " << index;

//        ui->fr_list_1->setVisible(true);
//        ui->pushB_del_page_0->setVisible(true);

//        ui->pushB_add_page_3->setVisible(false); // Скрыть добавить страницу

//        ui->pushB_add_page_0->setEnabled(false);

//        ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
//        ui->pushB_page_general_0->setIcon(QIcon(":/menu/page/push_geniral_0.png"));
//        //        ui->pushB_page_general_0->setIconSize(QSize(ui->pushB_page_general_0->width(),
//        //                                                    ui->pushB_page_general_0->height()));
//        ui->pushB_page_general_0->setIconSize(QSize(19,19));

//        ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки
//        ui->pushB_page_korr_0->setIcon(QIcon(":/menu/page/push_korr_0.png"));
//        ui->pushB_page_korr_0->setIconSize(QSize(19,19));
//    }
//    else
//    {
//        if(index == 2)
//        {
//            int_stackedW_page_1 = 1;
//            int_stackedW_page_2 = 2;

//            ui->pushB_add_page_1->setEnabled(false);
//            ui->pushB_del_page_0->setEnabled(false);

//            if(ui->fr_list_3->isVisible() == true)
//            {
//                qDebug() << "Проверка 1 до: " << ui->fr_list_2->isVisible()
//                         << ui->fr_list_3->isVisible();

//                if(ui->fr_list_1->isVisible() == false)
//                {
//                    ui->fr_list_1->setVisible(true);
//                }

//                ui->pushB_page_2->setText("3");
//                ui->fr_list_2->setVisible(true);

//                ui->pushB_page_3->setText("4");
//                ui->fr_list_3->setVisible(true);
//                int_stackedW_page_3 = 3;

//                ui->pushB_page_general_0->setFixedSize(244, 23); //размер картинки
//                ui->pushB_page_korr_0->setFixedSize(244, 23); //размер картинки

//                qDebug() << "Проверка 1 после: " << ui->fr_list_2->isVisible()
//                         << ui->fr_list_3->isVisible();
//            }
//            else
//            {
//                qDebug() << "Проверка 2 до: " << ui->fr_list_2->isVisible()
//                         << ui->fr_list_3->isVisible();

//                ui->pushB_page_2->setText("3");
//                ui->fr_list_2->setVisible(true);
//                ui->fr_list_1->setVisible(true);

//                ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
//                ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

//                qDebug() << "Проверка 2 после: " << ui->fr_list_2->isVisible()
//                         << ui->fr_list_3->isVisible();
//            }

//            qDebug() << "page_2: " << ui->pushB_page_2->text();
//            qDebug() << "index2: " << index;
//        }
//        else
//        {
//            if(index == 3)
//            {
//                int_stackedW_page_2 = 2;

//                ui->pushB_add_page_3->setVisible(false); // Скрыть добавить страницу

//                if(ui->fr_list_0->isVisible() == true
//                        && ui->fr_list_2->isVisible() == true
//                        && ui->fr_list_3->isVisible() == true)
//                {
//                    ui->pushB_add_page_0->setEnabled(true);
//                }

//                if(ui->fr_list_2->isVisible() == true)
//                {
//                    ui->pushB_page_general_0->setFixedSize(244, 23); //размер картинки
//                    ui->pushB_page_korr_0->setFixedSize(244, 23); //размер картинки
//                    ui->fr_list_3->setVisible(true);
//                    int_stackedW_page_3 = 3;
//                    ui->pushB_page_3->setText("4");

//                    // Скрыть кнопки добавить страницу
//                    ui->pushB_add_page_0->setVisible(false);
//                    ui->pushB_add_page_1->setVisible(false);
//                    ui->pushB_add_page_2->setVisible(false);
//                }
//                else
//                {
//                    ui->pushB_page_general_0->setFixedSize(244, 23); //размер картинки
//                    ui->pushB_page_korr_0->setFixedSize(244, 23); //размер картинки

//                    ui->pushB_page_3->setText("4");
//                    int_stackedW_page_3 = 3;

//                    qDebug() << "page_2->page_3: " << ui->pushB_page_3->text();

//                    ui->fr_list_2->setVisible(true);
//                    ui->fr_list_3->setVisible(true);

//                    // Скрыть кнопки добавить страницу
//                    ui->pushB_add_page_0->setVisible(false);
//                    ui->pushB_add_page_1->setVisible(false);
//                    ui->pushB_add_page_2->setVisible(false);
//                    ui->pushB_add_page_3->setVisible(false);
//                }
//                qDebug() << "index3: " << index;
//            }
//            else
//            {
//                if(index == 4)
//                {
//                    int_stackedW_page_3 = 3;

//                    if(ui->fr_list_0->isVisible() == true
//                            && ui->fr_list_2->isVisible() == true
//                            && ui->fr_list_3->isVisible() == true)
//                    {
//                        ui->fr_list_1->setVisible(true);
//                        ui->pushB_page_1->setText("2");

//                        ui->pushB_page_2->setText("3");

//                        ui->pushB_page_3->setText("4");

//                        ui->pushB_add_page_3->setVisible(false);

//                    }

//                    ui->pushB_add_page_3->setEnabled(false);
//                    ui->pushB_del_page_2->setEnabled(false);

//                    qDebug() << "index4: " << index;
//                    ui->fr_list_0->setVisible(true);
//                }
//            }
//        }
//    }

    switch (index)
    {
    case 1: /*Add_01*/

        if(ui->fr_list_0->isVisible() == true)
        {
            int_stackedW_page_0 = 0;
            int_stackedW_page_1 = 1;
            ui->fr_list_1->setVisible(true);

            ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
            ui->pushB_page_general_0->setIcon(QIcon(":/menu/page/push_geniral_0.png"));
            ui->pushB_page_general_0->setIconSize(QSize(19,19));

            ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки
            ui->pushB_page_korr_0->setIcon(QIcon(":/menu/page/push_korr_0.png"));
            ui->pushB_page_korr_0->setIconSize(QSize(19,19));
        }
        break;
    case 2: /*Add_02*/
        int_stackedW_page_1 = 1;
        int_stackedW_page_2 = 2;

        if(ui->fr_list_2->isVisible() == false)
        {
            ui->fr_list_2->setVisible(true);
            ui->pushB_page_2->setText("3");

            ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
            ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

            qDebug() << "if case 2 add_1" << ui->pushB_page_2->text();

            if(ui->pushB_page_3->text() == "2")
            {
                if(ui->fr_list_2->isVisible() == false)
                {
                    int_stackedW_page_2 = 1;
                    ui->fr_list_2->setVisible(true);
                    ui->pushB_page_2->setText("2");

                    qDebug() << " + if case 2 add_1_1";
                }
                else
                {
                    int_stackedW_page_2 = 2;
                    ui->fr_list_2->setVisible(true);
                    ui->pushB_page_2->setText("3");

                    qDebug() << " + if case 2 add_1_1_1";
                }

                int_stackedW_page_3 = 2;
                ui->pushB_page_3->setText("3");

                ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

                qDebug() << "if if case 2 add_1_1"
                         << ui->pushB_page_2->text()
                         << ui->pushB_page_3->text();
            }


        }
        else
        {
            if(ui->fr_list_1->isVisible() == false)
            {
                int_stackedW_page_1 = 1;
                ui->fr_list_1->setVisible(true);

                int_stackedW_page_2 = 2;
                ui->pushB_page_2->setText("3");

                int_stackedW_page_3 = 3;
                ui->pushB_page_3->setText("4");

                ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

                qDebug() << "if if if case 2 add_2"
                         << ui->pushB_page_1->text()
                         << ui->pushB_page_2->text();
            }
            else
            {
                int_stackedW_page_1 = 1;
                ui->fr_list_1->setVisible(true);

                int_stackedW_page_2 = 2;
                ui->pushB_page_2->setText("3");
                ui->fr_list_2->setVisible(true);

                int_stackedW_page_3 = 3;
                ui->pushB_page_3->setText("4");
                ui->fr_list_3->setVisible(true);

                ui->pushB_page_general_0->setFixedSize(244, 23); //размер картинки
                ui->pushB_page_korr_0->setFixedSize(244, 23); //размер картинки

                qDebug() << "else case 2 add_3"
                         << ui->pushB_page_2->text()
                         << ui->pushB_page_3->text();
            }
        }

        break;
    case 3: /*Add_03*/

        if(ui->pushB_page_2->text() == "3")
        {
            int_stackedW_page_2 = 2;
            int_stackedW_page_3 = 3;
            ui->fr_list_3->setVisible(true);

            ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
            ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

            qDebug() << "if case 3 add_1" << ui->pushB_page_2->text();

            if(ui->fr_list_3->isVisible() == true)
            {
                int_stackedW_page_3 = 3;
                ui->pushB_page_3->setText("4");

                ui->pushB_page_general_0->setFixedSize(244, 23); //размер картинки
                ui->pushB_page_korr_0->setFixedSize(244, 23); //размер картинки
                qDebug() << "if if case 3 add_2" << ui->pushB_page_3->text();
            }
        }
        else
        {
            int_stackedW_page_1 = 1;
            ui->fr_list_1->setVisible(true);

            int_stackedW_page_2 = 2;
            ui->pushB_page_2->setText("3");
            ui->fr_list_2->setVisible(true);

            int_stackedW_page_3 = 3;
            ui->pushB_page_3->setText("4");
            ui->fr_list_3->setVisible(true);

            ui->pushB_page_general_0->setFixedSize(244, 23); //размер картинки
            ui->pushB_page_korr_0->setFixedSize(244, 23); //размер картинки

            qDebug() << "else if else case 3 add_3"
                     << ui->pushB_page_2->text()
                     << ui->pushB_page_3->text();
        }

        break;
    case 4: /*Add_04*/


        if(ui->pushB_page_3->text() == "2")
        {
            int_stackedW_page_1 = 1;
            ui->fr_list_1->setVisible(true);
        }

        break;
    default:
        break;
    }

}
//-----------------------------------------------------------//

//-----------------------------------------------------------//
//================== (функция удаления страниц)
//-----------------------------------------------------------//
void widget_pages_list::slot_function_del_page(int index_del)
{
//    if(index_del == 1)
//    {
//        int_hidden_show_1 = 0;

//        ui->pushB_add_page_0->setEnabled(true);
//        ui->pushB_del_page_0->setEnabled(true);

//        ui->pushB_del_page_0->setVisible(false); // скрыть кнопку удалить страницу

//        ui->pushB_add_page_0->setVisible(true);
//        ui->pushB_add_page_1->setVisible(true);
//        ui->pushB_add_page_2->setVisible(true);

//        qDebug() << "del_index1: " << index;

//        if(ui->fr_list_2->isVisible() == false)
//        {
//            ui->pushB_page_general_0->setFixedSize(56, 23); //размер картинки
//            ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));

//            ui->pushB_page_korr_0->setFixedSize(56, 23); //размер картинки
//            ui->pushB_page_korr_0->setIcon(QIcon(":/1.png"));
//        }

//        ui->fr_list_1->setVisible(false); // скрыть блок 2 страницы страницу
//    }
//    else
//    {
//        if(index_del == 2)
//        {

//            int_hidden_show_2 = 0;

//            ui->pushB_add_page_0->setEnabled(true);
//            ui->pushB_del_page_0->setEnabled(true);

//            ui->pushB_add_page_0->setVisible(true); // показать кнопку добавить страницу
//            ui->pushB_del_page_0->setVisible(false); // скрыть кнопку удалить страницу

//            ui->pushB_add_page_1->setVisible(true);
//            ui->pushB_add_page_2->setVisible(true);

//            qDebug() << "del_index2: " << index;

//            if(ui->fr_list_1->isVisible() == true)
//            {
//                qDebug() << "изменилось что-то: ";

//                //ui->pushB_page_3->setText("3");
//                //int_stackedW_page_3 = 2;

//                if(ui->fr_list_1->isVisible() == true
//                        && ui->fr_list_2->isVisible() == true)
//                {
//                    qDebug() << "Все хорошо: ";
//                    ui->fr_list_1->setVisible(false); // скрыть блок 2 страницы страницу

//                    ui->pushB_page_2->setText("2");
//                    int_stackedW_page_2 = 1;

//                    ui->pushB_page_3->setText("3");
//                    int_stackedW_page_3 = 2;

//                    ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
//                    ui->pushB_page_general_0->setIcon(QIcon(":/menu/page/push_geniral_0.png"));

//                    ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки
//                    ui->pushB_page_korr_0->setIcon(QIcon(":/menu/page/push_korr_0.png"));

//                    if(ui->fr_list_0->isVisible() == true
//                            && ui->fr_list_2->isVisible() == true)
//                    {
//                        ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
//                        ui->pushB_page_general_0->setIcon(QIcon(":/menu/page/push_geniral_0.png"));

//                        ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки
//                        ui->pushB_page_korr_0->setIcon(QIcon(":/menu/page/push_korr_0.png"));
//                    }

//                    if(ui->fr_list_0->isVisible() == true
//                            && ui->fr_list_3->isVisible() == true)
//                    {
//                        ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
//                        ui->pushB_page_general_0->setIcon(QIcon(":/menu/page/push_geniral_0.png"));

//                        ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки
//                        ui->pushB_page_korr_0->setIcon(QIcon(":/menu/page/push_korr_0.png"));
//                    }

//                    if(ui->fr_list_0->isVisible() == true
//                            && ui->fr_list_2->isVisible() == true
//                            && ui->fr_list_3->isVisible() == true)
//                    {
//                        ui->pushB_add_page_0->setEnabled(false);
//                        ui->pushB_add_page_3->setVisible(true);
//                    }
//                }
//                else
//                {
//                    ui->fr_list_1->setVisible(false); // скрыть блок 2 страницы страницу

//                    //ui->fr_list_2->setVisible(true);
//                    ui->pushB_page_2->setText("2");
//                    int_stackedW_page_2 = 1;

//                    //ui->fr_list_3->setVisible(true);
//                    ui->pushB_page_3->setText("2");
//                    int_stackedW_page_3 = 1;

//                    qDebug() << "изменилась page_2: " << ui->pushB_page_2->text()
//                             << " изменилась page_3: " << ui->pushB_page_3->text();

//                    ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
//                    ui->pushB_page_general_0->setIcon(QIcon(":/menu/page/push_geniral_0.png"));

//                    ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки
//                    ui->pushB_page_korr_0->setIcon(QIcon(":/menu/page/push_korr_0.png"));
//                }

//                if(ui->fr_list_2->isVisible() == false
//                        && ui->fr_list_3->isVisible() == false)
//                {
//                    qDebug() << "изменилась page_3--- скрыта: ";
//                    ui->fr_list_3->setVisible(false);

//                    ui->pushB_page_general_0->setFixedSize(56, 23); //размер картинки
//                    ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));

//                    ui->pushB_page_korr_0->setFixedSize(56, 23); //размер картинки
//                    ui->pushB_page_korr_0->setIcon(QIcon(":/1.png"));
//                }

//            }
//            else
//            {
//                if(ui->fr_list_3->isVisible() == true)
//                {
//                    ui->fr_list_3->setVisible(false);

//                    ui->pushB_page_3->setText("2");
//                    int_stackedW_page_3 = 1;

//                    qDebug() << "изменилась page_2 скрыта: "
//                             << " изменилась page_3: " << ui->pushB_page_3->text();

//                    ui->pushB_page_general_0->setFixedSize(56, 23); //размер картинки
//                    ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));

//                    ui->pushB_page_korr_0->setFixedSize(56, 23); //размер картинки
//                    ui->pushB_page_korr_0->setIcon(QIcon(":/1.png"));
//                }
//                else
//                {
//                    qDebug() << "изменилась page_3 скрыта: ";
//                    ui->fr_list_2->setVisible(false);
//                    ui->fr_list_3->setVisible(false);



//                    ui->pushB_page_general_0->setFixedSize(56, 23); //размер картинки
//                    ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));

//                    ui->pushB_page_korr_0->setFixedSize(56, 23); //размер картинки
//                    ui->pushB_page_korr_0->setIcon(QIcon(":/1.png"));
//                }
//            }

//        }
//        else
//        {
//            if(index_del == 3)
//            {
//                int_hidden_show_3 = 0;

//                ui->pushB_add_page_1->setEnabled(true);
//                ui->pushB_del_page_1->setEnabled(true);

//                // Показать кнопки добавить страницу
//                ui->pushB_add_page_0->setVisible(true);
//                ui->pushB_add_page_1->setVisible(true);
//                ui->pushB_add_page_2->setVisible(true);

//                //ui->fr_list_2->setVisible(false); // скрыть блок 3 страницы страницу

//                qDebug() << "del_index3: " << index;
//                if((ui->fr_list_2->isVisible() == true && ui->fr_list_3->isVisible() == true))
//                {
//                    ui->pushB_page_3->setText("3");
//                    int_stackedW_page_3 = 2;
//                    ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
//                    ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

//                    qDebug() << "скрыть page_2: "
//                             << " изменилась page_3: " << ui->pushB_page_3->text();

//                    ui->fr_list_2->setVisible(false);
//                    ui->fr_list_3->setVisible(true);

//                    ui->pushB_add_page_3->setVisible(true); // Показать добавить страницу
//                }
//                else
//                {
//                    qDebug() << "ui->fr_list_3->isVisible() == false";
//                    if(ui->fr_list_3->isVisible() == false)
//                    {
//                        qDebug() << "скрыть page_3: ";
//                        ui->fr_list_3->setVisible(false);
//                        ui->fr_list_2->setVisible(false);

//                        ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
//                        ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки
//                    }
//                    else
//                    {
//                        qDebug() << "drewrewrewr43534545";
//                        ui->fr_list_3->setVisible(false);
//                        ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
//                        ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки
//                    }
//                }
//            }
//            else
//            {
//                if(index_del == 4)
//                {
//                    int_hidden_show_4 = 0;

//                    ui->pushB_add_page_1->setEnabled(false);
//                    ui->pushB_add_page_2->setEnabled(true);
//                    ui->pushB_del_page_2->setEnabled(true);

//                    // Показать кнопки добавить страницу
//                    ui->pushB_add_page_0->setVisible(true);
//                    ui->pushB_add_page_1->setVisible(true);
//                    ui->pushB_add_page_2->setVisible(true);

//                    ui->fr_list_3->setVisible(false); // скрыть блок 4 страницы страницу

//                    qDebug() << "del_index4: " << index;

//                    if(ui->fr_list_2->isVisible() == true)
//                    {
//                        ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
//                        ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки
//                    }
//                }
//            }
//        }
//    }

    switch (index_del)
    {
    case 1:
        if(ui->fr_list_0->isVisible() == true)
        {
            ui->fr_list_1->setVisible(false);

            qDebug() << "-- if case 1 del_1"
                     << ui->pushB_page_0->text();

            if(ui->fr_list_2->isVisible() == true)
            {
                ui->fr_list_1->setVisible(false);

                int_stackedW_page_2 = 1;
                ui->pushB_page_2->setText("2");

                int_stackedW_page_3 = 2;
                ui->pushB_page_3->setText("3");

                ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

                qDebug() << "-- if if case 1 del_2"
                         << ui->pushB_page_2->text()
                         << ui->pushB_page_3->text();
            }
        }
        break;

    case 2:
        if(ui->fr_list_1->isVisible() == true)
        {
            ui->fr_list_1->setVisible(false);

            int_stackedW_page_2 = 1;
            ui->pushB_page_2->setText("2");

            int_stackedW_page_3 = 2;
            ui->pushB_page_3->setText("3");


            qDebug() << "-- if case 02_1_del" << ui->pushB_page_1->text();

//            if(ui->fr_list_2->isVisible() == false)
//            {
//                int_stackedW_page_3 = 1;
//                ui->pushB_page_3->setText("2");

//                ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
//                ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки

//                qDebug() << "-- if if case 02_1_1_del" << ui->pushB_page_2->text();

//                if(ui->fr_list_2->isVisible() == false
//                        && ui->fr_list_0->isVisible() == true)
//                {
//                    //ui->pushB_page_general_0->setFixedSize(56, 23); //размер картинки
//                    //ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));

//                    //ui->pushB_page_korr_0->setFixedSize(56, 23); //размер картинки
//                    //ui->pushB_page_korr_0->setIcon(QIcon(":/1.png"));

//                    ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
//                    ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки

//                    qDebug() << "-- if if if case 02_1_1_1_del" << "fr_list_2";
//                }
//            }

            if(ui->pushB_page_2->text() == "2")
            {
                if(ui->pushB_page_2->text() == "3")
                {
                    ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                    ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

                    qDebug() << "-*- del: case 02_3";
                }

                if(ui->fr_list_2->isVisible() == true)
                {
                    ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
                    ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки

                    qDebug() << "-+- del: case 02_1";

                    if(ui->pushB_page_3->text() == "3")
                    {
                        ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                        ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

                        qDebug() << "-+- del: case 02_1/////";
                        // Очищать ui->fr_list_3->isVisible() другой номер
                    }
                }
                else
                {
                    ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                    ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

                    qDebug() << "-+- del: case 02_1----";
                }

            }
            else
            {
                if(ui->pushB_page_2->text() == "3")
                {
                    ui->pushB_page_general_0->setFixedSize(56, 23); //размер картинки
                    ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));

                    ui->pushB_page_korr_0->setFixedSize(56, 23); //размер картинки
                    ui->pushB_page_korr_0->setIcon(QIcon(":/1.png"));

                    qDebug() << "-*- del: case 02_2_0";
                }
                else
                {
                    ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
                    ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки

                    qDebug() << "-+- del: case 02_2_1";
                }

            }
        }
        else
        {
            if(ui->pushB_page_2->text() == "2")
            {
                ui->fr_list_2->setVisible(false);

                ui->pushB_page_general_0->setFixedSize(56, 23); //размер картинки
                ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));

                ui->pushB_page_korr_0->setFixedSize(56, 23); //размер картинки
                ui->pushB_page_korr_0->setIcon(QIcon(":/1.png"));

                qDebug() << "-- else if case 02_2_del" << ui->pushB_page_2->text();
            }

            if(ui->pushB_page_3->text() == "2")
            {
                ui->fr_list_3->setVisible(false);
                ui->pushB_page_3->setText("0");

                ui->pushB_page_general_0->setFixedSize(56, 23); //размер картинки
                ui->pushB_page_general_0->setIcon(QIcon(":/1.png"));

                ui->pushB_page_korr_0->setFixedSize(56, 23); //размер картинки
                ui->pushB_page_korr_0->setIcon(QIcon(":/1.png"));

                qDebug() << "-- else if if case 02_3_del" << ui->pushB_page_3->text();
            }
            else
            {
                int_stackedW_page_3 = 1;
                ui->pushB_page_3->setText("2");

                ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
                ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки

                qDebug() << "-- else if if else case 02_4_del" << ui->pushB_page_3->text();
            }
        }
        break;

    case 3:
        if(ui->fr_list_3->isVisible() == false)
        {
            ui->fr_list_2->setVisible(false);
            ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
            ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки
            qDebug() << "-- Удалил: if case 3_1_0" << "ui->fr_list_2";
        }
        else
        {
            if(ui->pushB_page_3->text() == "3")
            {
                int_stackedW_page_2 = 2;
                ui->pushB_page_2->setText("3"); // 4
                ui->fr_list_3->setVisible(false);

                ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки
                qDebug() << "-- Удалил: else if case 3_2" << "ui->fr_list_3";
            }

            if(ui->pushB_page_2->text() == "3")
            {
                if(ui->pushB_page_3->text() == "4")
                {
                    int_stackedW_page_2 = 1;
                    int_stackedW_page_3 = 2;
                    ui->fr_list_3->setVisible(true);

                    ui->pushB_page_2->setText("2"); // 3
                    ui->pushB_page_3->setText("3"); // 4

                    ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                    ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

                    qDebug() << "-- Удалил: if case 3_1" << "ui->fr_list_2";
                }
                else
                {
                    ui->fr_list_3->setVisible(false);
                    ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                    ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки

                    qDebug() << "-- Удалил: if case 3_1_1" << "ui->fr_list_3";
                }
                if(ui->fr_list_2->isVisible() == false)
                {
                    ui->fr_list_3->setVisible(false);
                    ui->pushB_page_general_0->setFixedSize(118, 23); //размер картинки
                    ui->pushB_page_korr_0->setFixedSize(118, 23); //размер картинки
                    qDebug() << "-- Удалил: else if if case 3_2_1" << "ui->fr_list_3";
                }
                else
                {
                    ui->fr_list_2->setVisible(false);
                    ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
                    ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки
                    qDebug() << "-- Удалил: else if if case 3_2" << "ui->fr_list_2";
                }



            }
        }
        break;

    case 4:
        if(ui->fr_list_2->isVisible() == true)
        {
            ui->fr_list_3->setVisible(false);

            ui->pushB_page_general_0->setFixedSize(181, 23); //размер картинки
            ui->pushB_page_korr_0->setFixedSize(181, 23); //размер картинки
        }
        break;

    default:
        qDebug() << "нет такого индекса!";
        break;
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


void widget_pages_list::slot_pushB_alls(int index)
{
    switch (index) {
    case 01:
        ui->pushB_page_0->setFont(QFont("Arial", 10, QFont::Bold));
        ui->pushB_page_1->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_page_2->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_page_3->setFont(QFont("Arial", 9, QFont::Normal));

        if(ui->fr_list_1->isVisible() == false)
        {
            //ui->pushB_page_1->setText("0");
            ui->pushB_add_page_0->setVisible(true);
            ui->pushB_add_page_1->setVisible(false);
            ui->pushB_add_page_2->setVisible(false);
            ui->pushB_add_page_3->setVisible(false);

            ui->pushB_del_page_0->setVisible(false);
            ui->pushB_del_page_1->setVisible(false);
            ui->pushB_del_page_2->setVisible(false);
            ui->pushB_del_page_3->setVisible(false);

            qDebug() << "if case 01_1" << ui->pushB_page_0->text();


        }
        else
        {
            if(ui->pushB_page_1->text() == "2")
            {
                ui->pushB_add_page_0->setVisible(false);
                ui->pushB_add_page_1->setVisible(false);
                ui->pushB_add_page_2->setVisible(false);
                ui->pushB_add_page_3->setVisible(false);

                ui->pushB_del_page_0->setVisible(true);
                ui->pushB_del_page_1->setVisible(false);
                ui->pushB_del_page_2->setVisible(false);
                ui->pushB_del_page_3->setVisible(false);

                qDebug() << "if if case 01_2" << ui->pushB_page_0->text();

            }

            if(ui->fr_list_3->isVisible() == true)
            {
                ui->pushB_add_page_0->setVisible(false);
                ui->pushB_add_page_1->setVisible(false);
                ui->pushB_add_page_2->setVisible(false);
                ui->pushB_add_page_3->setVisible(false);

                ui->pushB_del_page_0->setVisible(true);
                ui->pushB_del_page_1->setVisible(false);
                ui->pushB_del_page_2->setVisible(false);
                ui->pushB_del_page_3->setVisible(false);

                qDebug() << "if if if case 01_3" << ui->pushB_page_0->text();
            }
        }

        //ui->pushB_page_1->setText("2");
        break;
    case 02:
        ui->pushB_page_0->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_page_1->setFont(QFont("Arial", 10, QFont::Bold));
        ui->pushB_page_2->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_page_3->setFont(QFont("Arial", 9, QFont::Normal));

        if(ui->pushB_page_1->text() == "2")
        {
            ui->pushB_add_page_0->setVisible(false);
            ui->pushB_add_page_1->setVisible(true);
            ui->pushB_add_page_2->setVisible(false);
            ui->pushB_add_page_3->setVisible(false);

            ui->pushB_del_page_0->setVisible(false);
            ui->pushB_del_page_1->setVisible(true);
            ui->pushB_del_page_2->setVisible(false);
            ui->pushB_del_page_3->setVisible(false);

            qDebug() << "if case 02_1" << ui->pushB_page_1->text();

            if(ui->fr_list_3->isVisible() == true)
            {
                ui->pushB_add_page_0->setVisible(false);
                ui->pushB_add_page_1->setVisible(false);
                ui->pushB_add_page_2->setVisible(false);
                ui->pushB_add_page_3->setVisible(false);

                ui->pushB_del_page_0->setVisible(false);
                ui->pushB_del_page_1->setVisible(true);
                ui->pushB_del_page_2->setVisible(false);
                ui->pushB_del_page_3->setVisible(false);

                qDebug() << "if if case 02_1_1" << ui->pushB_page_1->text();
            }
        }
        else
        {
            if(ui->pushB_page_2->text() == "2")
            {
                ui->pushB_add_page_0->setVisible(false);
                ui->pushB_add_page_1->setVisible(false);
                ui->pushB_add_page_2->setVisible(true);
                ui->pushB_add_page_3->setVisible(false);

                ui->pushB_del_page_0->setVisible(false);
                ui->pushB_del_page_1->setVisible(false);
                ui->pushB_del_page_2->setVisible(true);
                ui->pushB_del_page_3->setVisible(false);

                qDebug() << "else if case 02_2" << ui->pushB_page_2->text();
            }

            if(ui->pushB_page_3->text() == "2")
            {
                ui->pushB_add_page_0->setVisible(false);
                ui->pushB_add_page_1->setVisible(false);
                ui->pushB_add_page_2->setVisible(false);
                ui->pushB_add_page_3->setVisible(true);

                ui->pushB_del_page_0->setVisible(false);
                ui->pushB_del_page_1->setVisible(false);
                ui->pushB_del_page_2->setVisible(false);
                ui->pushB_del_page_3->setVisible(true);

                qDebug() << "else if if case 02_3" << ui->pushB_page_3->text();
            }
        }
        break;
    case 03:
        ui->pushB_page_0->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_page_1->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_page_2->setFont(QFont("Arial", 10, QFont::Bold));
        ui->pushB_page_3->setFont(QFont("Arial", 9, QFont::Normal));

        if(ui->pushB_page_2->text() == "2")
        {
            ui->pushB_add_page_0->setVisible(false);
            ui->pushB_add_page_1->setVisible(false);
            ui->pushB_add_page_2->setVisible(true);
            ui->pushB_add_page_3->setVisible(false);

            ui->pushB_del_page_0->setVisible(false);
            ui->pushB_del_page_1->setVisible(false);
            ui->pushB_del_page_2->setVisible(true);
            ui->pushB_del_page_3->setVisible(false);

            qDebug() << "if case 03_1" << ui->pushB_page_2->text();
        }
        else
        {
            if(ui->fr_list_3->isVisible() == false)
            {
                ui->pushB_add_page_0->setVisible(false);
                ui->pushB_add_page_1->setVisible(false);
                ui->pushB_add_page_2->setVisible(true);
                ui->pushB_add_page_3->setVisible(false);

                ui->pushB_del_page_0->setVisible(false);
                ui->pushB_del_page_1->setVisible(false);
                ui->pushB_del_page_2->setVisible(true);
                ui->pushB_del_page_3->setVisible(false);

                qDebug() << "else if case 03_2" << ui->pushB_page_3->text();
            }
            else
            {
                ui->pushB_add_page_0->setVisible(false);
                ui->pushB_add_page_1->setVisible(false);
                ui->pushB_add_page_2->setVisible(false);
                ui->pushB_add_page_3->setVisible(false);

                ui->pushB_del_page_0->setVisible(false);
                ui->pushB_del_page_1->setVisible(false);
                ui->pushB_del_page_2->setVisible(true);
                ui->pushB_del_page_3->setVisible(false);

                qDebug() << "else if else case 03_3" << ui->pushB_page_3->text();
            }
        }
        break;
    case 04:
        ui->pushB_page_0->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_page_1->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_page_2->setFont(QFont("Arial", 9, QFont::Normal));
        ui->pushB_page_3->setFont(QFont("Arial", 10, QFont::Bold));


        if(ui->pushB_page_3->text() == "4")
        {
            ui->pushB_add_page_0->setVisible(false);
            ui->pushB_add_page_1->setVisible(false);
            ui->pushB_add_page_2->setVisible(false);
            ui->pushB_add_page_3->setVisible(false);

            ui->pushB_del_page_0->setVisible(false);
            ui->pushB_del_page_1->setVisible(false);
            ui->pushB_del_page_2->setVisible(false);
            ui->pushB_del_page_3->setVisible(true);

            qDebug() << "if case 04_1" << ui->pushB_page_3->text();
        }
        else
        {
            ui->pushB_add_page_0->setVisible(false);
            ui->pushB_add_page_1->setVisible(false);
            ui->pushB_add_page_2->setVisible(false);
            ui->pushB_add_page_3->setVisible(true);

            ui->pushB_del_page_0->setVisible(false);
            ui->pushB_del_page_1->setVisible(false);
            ui->pushB_del_page_2->setVisible(false);
            ui->pushB_del_page_3->setVisible(true);

            qDebug() << "else case 04_2" << ui->pushB_page_3->text();
        }
        break;
    default:
        qDebug() << "Такого индекса нету!";
        break;
    }
}
