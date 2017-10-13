#ifndef STYLELOADER_H
#define STYLELOADER_H

#include <QObject>
#include <QKeySequence>
#include <QApplication>
#include <QFile>
#include <QKeyEvent>
#include <QDebug>

class StyleLoader : public QObject
{
    Q_OBJECT
public:
    static void attach(const QString& filename = defaultStyleFile(),
                       QKeySequence key = QKeySequence("F5"));

    bool eventFilter(QObject *obj, QEvent *event);

signals:

public slots:

private:
    StyleLoader(QObject * parent, const QString& filename, const QKeySequence& key);
    void setAppStyleSheet();
    static QString defaultStyleFile();
    QString m_filename;
    QKeySequence m_key;

};

#endif // STYLELOADER_H
