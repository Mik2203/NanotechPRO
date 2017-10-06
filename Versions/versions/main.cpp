#include <QtCore/QCoreApplication>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("System"));

    int i, num[4];

    QString fileName;
    if(argc >1)
        fileName = argv[1];
    else
        fileName = "../../NanotechPRO/Version/version.h";

    QFile version(fileName);
    version.open(QFile::ReadWrite);
    QString allText, str, str1, str2, str3, str4;
    QTextStream stream(&version);
    allText = stream.readAll();
    //qDebug() << allText;
    i = allText.indexOf("#define VER_FILEVERSION ");
    str = allText.mid(i - 1,  allText.indexOf("\n",i) - i);//.left(allText.length() - allText.indexOf("\n",i));
    //qDebug() <<"i="<<  i;
    //qDebug() << allText.indexOf("\n",i);
    //qDebug() << str;
    str1 = str.mid(str.lastIndexOf(" ") + 1);

    //qDebug() << str1;
    num[0] = str1.section(",",0,0).toInt();
    num[1] = str1.section(",",1,1).toInt();
    num[2] = str1.section(",",2,2).toInt();
    num[3] = str1.section(",",3,3).toInt();
    str3 = QString("%1.%2.%3.%4").arg(num[0]).arg(num[1]).arg(num[2]).arg(num[3]);
    for(i = 3; i >= 0; --i)
    {
        num[i]++;
        if((num[i] < 10) || (i == 0))
            break;
        else
            num[i] = 0;
    }
    str4 = QString("%1.%2.%3.%4").arg(num[0]).arg(num[1]).arg(num[2]).arg(num[3]);
    str2 = QString("%1,%2,%3,%4").arg(num[0]).arg(num[1]).arg(num[2]).arg(num[3]);
    qDebug() << str2;
    allText = allText.replace(str1, str2);
    allText = allText.replace(str3, str4);
    qDebug() << allText;

    version.close();
    version.open(QFile::WriteOnly | QFile::Truncate);
    stream.reset();
    stream << allText;
    version.close();
    //return 0;
    a.exit(0);
    //return a.exec();
}
