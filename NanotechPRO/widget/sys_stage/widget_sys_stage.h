#ifndef WIDGET_SYS_STAGE_H
#define WIDGET_SYS_STAGE_H

#include <QWidget>
#include "QDebug"
#include "QFile"
#include "QDateTime"

#include "widget/pages_mini_list/pages_mini_list.h"

namespace Ui {
class widget_sys_stage;
}

class widget_sys_stage : public QWidget
{
    Q_OBJECT

public:
    explicit widget_sys_stage(QWidget *parent = 0);
    ~widget_sys_stage();

    // ========================================================//
    // -- [ КЛАССЫ ]
    // ========================================================//
    pages_mini_list *Widget_pages_mini_list;
    //*********************************************************//

public slots:


    // слот для кнопок
    void slot_pushB_all(int index);

    // общий слот для страниц (добавить/удалить)
    void slot_page_list_all(int index);

    // переключение страниц Блок 1
    void slot_pushB_page_0();
    void slot_pushB_page_1();

    // add
    void slot_pushB_add_page_0();
    //void slot_pushB_add_page_1();

    // del
    void slot_pushB_del_page_0();
    void slot_pushB_del_page_1();

    void slot_pushB_sys_page(int index);



private:
    Ui::widget_sys_stage *ui;
};

#endif // WIDGET_SYS_STAGE_H
