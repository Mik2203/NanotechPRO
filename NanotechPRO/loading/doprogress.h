#ifndef DOPROGRESS_H
#define DOPROGRESS_H

#include <QObject>
#include <QProgressBar>

class doprogress : public QObject
{
    Q_OBJECT



public:
    explicit doprogress(QObject *parent = 0);

    QProgressBar* progressBar;

public slots:
    //void goProgress();

signals:

public slots:

    private:

};

#endif // DOPROGRESS_H
