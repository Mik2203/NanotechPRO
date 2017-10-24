#include "widget_rootadmin.h"
#include "ui_widget_rootadmin.h"

widget_rootAdmin::widget_rootAdmin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_rootAdmin)
{
    ui->setupUi(this);



}

widget_rootAdmin::~widget_rootAdmin()
{
    delete ui;
}

QCheckBox *widget_rootAdmin::Class_checkB_1()
{
    return ui->checkB_1;
}

void widget_rootAdmin::on_checkB_1_clicked(bool checked)
{
    int rank;
    switch (checked)
    {
    case 0:
        rank = 755;
        emit signal_checkB_1(rank, checked);
        //qDebug() << "rank: " << rank;
        break;
    case 1:
        rank = 777;
        emit signal_checkB_1(rank, checked);
        //qDebug() << "rank: " << rank;
        break;
    default:
        qDebug() << "[widget_rootAdmin] нет такого индекса!";
        break;
    }
}
