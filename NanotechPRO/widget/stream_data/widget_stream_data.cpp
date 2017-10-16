#include "widget_stream_data.h"
#include "ui_widget_stream_data.h"

widget_stream_data::widget_stream_data(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_stream_data)
{
    ui->setupUi(this);
}

widget_stream_data::~widget_stream_data()
{
    delete ui;
}

QStackedWidget *widget_stream_data::StackedW_data_0()
{
    return ui->stackedW_data_0; qDebug() << "INDEX: "<< ui->stackedW_data_0->currentIndex();
}
