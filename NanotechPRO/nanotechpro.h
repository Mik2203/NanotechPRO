#ifndef NANOTECHPRO_H
#define NANOTECHPRO_H

#include <QtGui>
#include <QMainWindow>
#include <QApplication>
#include "Version/version.h"
#include "QDebug"
#include "QFileInfo"

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

    QString path_dir_1, path_dir_2, path_size_file_1, path_size_file_2;

public slots:
    void slotVerSize(); // Слот версии программы

private slots:
    void on_pushB_new_pro_0_clicked();

private:
    Ui::NanotechPRO *ui;
};

#endif // NANOTECHPRO_H
