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
#include "QIcon"

#include "QStateMachine"
#include "QPropertyAnimation"
#include "QState"
#include "QSignalTransition"

#include "widget/pages_list/widget_pages_list.h"

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
    widget_pages_list *Widget_pages_list;


public slots:
    // Слот версии программы
    void slotVerSize();

    // Создание нового окна проекта
    void slotTimerLoading();

    // Меню TO DO
    void slot_ac_menu_1();
    void slot_ac_menu_2();
    void slot_ac_menu_3();



private slots:
    void on_pushB_new_pro_0_clicked();

    void on_panel_menu_0_clicked();
    void on_panel_menu_1_clicked();






private:
    Ui::NanotechPRO *ui;


};

#endif // NANOTECHPRO_H
