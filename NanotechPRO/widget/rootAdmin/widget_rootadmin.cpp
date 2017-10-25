#include "widget_rootadmin.h"
#include "ui_widget_rootadmin.h"

widget_rootAdmin::widget_rootAdmin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_rootAdmin)
{
    ui->setupUi(this);
    ui->lineE_0->setPlaceholderText("Введите имя пользователя");
    ui->lineE_rank_0->setPlaceholderText("755");

    //image: url(:/admin/adm/"+<ИМЯ>+");
    listImage << "adm_0.png" << "adm_1.png" << "adm_2.png";

    for(int i = 0; i < listImage.count(); ++i)
    {
        ui->coBox_1->addItem(listImage.at(i));
    }
}

widget_rootAdmin::~widget_rootAdmin()
{
    delete ui;
}

QCheckBox *widget_rootAdmin::Class_checkB_1()
{
    return ui->checkB_1;
}

QCheckBox *widget_rootAdmin::Class_checkB_2()
{
    return ui->checkB_2;
}

QLabel *widget_rootAdmin::Lab_name_0()
{
    return ui->lab_name_0;
}

QLabel *widget_rootAdmin::Lab_rank_0()
{
    return ui->lab_rank_0;
}

QLabel *widget_rootAdmin::Lab_foto_0()
{
    return ui->lab_foto_0;
}

QLineEdit *widget_rootAdmin::LineE_0()
{
    return ui->lineE_0;
}

QLineEdit *widget_rootAdmin::LineE_rank_0()
{
    return ui->lineE_rank_0;
}

QComboBox *widget_rootAdmin::CoBox_1()
{
    return ui->coBox_1;
}



void widget_rootAdmin::on_checkB_1_clicked(bool checked)
{
    int rank;
    switch (checked)
    {
    case false:
        rank = 755;
        emit signal_checkB_1(rank, checked);
        //ui->lab_rank_0->setText("Права доступа: ["+QString::number(rank)+"]");
        break;
    case true:
        rank = 777;
        emit signal_checkB_1(rank, checked);
        //ui->lab_rank_0->setText("Права доступа: ["+QString::number(rank)+"]");
        break;
    default:
        qDebug() << "[on_checkB_1_clicked] нет такого индекса!";
        break;
    }
}

void widget_rootAdmin::on_checkB_2_clicked(bool checked)
{
    switch (checked)
    {
    case 0:
        emit signal_checkB_2(checked);
        ui->stackedW_list_0->setCurrentIndex(1);
        break;
    case 1:
        emit signal_checkB_2(checked);
        ui->stackedW_list_0->setCurrentIndex(0);

        ui->checkB_1->setChecked(false);
        on_checkB_1_clicked(false);
        break;
    default:
        qDebug() << "[on_checkB_2_clicked] нет такого индекса!";
        break;
    }
}

void widget_rootAdmin::on_pushB_ok_0_clicked()
{
    int rank;
    if(!ui->lineE_0->text().isNull())
    {
        if(!ui->lineE_rank_0->text().isNull())
        {
            rank = ui->lineE_rank_0->text().toInt();
            QString priority = ui->lineE_0->text();
            emit signal_Push_name(priority, rank);
            ui->stackedW_list_0->setCurrentIndex(1);
            ui->checkB_2->setChecked(false);
            on_checkB_2_clicked(false);



            if(ui->lineE_rank_0->text() == "777")
            {
                ui->checkB_1->setChecked(true);
                on_checkB_1_clicked(true);
                ui->checkB_1->setEnabled(true);
            }
            else
            {
                ui->checkB_1->setChecked(false);
                on_checkB_1_clicked(false);
                ui->checkB_1->setEnabled(false);
            }

        }
        else
        {
            ui->lineE_rank_0->setText("Ошибка!");
            ui->stackedW_list_0->setCurrentIndex(0);
        }

    }
    else
    {
        qDebug() << "Имя не заданно!";
        ui->stackedW_list_0->setCurrentIndex(0);
        ui->checkB_2->setChecked(true);
        on_checkB_2_clicked(true);
    }

}

void widget_rootAdmin::on_coBox_1_activated(int index)
{
    for(int i = 0; i < listImage.count(); ++i)
    {
        if(index == i)
        {
            ui->lab_foto_0->setStyleSheet("image: url(:/admin/adm/"+listImage.at(i)+");");
            emit signal_Logo_images(listImage.at(i));
        }
//        else
//        {
//            qDebug() << "Нет фото!";
//            ui->lab_foto_0->setStyleSheet("image: url(:/admin/adm/not_photo_1.png);");
//        }
    }
}
