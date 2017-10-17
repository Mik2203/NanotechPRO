#ifndef WIDGET_PAGES_LIST_H
#define WIDGET_PAGES_LIST_H

#include <QWidget>

#include "QDebug"
#include "QFileInfo"
#include "QTimer"
#include "QTime"
#include "QIcon"

#include "QStateMachine"
#include "QPropertyAnimation"
#include "QState"
#include "QSignalTransition"

#include "QStackedWidget"
#include "QPushButton"

#include "widget/stream_data/widget_stream_data.h"

namespace Ui {
class widget_pages_list;
}

class widget_pages_list : public QWidget
{
    Q_OBJECT

public:
    explicit widget_pages_list(QWidget *parent = 0);
    ~widget_pages_list();

    QStackedWidget *stackedW_pades_list();
    QPushButton *pushB_1();

    // ints создания страниц
    int int_add_page_0, int_add_page_1, int_add_page_2, int_add_page_3;
    // ints удаления страниц
    int int_del_page_0, int_del_page_1, int_del_page_2, int_del_page_3;
    // index stackedW_page_0
    int int_stackedW_page_0, int_stackedW_page_1, int_stackedW_page_2, int_stackedW_page_3;
    // int_hidden_show страницы
    int int_hidden_show_1, int_hidden_show_2, int_hidden_show_3, int_hidden_show_4;

public slots:

    // слоты создания страниц
    void slot_pushB_add_page_0(bool page_0);
    void slot_pushB_add_page_1(bool page_1);
    void slot_pushB_add_page_2(bool page_2);
    void slot_pushB_add_page_3(bool page_3);

    // слоты удаления страниц
    void slot_pushB_del_page_0(bool page_0);
    void slot_pushB_del_page_1(bool page_1);
    void slot_pushB_del_page_2(bool page_2);
    void slot_pushB_del_page_3(bool page_3);

    // слоты переключение по страницам
    void slot_pushB_page_0(bool pb1);
    void slot_pushB_page_1(bool pb2);
    void slot_pushB_page_2(bool pb3);
    void slot_pushB_page_3(bool pb4);

    void slot_pushB_alls(int index);

    // Кнопка общий расчет
    void slot_pushB_page_general_0();

    // Кнопка общая коррекция
    void slot_pushB_page_korr_0();

    // слоты переключение по страницам
    void on_add_page_0_clicked();

    // функция добавления страниц
    void slot_function_add_page(int index);

    // функция добавления страниц
    void slot_function_del_page(int index_del);

    void on_pushB_page_general_0_toggled(bool general);
    void on_pushB_page_korr_0_toggled(bool korr);

signals:
    void signal_pushB_page_0(int page_0);
    void signal_pushB_page_1(int page_1);
    void signal_pushB_page_2(int page_2);
    void signal_pushB_page_3(int page_3);

private:
    Ui::widget_pages_list *ui;
};

#endif // WIDGET_PAGES_LIST_H
