#ifndef NANOTECHPRO_H
#define NANOTECHPRO_H

#include <QtGui>
#include <QMainWindow>
#include <QApplication>
#include "Version/version.h"
#include "QDebug"
#include "QFileInfo"
#include "QTimer"
#include "QTime"

#include "QStateMachine"
#include "QPropertyAnimation"
#include "QState"
#include "QSignalTransition"



namespace Ui {
class NanotechPRO;
}

//===== Размер файла =====//
QString fileSize(qint64);

class NanotechPRO : public QMainWindow
{
    Q_OBJECT

public:
    explicit NanotechPRO(QWidget *parent = 0);
    ~NanotechPRO();

    QTimer *TimerLoading;
    QTimer *TimerPause;

    QString path_dir_1, path_dir_2, path_size_file_1, path_size_file_2;

    // ========================================================//
    // -- [Анимации (Машины...)]
    // ========================================================//
    QStateMachine *machine_01;
    QState *s_01;
    QState *s_02;
    QPropertyAnimation *animation_01;
    QSignalTransition *transition_01;
    QSignalTransition *transition_02;
    // ********************************************************//

    // ints создания страниц
    int int_add_page_0, int_add_page_1, int_add_page_2, int_add_page_3;
    // ints удаления страниц
    int int_del_page_0, int_del_page_1, int_del_page_2, int_del_page_3;

public slots:
    // Слот версии программы
    void slotVerSize();

    // Создание нового окна проекта
    void slotTimerLoading();

    // Меню TO DO
    void slot_ac_menu_1();
    void slot_ac_menu_2();
    void slot_ac_menu_3();

    // слоты создания страниц
    void slot_pushB_add_page_0();
    void slot_pushB_add_page_1();
    void slot_pushB_add_page_2();
    void slot_pushB_add_page_3();

    // слоты удаления страниц
    void slot_pushB_del_page_0();
    void slot_pushB_del_page_1();
    void slot_pushB_del_page_2();
    void slot_pushB_del_page_3();

    // слоты переключение по страницам
    void slot_pushB_page_0();
    void slot_pushB_page_1();
    void slot_pushB_page_2();
    void slot_pushB_page_3();

    // функция добавления страниц
    void slot_function_add_page(int index);

    // функция добавления страниц
    void slot_function_del_page(int index);

private slots:
    void on_pushB_new_pro_0_clicked();

    void on_panel_menu_0_clicked();
    void on_panel_menu_1_clicked();

    void on_pushB_page_4_clicked();

private:
    Ui::NanotechPRO *ui;
};

#endif // NANOTECHPRO_H
