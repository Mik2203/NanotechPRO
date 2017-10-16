#ifndef WIDGET_SEDIMENTATION_H
#define WIDGET_SEDIMENTATION_H

#include <QWidget>

namespace Ui {
class widget_sedimentation;
}

class widget_sedimentation : public QWidget
{
    Q_OBJECT

public:
    explicit widget_sedimentation(QWidget *parent = 0);
    ~widget_sedimentation();

private:
    Ui::widget_sedimentation *ui;
};

#endif // WIDGET_SEDIMENTATION_H
