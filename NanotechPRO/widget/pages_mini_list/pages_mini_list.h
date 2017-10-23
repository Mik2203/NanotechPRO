#ifndef PAGES_MINI_LIST_H
#define PAGES_MINI_LIST_H

#include <QWidget>
#include "QDebug"
#include "QStringList"

namespace Ui {
class pages_mini_list;
}

class pages_mini_list : public QWidget
{
    Q_OBJECT

public:
    explicit pages_mini_list(QWidget *parent = 0);
    ~pages_mini_list();

    int int_CurrentIndex; // переменная с индексом страницы
    int int_add, int_del; // добавить удалить

public slots:

    // переключение страниц Блок 2
    void slot_pushB_sys_page_1();
    void slot_pushB_sys_page_2();
    void slot_pushB_sys_page_3();
    void slot_pushB_sys_page_4();

    // общий слот для кнопок
    void slot_mini_list_pushB_all(int index);

    // добавить/удалить
    void slot_vis_invis_list(int index);

signals:
    void signal_CurrentIndex(int index);

private:
    Ui::pages_mini_list *ui;
};

#endif // PAGES_MINI_LIST_H
