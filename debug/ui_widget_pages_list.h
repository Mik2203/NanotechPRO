/********************************************************************************
** Form generated from reading UI file 'widget_pages_list.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_PAGES_LIST_H
#define UI_WIDGET_PAGES_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget_pages_list
{
public:
    QGridLayout *gridLayout;
    QFrame *fr_add_list_0;
    QGridLayout *gridLayout_17;
    QFrame *fr_pages_0;
    QGridLayout *gridLayout_15;
    QFrame *fr_add_pages_0;
    QLabel *la_add_pages_0;
    QPushButton *add_page_0;
    QSpacerItem *horizontalSpacer_8;
    QFrame *fr_list_0;
    QPushButton *pushB_page_0;
    QLineEdit *lineE_page_0;
    QPushButton *pushB_add_page_0;
    QPushButton *pushB_del_page_0;
    QFrame *fr_list_2;
    QPushButton *pushB_page_2;
    QLineEdit *lineE_page_2;
    QPushButton *pushB_add_page_2;
    QPushButton *pushB_del_page_2;
    QFrame *fr_list_3;
    QPushButton *pushB_page_3;
    QLineEdit *lineE_page_3;
    QPushButton *pushB_add_page_3;
    QPushButton *pushB_del_page_3;
    QFrame *fr_list_1;
    QPushButton *pushB_page_1;
    QLineEdit *lineE_page_1;
    QPushButton *pushB_add_page_1;
    QPushButton *pushB_del_page_1;
    QFrame *fr_genirals_0;
    QGridLayout *gridLayout_16;
    QPushButton *pushB_page_general_0;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_16;
    QPushButton *pushB_page_korr_0;
    QFrame *line_6;

    void setupUi(QWidget *widget_pages_list)
    {
        if (widget_pages_list->objectName().isEmpty())
            widget_pages_list->setObjectName(QStringLiteral("widget_pages_list"));
        widget_pages_list->resize(301, 108);
        gridLayout = new QGridLayout(widget_pages_list);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        fr_add_list_0 = new QFrame(widget_pages_list);
        fr_add_list_0->setObjectName(QStringLiteral("fr_add_list_0"));
        fr_add_list_0->setMinimumSize(QSize(301, 108));
        fr_add_list_0->setFrameShape(QFrame::Box);
        fr_add_list_0->setFrameShadow(QFrame::Raised);
        gridLayout_17 = new QGridLayout(fr_add_list_0);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setHorizontalSpacing(2);
        gridLayout_17->setVerticalSpacing(0);
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        fr_pages_0 = new QFrame(fr_add_list_0);
        fr_pages_0->setObjectName(QStringLiteral("fr_pages_0"));
        fr_pages_0->setFrameShape(QFrame::NoFrame);
        fr_pages_0->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(fr_pages_0);
        gridLayout_15->setSpacing(2);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(1, 1, 1, 1);
        fr_add_pages_0 = new QFrame(fr_pages_0);
        fr_add_pages_0->setObjectName(QStringLiteral("fr_add_pages_0"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fr_add_pages_0->sizePolicy().hasHeightForWidth());
        fr_add_pages_0->setSizePolicy(sizePolicy);
        fr_add_pages_0->setMinimumSize(QSize(45, 52));
        fr_add_pages_0->setMaximumSize(QSize(45, 16777215));
        fr_add_pages_0->setFrameShape(QFrame::NoFrame);
        fr_add_pages_0->setFrameShadow(QFrame::Raised);
        la_add_pages_0 = new QLabel(fr_add_pages_0);
        la_add_pages_0->setObjectName(QStringLiteral("la_add_pages_0"));
        la_add_pages_0->setGeometry(QRect(2, 2, 40, 23));
        la_add_pages_0->setMinimumSize(QSize(40, 23));
        la_add_pages_0->setMaximumSize(QSize(40, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        la_add_pages_0->setFont(font);
        la_add_pages_0->setAlignment(Qt::AlignCenter);
        add_page_0 = new QPushButton(fr_add_pages_0);
        add_page_0->setObjectName(QStringLiteral("add_page_0"));
        add_page_0->setGeometry(QRect(10, 24, 23, 23));
        add_page_0->setMinimumSize(QSize(23, 23));
        add_page_0->setMaximumSize(QSize(23, 23));
        add_page_0->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, #dadbde, stop: 1 #f6f7fa);\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #dae2ec, stop: 0.4 #d6dde7,\n"
" 	stop: 0.5 #bfd7fb, stop: 1.0 #dae3ef);\n"
"\n"
" 	border: 1px solid #cdc2bf;\n"
" 	border-radius: 11px;\n"
"		\n"
"	image: url(:/menu/page/add_list_0.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, \n"
"	stop:0 rgba(255, 241, 241, 200), \n"
"	stop:0.181818 rgba(255, 255, 255, 135),\n"
"	stop:	0.329545 rgba(200, 173, 173, 135), \n"
"	stop:0.681818 rgba(207, 181, 181, 129), \n"
"	stop:0.829545 rgba(255, 255, 255, 129), \n"
"	stop:1 rgba(255, 239, 239, 192));\n"
"\n"
"	image: url(:/menu/page/add_list_1.png);\n"
" }\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #f39556, stop: 0.4 #f7be98,\n"
"	stop: 0.5 #f0ccb4, stop: 1.0 #eda16e);\n"
"\n"
"	image: url(:/menu/page/del"
                        "_page_0.png);\n"
"}\n"
" \n"
"QPushButton:pressed \n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #afc1db, stop: 0.4 #a1b3cf,\n"
"	stop: 0.5 #639bee, stop: 1.0 #b3caec);\n"
"\n"
"	image: url(:/menu/page/add_list_1.png);\n"
"}\n"
""));

        gridLayout_15->addWidget(fr_add_pages_0, 0, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(7, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_8, 0, 6, 2, 1);

        fr_list_0 = new QFrame(fr_pages_0);
        fr_list_0->setObjectName(QStringLiteral("fr_list_0"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fr_list_0->sizePolicy().hasHeightForWidth());
        fr_list_0->setSizePolicy(sizePolicy1);
        fr_list_0->setMinimumSize(QSize(60, 52));
        fr_list_0->setMaximumSize(QSize(60, 16777215));
        fr_list_0->setFrameShape(QFrame::NoFrame);
        fr_list_0->setFrameShadow(QFrame::Raised);
        pushB_page_0 = new QPushButton(fr_list_0);
        pushB_page_0->setObjectName(QStringLiteral("pushB_page_0"));
        pushB_page_0->setGeometry(QRect(2, 26, 55, 23));
        pushB_page_0->setMinimumSize(QSize(55, 23));
        pushB_page_0->setMaximumSize(QSize(55, 23));
        lineE_page_0 = new QLineEdit(fr_list_0);
        lineE_page_0->setObjectName(QStringLiteral("lineE_page_0"));
        lineE_page_0->setGeometry(QRect(2, 3, 55, 21));
        sizePolicy1.setHeightForWidth(lineE_page_0->sizePolicy().hasHeightForWidth());
        lineE_page_0->setSizePolicy(sizePolicy1);
        lineE_page_0->setMinimumSize(QSize(55, 21));
        lineE_page_0->setMaximumSize(QSize(55, 21));
        lineE_page_0->setAlignment(Qt::AlignCenter);
        pushB_add_page_0 = new QPushButton(fr_list_0);
        pushB_add_page_0->setObjectName(QStringLiteral("pushB_add_page_0"));
        pushB_add_page_0->setGeometry(QRect(4, 29, 16, 16));
        pushB_add_page_0->setMinimumSize(QSize(16, 16));
        pushB_add_page_0->setMaximumSize(QSize(16, 16));
        pushB_add_page_0->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, #dadbde, stop: 1 #f6f7fa);\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #dae2ec, stop: 0.4 #d6dde7,\n"
" 	stop: 0.5 #bfd7fb, stop: 1.0 #dae3ef);\n"
"\n"
" 	border: 1px solid #cdc2bf;\n"
" 	border-radius: 8px;\n"
"		\n"
"	image: url(:/menu/page/add_list_0.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, \n"
"	stop:0 rgba(255, 241, 241, 200), \n"
"	stop:0.181818 rgba(255, 255, 255, 135),\n"
"	stop:	0.329545 rgba(200, 173, 173, 135), \n"
"	stop:0.681818 rgba(207, 181, 181, 129), \n"
"	stop:0.829545 rgba(255, 255, 255, 129), \n"
"	stop:1 rgba(255, 239, 239, 192));\n"
"\n"
"	image: url(:/menu/page/add_list_1.png);\n"
" }\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #f39556, stop: 0.4 #f7be98,\n"
"	stop: 0.5 #f0ccb4, stop: 1.0 #eda16e);\n"
"\n"
"	image: url(:/menu/page/del_"
                        "page_0.png);\n"
"}\n"
" \n"
"QPushButton:pressed \n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #afc1db, stop: 0.4 #a1b3cf,\n"
"	stop: 0.5 #639bee, stop: 1.0 #b3caec);\n"
"\n"
"	image: url(:/menu/page/add_list_1.png);\n"
"}\n"
""));
        pushB_del_page_0 = new QPushButton(fr_list_0);
        pushB_del_page_0->setObjectName(QStringLiteral("pushB_del_page_0"));
        pushB_del_page_0->setGeometry(QRect(39, 29, 16, 16));
        pushB_del_page_0->setMinimumSize(QSize(16, 16));
        pushB_del_page_0->setMaximumSize(QSize(16, 16));
        pushB_del_page_0->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, #dadbde, stop: 1 #f6f7fa);\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #dae2ec, stop: 0.4 #d6dde7,\n"
" 	stop: 0.5 #bfd7fb, stop: 1.0 #dae3ef);\n"
"\n"
" 	border: 1px solid #cdc2bf;\n"
" 	border-radius: 8px;\n"
"	\n"
"	image: url(:/menu/page/del_page_0.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, \n"
"	stop:0 rgba(255, 241, 241, 200), \n"
"	stop:0.181818 rgba(255, 255, 255, 135),\n"
"	stop:	0.329545 rgba(200, 173, 173, 135), \n"
"	stop:0.681818 rgba(207, 181, 181, 129), \n"
"	stop:0.829545 rgba(255, 255, 255, 129), \n"
"	stop:1 rgba(255, 239, 239, 192));\n"
"\n"
"	image: url(:/menu/page/del_page_1.png);\n"
" }\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #f39556, stop: 0.4 #f7be98,\n"
"	stop: 0.5 #f0ccb4, stop: 1.0 #eda16e);\n"
"\n"
"	image: url(:/menu/page/del_p"
                        "age_0.png);\n"
"}\n"
" \n"
"QPushButton:pressed \n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #afc1db, stop: 0.4 #a1b3cf,\n"
"	stop: 0.5 #639bee, stop: 1.0 #b3caec);\n"
"\n"
"	image: url(:/menu/page/del_page_1.png);\n"
"}\n"
""));

        gridLayout_15->addWidget(fr_list_0, 0, 0, 2, 1);

        fr_list_2 = new QFrame(fr_pages_0);
        fr_list_2->setObjectName(QStringLiteral("fr_list_2"));
        sizePolicy1.setHeightForWidth(fr_list_2->sizePolicy().hasHeightForWidth());
        fr_list_2->setSizePolicy(sizePolicy1);
        fr_list_2->setMinimumSize(QSize(60, 52));
        fr_list_2->setMaximumSize(QSize(60, 16777215));
        fr_list_2->setFrameShape(QFrame::NoFrame);
        fr_list_2->setFrameShadow(QFrame::Raised);
        pushB_page_2 = new QPushButton(fr_list_2);
        pushB_page_2->setObjectName(QStringLiteral("pushB_page_2"));
        pushB_page_2->setGeometry(QRect(2, 26, 55, 23));
        pushB_page_2->setMinimumSize(QSize(55, 23));
        pushB_page_2->setMaximumSize(QSize(55, 23));
        lineE_page_2 = new QLineEdit(fr_list_2);
        lineE_page_2->setObjectName(QStringLiteral("lineE_page_2"));
        lineE_page_2->setGeometry(QRect(2, 3, 55, 21));
        sizePolicy1.setHeightForWidth(lineE_page_2->sizePolicy().hasHeightForWidth());
        lineE_page_2->setSizePolicy(sizePolicy1);
        lineE_page_2->setMinimumSize(QSize(55, 21));
        lineE_page_2->setMaximumSize(QSize(55, 21));
        lineE_page_2->setAlignment(Qt::AlignCenter);
        pushB_add_page_2 = new QPushButton(fr_list_2);
        pushB_add_page_2->setObjectName(QStringLiteral("pushB_add_page_2"));
        pushB_add_page_2->setGeometry(QRect(4, 29, 16, 16));
        pushB_add_page_2->setMinimumSize(QSize(16, 16));
        pushB_add_page_2->setMaximumSize(QSize(16, 16));
        pushB_add_page_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, #dadbde, stop: 1 #f6f7fa);\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #dae2ec, stop: 0.4 #d6dde7,\n"
" 	stop: 0.5 #bfd7fb, stop: 1.0 #dae3ef);\n"
"\n"
" 	border: 1px solid #cdc2bf;\n"
" 	border-radius: 8px;\n"
"		\n"
"	image: url(:/menu/page/add_list_0.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, \n"
"	stop:0 rgba(255, 241, 241, 200), \n"
"	stop:0.181818 rgba(255, 255, 255, 135),\n"
"	stop:	0.329545 rgba(200, 173, 173, 135), \n"
"	stop:0.681818 rgba(207, 181, 181, 129), \n"
"	stop:0.829545 rgba(255, 255, 255, 129), \n"
"	stop:1 rgba(255, 239, 239, 192));\n"
"\n"
"	image: url(:/menu/page/add_list_1.png);\n"
" }\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #f39556, stop: 0.4 #f7be98,\n"
"	stop: 0.5 #f0ccb4, stop: 1.0 #eda16e);\n"
"\n"
"	image: url(:/menu/page/del_"
                        "page_0.png);\n"
"}\n"
" \n"
"QPushButton:pressed \n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #afc1db, stop: 0.4 #a1b3cf,\n"
"	stop: 0.5 #639bee, stop: 1.0 #b3caec);\n"
"\n"
"	image: url(:/menu/page/add_list_1.png);\n"
"}\n"
""));
        pushB_del_page_2 = new QPushButton(fr_list_2);
        pushB_del_page_2->setObjectName(QStringLiteral("pushB_del_page_2"));
        pushB_del_page_2->setGeometry(QRect(39, 29, 16, 16));
        pushB_del_page_2->setMinimumSize(QSize(16, 16));
        pushB_del_page_2->setMaximumSize(QSize(16, 16));
        pushB_del_page_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, #dadbde, stop: 1 #f6f7fa);\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #dae2ec, stop: 0.4 #d6dde7,\n"
" 	stop: 0.5 #bfd7fb, stop: 1.0 #dae3ef);\n"
"\n"
" 	border: 1px solid #cdc2bf;\n"
" 	border-radius: 8px;\n"
"	\n"
"	image: url(:/menu/page/del_page_0.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, \n"
"	stop:0 rgba(255, 241, 241, 200), \n"
"	stop:0.181818 rgba(255, 255, 255, 135),\n"
"	stop:	0.329545 rgba(200, 173, 173, 135), \n"
"	stop:0.681818 rgba(207, 181, 181, 129), \n"
"	stop:0.829545 rgba(255, 255, 255, 129), \n"
"	stop:1 rgba(255, 239, 239, 192));\n"
"\n"
"	image: url(:/menu/page/del_page_1.png);\n"
" }\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #f39556, stop: 0.4 #f7be98,\n"
"	stop: 0.5 #f0ccb4, stop: 1.0 #eda16e);\n"
"\n"
"	image: url(:/menu/page/del_p"
                        "age_0.png);\n"
"}\n"
" \n"
"QPushButton:pressed \n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #afc1db, stop: 0.4 #a1b3cf,\n"
"	stop: 0.5 #639bee, stop: 1.0 #b3caec);\n"
"\n"
"	image: url(:/menu/page/del_page_1.png);\n"
"}\n"
""));

        gridLayout_15->addWidget(fr_list_2, 0, 2, 2, 1);

        fr_list_3 = new QFrame(fr_pages_0);
        fr_list_3->setObjectName(QStringLiteral("fr_list_3"));
        sizePolicy1.setHeightForWidth(fr_list_3->sizePolicy().hasHeightForWidth());
        fr_list_3->setSizePolicy(sizePolicy1);
        fr_list_3->setMinimumSize(QSize(60, 52));
        fr_list_3->setMaximumSize(QSize(60, 16777215));
        fr_list_3->setFrameShape(QFrame::NoFrame);
        fr_list_3->setFrameShadow(QFrame::Raised);
        pushB_page_3 = new QPushButton(fr_list_3);
        pushB_page_3->setObjectName(QStringLiteral("pushB_page_3"));
        pushB_page_3->setGeometry(QRect(2, 26, 55, 23));
        pushB_page_3->setMinimumSize(QSize(55, 23));
        pushB_page_3->setMaximumSize(QSize(55, 23));
        lineE_page_3 = new QLineEdit(fr_list_3);
        lineE_page_3->setObjectName(QStringLiteral("lineE_page_3"));
        lineE_page_3->setGeometry(QRect(2, 3, 55, 21));
        sizePolicy1.setHeightForWidth(lineE_page_3->sizePolicy().hasHeightForWidth());
        lineE_page_3->setSizePolicy(sizePolicy1);
        lineE_page_3->setMinimumSize(QSize(55, 21));
        lineE_page_3->setMaximumSize(QSize(55, 21));
        lineE_page_3->setAlignment(Qt::AlignCenter);
        pushB_add_page_3 = new QPushButton(fr_list_3);
        pushB_add_page_3->setObjectName(QStringLiteral("pushB_add_page_3"));
        pushB_add_page_3->setGeometry(QRect(4, 29, 16, 16));
        pushB_add_page_3->setMinimumSize(QSize(16, 16));
        pushB_add_page_3->setMaximumSize(QSize(16, 16));
        pushB_add_page_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, #dadbde, stop: 1 #f6f7fa);\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #dae2ec, stop: 0.4 #d6dde7,\n"
" 	stop: 0.5 #bfd7fb, stop: 1.0 #dae3ef);\n"
"\n"
" 	border: 1px solid #cdc2bf;\n"
" 	border-radius: 8px;\n"
"		\n"
"	image: url(:/menu/page/add_list_0.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, \n"
"	stop:0 rgba(255, 241, 241, 200), \n"
"	stop:0.181818 rgba(255, 255, 255, 135),\n"
"	stop:	0.329545 rgba(200, 173, 173, 135), \n"
"	stop:0.681818 rgba(207, 181, 181, 129), \n"
"	stop:0.829545 rgba(255, 255, 255, 129), \n"
"	stop:1 rgba(255, 239, 239, 192));\n"
"\n"
"	image: url(:/menu/page/add_list_1.png);\n"
" }\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #f39556, stop: 0.4 #f7be98,\n"
"	stop: 0.5 #f0ccb4, stop: 1.0 #eda16e);\n"
"\n"
"	image: url(:/menu/page/del_"
                        "page_0.png);\n"
"}\n"
" \n"
"QPushButton:pressed \n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #afc1db, stop: 0.4 #a1b3cf,\n"
"	stop: 0.5 #639bee, stop: 1.0 #b3caec);\n"
"\n"
"	image: url(:/menu/page/add_list_1.png);\n"
"}\n"
""));
        pushB_del_page_3 = new QPushButton(fr_list_3);
        pushB_del_page_3->setObjectName(QStringLiteral("pushB_del_page_3"));
        pushB_del_page_3->setGeometry(QRect(39, 29, 16, 16));
        pushB_del_page_3->setMinimumSize(QSize(16, 16));
        pushB_del_page_3->setMaximumSize(QSize(16, 16));
        pushB_del_page_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, #dadbde, stop: 1 #f6f7fa);\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #dae2ec, stop: 0.4 #d6dde7,\n"
" 	stop: 0.5 #bfd7fb, stop: 1.0 #dae3ef);\n"
"\n"
" 	border: 1px solid #cdc2bf;\n"
" 	border-radius: 8px;\n"
"	\n"
"	image: url(:/menu/page/del_page_0.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, \n"
"	stop:0 rgba(255, 241, 241, 200), \n"
"	stop:0.181818 rgba(255, 255, 255, 135),\n"
"	stop:	0.329545 rgba(200, 173, 173, 135), \n"
"	stop:0.681818 rgba(207, 181, 181, 129), \n"
"	stop:0.829545 rgba(255, 255, 255, 129), \n"
"	stop:1 rgba(255, 239, 239, 192));\n"
"\n"
"	image: url(:/menu/page/del_page_1.png);\n"
" }\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #f39556, stop: 0.4 #f7be98,\n"
"	stop: 0.5 #f0ccb4, stop: 1.0 #eda16e);\n"
"\n"
"	image: url(:/menu/page/del_p"
                        "age_0.png);\n"
"}\n"
" \n"
"QPushButton:pressed \n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #afc1db, stop: 0.4 #a1b3cf,\n"
"	stop: 0.5 #639bee, stop: 1.0 #b3caec);\n"
"\n"
"	image: url(:/menu/page/del_page_1.png);\n"
"}\n"
""));

        gridLayout_15->addWidget(fr_list_3, 0, 3, 2, 1);

        fr_list_1 = new QFrame(fr_pages_0);
        fr_list_1->setObjectName(QStringLiteral("fr_list_1"));
        sizePolicy1.setHeightForWidth(fr_list_1->sizePolicy().hasHeightForWidth());
        fr_list_1->setSizePolicy(sizePolicy1);
        fr_list_1->setMinimumSize(QSize(60, 52));
        fr_list_1->setMaximumSize(QSize(60, 16777215));
        fr_list_1->setFrameShape(QFrame::NoFrame);
        fr_list_1->setFrameShadow(QFrame::Raised);
        pushB_page_1 = new QPushButton(fr_list_1);
        pushB_page_1->setObjectName(QStringLiteral("pushB_page_1"));
        pushB_page_1->setGeometry(QRect(2, 26, 55, 23));
        pushB_page_1->setMinimumSize(QSize(55, 23));
        pushB_page_1->setMaximumSize(QSize(55, 23));
        lineE_page_1 = new QLineEdit(fr_list_1);
        lineE_page_1->setObjectName(QStringLiteral("lineE_page_1"));
        lineE_page_1->setGeometry(QRect(2, 3, 55, 21));
        sizePolicy1.setHeightForWidth(lineE_page_1->sizePolicy().hasHeightForWidth());
        lineE_page_1->setSizePolicy(sizePolicy1);
        lineE_page_1->setMinimumSize(QSize(55, 21));
        lineE_page_1->setMaximumSize(QSize(55, 21));
        lineE_page_1->setAlignment(Qt::AlignCenter);
        pushB_add_page_1 = new QPushButton(fr_list_1);
        pushB_add_page_1->setObjectName(QStringLiteral("pushB_add_page_1"));
        pushB_add_page_1->setGeometry(QRect(4, 29, 16, 16));
        pushB_add_page_1->setMinimumSize(QSize(16, 16));
        pushB_add_page_1->setMaximumSize(QSize(16, 16));
        pushB_add_page_1->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, #dadbde, stop: 1 #f6f7fa);\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #dae2ec, stop: 0.4 #d6dde7,\n"
" 	stop: 0.5 #bfd7fb, stop: 1.0 #dae3ef);\n"
"\n"
" 	border: 1px solid #cdc2bf;\n"
" 	border-radius: 8px;\n"
"		\n"
"	image: url(:/menu/page/add_list_0.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, \n"
"	stop:0 rgba(255, 241, 241, 200), \n"
"	stop:0.181818 rgba(255, 255, 255, 135),\n"
"	stop:	0.329545 rgba(200, 173, 173, 135), \n"
"	stop:0.681818 rgba(207, 181, 181, 129), \n"
"	stop:0.829545 rgba(255, 255, 255, 129), \n"
"	stop:1 rgba(255, 239, 239, 192));\n"
"\n"
"	image: url(:/menu/page/add_list_1.png);\n"
" }\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #f39556, stop: 0.4 #f7be98,\n"
"	stop: 0.5 #f0ccb4, stop: 1.0 #eda16e);\n"
"\n"
"	image: url(:/menu/page/del_"
                        "page_0.png);\n"
"}\n"
" \n"
"QPushButton:pressed \n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #afc1db, stop: 0.4 #a1b3cf,\n"
"	stop: 0.5 #639bee, stop: 1.0 #b3caec);\n"
"\n"
"	image: url(:/menu/page/add_list_1.png);\n"
"}\n"
""));
        pushB_del_page_1 = new QPushButton(fr_list_1);
        pushB_del_page_1->setObjectName(QStringLiteral("pushB_del_page_1"));
        pushB_del_page_1->setGeometry(QRect(39, 29, 16, 16));
        pushB_del_page_1->setMinimumSize(QSize(16, 16));
        pushB_del_page_1->setMaximumSize(QSize(16, 16));
        pushB_del_page_1->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, #dadbde, stop: 1 #f6f7fa);\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #dae2ec, stop: 0.4 #d6dde7,\n"
" 	stop: 0.5 #bfd7fb, stop: 1.0 #dae3ef);\n"
"\n"
" 	border: 1px solid #cdc2bf;\n"
" 	border-radius: 8px;\n"
"	\n"
"	image: url(:/menu/page/del_page_0.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, \n"
"	stop:0 rgba(255, 241, 241, 200), \n"
"	stop:0.181818 rgba(255, 255, 255, 135),\n"
"	stop:	0.329545 rgba(200, 173, 173, 135), \n"
"	stop:0.681818 rgba(207, 181, 181, 129), \n"
"	stop:0.829545 rgba(255, 255, 255, 129), \n"
"	stop:1 rgba(255, 239, 239, 192));\n"
"\n"
"	image: url(:/menu/page/del_page_1.png);\n"
" }\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #f39556, stop: 0.4 #f7be98,\n"
"	stop: 0.5 #f0ccb4, stop: 1.0 #eda16e);\n"
"\n"
"	image: url(:/menu/page/del_p"
                        "age_0.png);\n"
"}\n"
" \n"
"QPushButton:pressed \n"
"{\n"
"	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #afc1db, stop: 0.4 #a1b3cf,\n"
"	stop: 0.5 #639bee, stop: 1.0 #b3caec);\n"
"\n"
"	image: url(:/menu/page/del_page_1.png);\n"
"}\n"
""));

        gridLayout_15->addWidget(fr_list_1, 0, 1, 1, 1);

        fr_list_0->raise();
        fr_list_2->raise();
        fr_list_3->raise();
        fr_list_1->raise();
        fr_add_pages_0->raise();

        gridLayout_17->addWidget(fr_pages_0, 0, 0, 1, 2);

        fr_genirals_0 = new QFrame(fr_add_list_0);
        fr_genirals_0->setObjectName(QStringLiteral("fr_genirals_0"));
        fr_genirals_0->setFrameShape(QFrame::NoFrame);
        fr_genirals_0->setFrameShadow(QFrame::Raised);
        gridLayout_16 = new QGridLayout(fr_genirals_0);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setHorizontalSpacing(2);
        gridLayout_16->setVerticalSpacing(1);
        gridLayout_16->setContentsMargins(2, 0, 1, 1);
        pushB_page_general_0 = new QPushButton(fr_genirals_0);
        pushB_page_general_0->setObjectName(QStringLiteral("pushB_page_general_0"));
        pushB_page_general_0->setMinimumSize(QSize(244, 23));
        pushB_page_general_0->setMaximumSize(QSize(0, 23));
        pushB_page_general_0->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        QString iconThemeName = QStringLiteral("push");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(":/menu/page/push_geniral_0.png"), QSize(), QIcon::Normal, QIcon::Off);
            icon.addFile(QStringLiteral(":/menu/page/push_geniral_1.png"), QSize(), QIcon::Disabled, QIcon::Off);
            icon.addFile(QStringLiteral(":/menu/page/push_geniral_1.png"), QSize(), QIcon::Active, QIcon::Off);
            icon.addFile(QStringLiteral(":/menu/page/push_geniral_1.png"), QSize(), QIcon::Selected, QIcon::Off);
        }
        pushB_page_general_0->setIcon(icon);
        pushB_page_general_0->setIconSize(QSize(19, 19));
        pushB_page_general_0->setCheckable(true);
        pushB_page_general_0->setChecked(false);

        gridLayout_16->addWidget(pushB_page_general_0, 1, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(87, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_9, 1, 1, 1, 1);

        verticalSpacer_16 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_16->addItem(verticalSpacer_16, 3, 0, 1, 1);

        pushB_page_korr_0 = new QPushButton(fr_genirals_0);
        pushB_page_korr_0->setObjectName(QStringLiteral("pushB_page_korr_0"));
        pushB_page_korr_0->setMinimumSize(QSize(244, 23));
        pushB_page_korr_0->setMaximumSize(QSize(999, 23));
        QIcon icon1;
        iconThemeName = QStringLiteral("push2");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral(":/menu/page/push_korr_0.png"), QSize(), QIcon::Normal, QIcon::Off);
            icon1.addFile(QStringLiteral(":/menu/page/push_korr_1.png"), QSize(), QIcon::Disabled, QIcon::Off);
            icon1.addFile(QStringLiteral(":/menu/page/push_korr_1.png"), QSize(), QIcon::Active, QIcon::Off);
            icon1.addFile(QStringLiteral(":/menu/page/push_korr_1.png"), QSize(), QIcon::Selected, QIcon::Off);
        }
        pushB_page_korr_0->setIcon(icon1);
        pushB_page_korr_0->setIconSize(QSize(19, 19));
        pushB_page_korr_0->setCheckable(true);
        pushB_page_korr_0->setChecked(false);

        gridLayout_16->addWidget(pushB_page_korr_0, 4, 0, 1, 1);


        gridLayout_17->addWidget(fr_genirals_0, 2, 0, 1, 2);

        line_6 = new QFrame(fr_add_list_0);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setMinimumSize(QSize(0, 2));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_17->addWidget(line_6, 1, 0, 1, 2);


        gridLayout->addWidget(fr_add_list_0, 0, 0, 1, 1);


        retranslateUi(widget_pages_list);

        QMetaObject::connectSlotsByName(widget_pages_list);
    } // setupUi

    void retranslateUi(QWidget *widget_pages_list)
    {
        widget_pages_list->setWindowTitle(QApplication::translate("widget_pages_list", "Form", 0));
        la_add_pages_0->setText(QApplication::translate("widget_pages_list", "\321\207\320\260\321\201\321\202\321\214", 0));
        add_page_0->setText(QString());
        pushB_page_0->setText(QApplication::translate("widget_pages_list", "1", 0));
        lineE_page_0->setText(QApplication::translate("widget_pages_list", "1.00", 0));
        pushB_add_page_0->setText(QString());
        pushB_del_page_0->setText(QString());
        pushB_page_2->setText(QApplication::translate("widget_pages_list", "3", 0));
        lineE_page_2->setText(QApplication::translate("widget_pages_list", "3.00", 0));
        pushB_add_page_2->setText(QString());
        pushB_del_page_2->setText(QString());
        pushB_page_3->setText(QApplication::translate("widget_pages_list", "4", 0));
        lineE_page_3->setText(QApplication::translate("widget_pages_list", "4.00", 0));
        pushB_add_page_3->setText(QString());
        pushB_del_page_3->setText(QString());
        pushB_page_1->setText(QApplication::translate("widget_pages_list", "2", 0));
        lineE_page_1->setText(QApplication::translate("widget_pages_list", "2.00", 0));
        pushB_add_page_1->setText(QString());
        pushB_del_page_1->setText(QString());
        pushB_page_general_0->setText(QApplication::translate("widget_pages_list", "\320\236\320\261\321\211\320\270\320\271", 0));
        pushB_page_korr_0->setText(QApplication::translate("widget_pages_list", "\320\232\320\276\321\200\321\200.  ", 0));
    } // retranslateUi

};

namespace Ui {
    class widget_pages_list: public Ui_widget_pages_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_PAGES_LIST_H
