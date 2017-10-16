#ifndef WIDGET_STREAM_DATA_H
#define WIDGET_STREAM_DATA_H

#include <QWidget>
#include "QStackedWidget"
#include "QDebug"

namespace Ui {
class widget_stream_data;
}

class widget_stream_data : public QWidget
{
    Q_OBJECT

public:
    explicit widget_stream_data(QWidget *parent = 0);
    ~widget_stream_data();

    QStackedWidget *StackedW_data_0();

private:
    Ui::widget_stream_data *ui;
};

#endif // WIDGET_STREAM_DATA_H
