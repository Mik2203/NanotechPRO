#ifndef NANOTECHPRO_H
#define NANOTECHPRO_H

#include <QtGui>
#include <QMainWindow>
#include <QApplication>
//#include "Version/version.h"
#include "QDebug"
#include "QFileInfo"
#include "QTimer"
#include "QTime"
#include "QIcon"
#include "QDate"
#include "QAction"
#include "QBoxLayout"

#include "QStateMachine"
#include "QPropertyAnimation"
#include "QState"
#include "QSignalTransition"

#include "QSettings"
#include "QStringList"

#include "QFontDatabase"
#include "QFont"
#include "QPainter"
#include "QRegExp"

#include "widget/pages_list/widget_pages_list.h"
#include "widget/stream_data/widget_stream_data.h"
#include "widget/sedimentation/widget_sedimentation.h"
#include "widget/sys_stage/widget_sys_stage.h"
#include "widget/rootAdmin/widget_rootadmin.h"

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

    QSettings *sett_nano;

    // Глобальные пути
    QString spthApp, pathPro, proSize;

    QString str_rank, str_name, str_img; // QSettings (Админка)

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
    //*********************************************************//

    // По версии программы
    QString allText, st_date, st_size, st_ver, st_verDate, str2;

    // ========================================================//
    // -- [ КЛАССЫ ]
    // ========================================================//
    widget_pages_list *Widget_pages_list;
    widget_stream_data *Widget_stream_data;
    widget_sedimentation *Widget_sedimentation;
    widget_sys_stage *Widget_sys_stage;
    widget_rootAdmin *Widget_rootAdmin;
    //*********************************************************//

    QAction *actionRoot; // Админка

public slots:

    // Шрифты проекта
    void loadFontFamilyFromTTF();

    // Слот версии программы
    void slotVerSize();
    void slotVerReset();

    // Создание нового окна проекта
    void slotTimerLoading();

    // Меню TO DO
    void slot_ac_menu_new();
    void slot_ac_menu_1();
    void slot_ac_menu_2();
    void slot_ac_menu_exit();

    // слоты-сыгналы переключение по страницам
    void slotSignal_pushB_page_0(int int_page);
//    void slotSignal_pushB_page_1();
//    void slotSignal_pushB_page_2();
//    void slotSignal_pushB_page_3();

    // осадкообразование
    void slot_pushB_changes_0();
    void slot_pushB_softener_0();
    void slot_pushB_correction_0();

    // кнопки закладок страниц
    void slot_PushB_page_wother();
    void slot_PushB_page_system();
    void slot_PushB_page_worning();
    void slot_PushB_page_result();

    void slot_pushB_all(int pb);

    // Админка
    void slot_rankRoot(); // вызов окна
    void slot_rankRoot2(int check, bool check2); // передать права доступа
    void slot_rankPriority(bool check); // режим редактирования
    void slot_Push_name(QString str, int rank); // Имя пользователя
    void slot_Logo_images(QString str); // Фото пользователя

private slots:
    void on_pushB_new_pro_0_clicked();
    void on_panel_menu_0_clicked();
    void on_panel_menu_1_clicked();
    void on_lineE_new_pro_0_textEdited(const QString &arg1);

private:
    Ui::NanotechPRO *ui;


};

#endif // NANOTECHPRO_H
