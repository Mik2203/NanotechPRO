#ifndef WIDGET_ROOTADMIN_H
#define WIDGET_ROOTADMIN_H

#include <QWidget>
#include "QCheckBox"
#include "QLineEdit"
#include "QPushButton"
#include "QLabel"
#include "QComboBox"

#include "QDebug"

namespace Ui {
class widget_rootAdmin;
}

class widget_rootAdmin : public QWidget
{
    Q_OBJECT

public:
    explicit widget_rootAdmin(QWidget *parent = 0);
    ~widget_rootAdmin();

    QCheckBox *Class_checkB_1();
    QCheckBox *Class_checkB_2();

    QLabel *Lab_name_0();
    QLabel *Lab_rank_0();
    QLabel *Lab_foto_0();

    QLineEdit *LineE_0();
    QLineEdit *LineE_rank_0();

    QComboBox *CoBox_1();

    QStringList listImage;


signals:
    void signal_checkB_1(int, bool);
    void signal_checkB_2(bool);
    void signal_Push_name(QString, int);
    void signal_Logo_images(QString);

public slots:
    void on_checkB_1_clicked(bool checked);
    void on_checkB_2_clicked(bool checked);
    void on_pushB_ok_0_clicked();
    void on_coBox_1_activated(int index);

private slots:




private:
    Ui::widget_rootAdmin *ui;
};

#endif // WIDGET_ROOTADMIN_H
