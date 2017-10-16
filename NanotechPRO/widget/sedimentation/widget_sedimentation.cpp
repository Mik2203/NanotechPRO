#include "widget_sedimentation.h"
#include "ui_widget_sedimentation.h"

widget_sedimentation::widget_sedimentation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_sedimentation)
{
    ui->setupUi(this);
}

widget_sedimentation::~widget_sedimentation()
{
    delete ui;
}
