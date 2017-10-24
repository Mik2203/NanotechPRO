#ifndef WIDGET_ROOTADMIN_H
#define WIDGET_ROOTADMIN_H

#include <QWidget>
#include "QCheckBox"
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

signals:
    void signal_checkB_1(int, bool);

private slots:
    void on_checkB_1_clicked(bool checked);

private:
    Ui::widget_rootAdmin *ui;
};

#endif // WIDGET_ROOTADMIN_H
