/********************************************************************************
** Form generated from reading UI file 'pages_mini_list.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGES_MINI_LIST_H
#define UI_PAGES_MINI_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pages_mini_list
{
public:
    QGridLayout *gridLayout;
    QFrame *fr_list_1;
    QGridLayout *gridLayout_2;
    QFrame *fr_block_2_page_1;
    QPushButton *pushB_add_sys_page_1;
    QPushButton *pushB_del_sys_page_1;
    QGridLayout *gridLayout_15;
    QPushButton *pushB_sys_page_1;
    QFrame *fr_block_2_page_2;
    QPushButton *pushB_add_sys_page_2;
    QPushButton *pushB_del_sys_page_2;
    QGridLayout *gridLayout_14;
    QPushButton *pushB_sys_page_2;
    QFrame *fr_block_2_page_3;
    QPushButton *pushB_add_sys_page_3;
    QPushButton *pushB_del_sys_page_3;
    QGridLayout *gridLayout_16;
    QPushButton *pushB_sys_page_3;
    QFrame *fr_block_2_page_4;
    QPushButton *pushB_add_sys_page_4;
    QPushButton *pushB_del_sys_page_4;
    QGridLayout *gridLayout_17;
    QPushButton *pushB_sys_page_4;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *pages_mini_list)
    {
        if (pages_mini_list->objectName().isEmpty())
            pages_mini_list->setObjectName(QStringLiteral("pages_mini_list"));
        pages_mini_list->resize(253, 39);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        pages_mini_list->setFont(font);
        gridLayout = new QGridLayout(pages_mini_list);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        fr_list_1 = new QFrame(pages_mini_list);
        fr_list_1->setObjectName(QStringLiteral("fr_list_1"));
        fr_list_1->setMinimumSize(QSize(0, 39));
        fr_list_1->setFrameShape(QFrame::StyledPanel);
        fr_list_1->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(fr_list_1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(1);
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        fr_block_2_page_1 = new QFrame(fr_list_1);
        fr_block_2_page_1->setObjectName(QStringLiteral("fr_block_2_page_1"));
        fr_block_2_page_1->setFrameShape(QFrame::NoFrame);
        fr_block_2_page_1->setFrameShadow(QFrame::Raised);
        pushB_add_sys_page_1 = new QPushButton(fr_block_2_page_1);
        pushB_add_sys_page_1->setObjectName(QStringLiteral("pushB_add_sys_page_1"));
        pushB_add_sys_page_1->setGeometry(QRect(3, 9, 16, 16));
        pushB_add_sys_page_1->setMinimumSize(QSize(16, 16));
        pushB_add_sys_page_1->setMaximumSize(QSize(16, 16));
        pushB_add_sys_page_1->setFont(font);
        pushB_add_sys_page_1->setStyleSheet(QLatin1String("QPushButton\n"
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
        pushB_del_sys_page_1 = new QPushButton(fr_block_2_page_1);
        pushB_del_sys_page_1->setObjectName(QStringLiteral("pushB_del_sys_page_1"));
        pushB_del_sys_page_1->setGeometry(QRect(38, 9, 16, 16));
        pushB_del_sys_page_1->setMinimumSize(QSize(16, 16));
        pushB_del_sys_page_1->setMaximumSize(QSize(16, 16));
        pushB_del_sys_page_1->setFont(font);
        pushB_del_sys_page_1->setStyleSheet(QLatin1String("QPushButton\n"
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
        gridLayout_15 = new QGridLayout(fr_block_2_page_1);
        gridLayout_15->setSpacing(1);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        gridLayout_15->setContentsMargins(1, 1, 1, 1);
        pushB_sys_page_1 = new QPushButton(fr_block_2_page_1);
        pushB_sys_page_1->setObjectName(QStringLiteral("pushB_sys_page_1"));
        pushB_sys_page_1->setMinimumSize(QSize(55, 23));
        pushB_sys_page_1->setMaximumSize(QSize(55, 23));
        pushB_sys_page_1->setCheckable(false);

        gridLayout_15->addWidget(pushB_sys_page_1, 0, 0, 1, 1);

        pushB_sys_page_1->raise();
        pushB_del_sys_page_1->raise();
        pushB_add_sys_page_1->raise();

        gridLayout_2->addWidget(fr_block_2_page_1, 0, 0, 1, 1);

        fr_block_2_page_2 = new QFrame(fr_list_1);
        fr_block_2_page_2->setObjectName(QStringLiteral("fr_block_2_page_2"));
        fr_block_2_page_2->setFrameShape(QFrame::NoFrame);
        fr_block_2_page_2->setFrameShadow(QFrame::Raised);
        pushB_add_sys_page_2 = new QPushButton(fr_block_2_page_2);
        pushB_add_sys_page_2->setObjectName(QStringLiteral("pushB_add_sys_page_2"));
        pushB_add_sys_page_2->setGeometry(QRect(3, 9, 16, 16));
        pushB_add_sys_page_2->setMinimumSize(QSize(16, 16));
        pushB_add_sys_page_2->setMaximumSize(QSize(16, 16));
        pushB_add_sys_page_2->setFont(font);
        pushB_add_sys_page_2->setStyleSheet(QLatin1String("QPushButton\n"
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
        pushB_del_sys_page_2 = new QPushButton(fr_block_2_page_2);
        pushB_del_sys_page_2->setObjectName(QStringLiteral("pushB_del_sys_page_2"));
        pushB_del_sys_page_2->setGeometry(QRect(38, 9, 16, 16));
        pushB_del_sys_page_2->setMinimumSize(QSize(16, 16));
        pushB_del_sys_page_2->setMaximumSize(QSize(16, 16));
        pushB_del_sys_page_2->setFont(font);
        pushB_del_sys_page_2->setStyleSheet(QLatin1String("QPushButton\n"
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
        gridLayout_14 = new QGridLayout(fr_block_2_page_2);
        gridLayout_14->setSpacing(1);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        gridLayout_14->setContentsMargins(1, 1, 1, 1);
        pushB_sys_page_2 = new QPushButton(fr_block_2_page_2);
        pushB_sys_page_2->setObjectName(QStringLiteral("pushB_sys_page_2"));
        pushB_sys_page_2->setMinimumSize(QSize(55, 23));
        pushB_sys_page_2->setMaximumSize(QSize(55, 23));
        pushB_sys_page_2->setCheckable(false);

        gridLayout_14->addWidget(pushB_sys_page_2, 0, 0, 1, 1);

        pushB_sys_page_2->raise();
        pushB_add_sys_page_2->raise();
        pushB_del_sys_page_2->raise();

        gridLayout_2->addWidget(fr_block_2_page_2, 0, 1, 1, 1);

        fr_block_2_page_3 = new QFrame(fr_list_1);
        fr_block_2_page_3->setObjectName(QStringLiteral("fr_block_2_page_3"));
        fr_block_2_page_3->setFrameShape(QFrame::NoFrame);
        fr_block_2_page_3->setFrameShadow(QFrame::Raised);
        pushB_add_sys_page_3 = new QPushButton(fr_block_2_page_3);
        pushB_add_sys_page_3->setObjectName(QStringLiteral("pushB_add_sys_page_3"));
        pushB_add_sys_page_3->setGeometry(QRect(3, 9, 16, 16));
        pushB_add_sys_page_3->setMinimumSize(QSize(16, 16));
        pushB_add_sys_page_3->setMaximumSize(QSize(16, 16));
        pushB_add_sys_page_3->setFont(font);
        pushB_add_sys_page_3->setStyleSheet(QLatin1String("QPushButton\n"
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
        pushB_del_sys_page_3 = new QPushButton(fr_block_2_page_3);
        pushB_del_sys_page_3->setObjectName(QStringLiteral("pushB_del_sys_page_3"));
        pushB_del_sys_page_3->setGeometry(QRect(38, 9, 16, 16));
        pushB_del_sys_page_3->setMinimumSize(QSize(16, 16));
        pushB_del_sys_page_3->setMaximumSize(QSize(16, 16));
        pushB_del_sys_page_3->setFont(font);
        pushB_del_sys_page_3->setStyleSheet(QLatin1String("QPushButton\n"
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
        gridLayout_16 = new QGridLayout(fr_block_2_page_3);
        gridLayout_16->setSpacing(1);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_16->setContentsMargins(1, 1, 1, 1);
        pushB_sys_page_3 = new QPushButton(fr_block_2_page_3);
        pushB_sys_page_3->setObjectName(QStringLiteral("pushB_sys_page_3"));
        pushB_sys_page_3->setMinimumSize(QSize(55, 23));
        pushB_sys_page_3->setMaximumSize(QSize(55, 23));
        pushB_sys_page_3->setCheckable(false);

        gridLayout_16->addWidget(pushB_sys_page_3, 0, 0, 1, 1);

        pushB_sys_page_3->raise();
        pushB_add_sys_page_3->raise();
        pushB_del_sys_page_3->raise();

        gridLayout_2->addWidget(fr_block_2_page_3, 0, 2, 1, 1);

        fr_block_2_page_4 = new QFrame(fr_list_1);
        fr_block_2_page_4->setObjectName(QStringLiteral("fr_block_2_page_4"));
        fr_block_2_page_4->setFrameShape(QFrame::NoFrame);
        fr_block_2_page_4->setFrameShadow(QFrame::Raised);
        pushB_add_sys_page_4 = new QPushButton(fr_block_2_page_4);
        pushB_add_sys_page_4->setObjectName(QStringLiteral("pushB_add_sys_page_4"));
        pushB_add_sys_page_4->setGeometry(QRect(3, 9, 16, 16));
        pushB_add_sys_page_4->setMinimumSize(QSize(16, 16));
        pushB_add_sys_page_4->setMaximumSize(QSize(16, 16));
        pushB_add_sys_page_4->setFont(font);
        pushB_add_sys_page_4->setStyleSheet(QLatin1String("QPushButton\n"
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
        pushB_del_sys_page_4 = new QPushButton(fr_block_2_page_4);
        pushB_del_sys_page_4->setObjectName(QStringLiteral("pushB_del_sys_page_4"));
        pushB_del_sys_page_4->setGeometry(QRect(38, 9, 16, 16));
        pushB_del_sys_page_4->setMinimumSize(QSize(16, 16));
        pushB_del_sys_page_4->setMaximumSize(QSize(16, 16));
        pushB_del_sys_page_4->setFont(font);
        pushB_del_sys_page_4->setStyleSheet(QLatin1String("QPushButton\n"
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
        gridLayout_17 = new QGridLayout(fr_block_2_page_4);
        gridLayout_17->setSpacing(1);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        gridLayout_17->setContentsMargins(1, 1, 1, 1);
        pushB_sys_page_4 = new QPushButton(fr_block_2_page_4);
        pushB_sys_page_4->setObjectName(QStringLiteral("pushB_sys_page_4"));
        pushB_sys_page_4->setMinimumSize(QSize(55, 23));
        pushB_sys_page_4->setMaximumSize(QSize(55, 23));
        pushB_sys_page_4->setCheckable(false);

        gridLayout_17->addWidget(pushB_sys_page_4, 0, 0, 1, 1);

        pushB_sys_page_4->raise();
        pushB_add_sys_page_4->raise();
        pushB_del_sys_page_4->raise();

        gridLayout_2->addWidget(fr_block_2_page_4, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(14, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);


        gridLayout->addWidget(fr_list_1, 0, 0, 1, 1);


        retranslateUi(pages_mini_list);

        QMetaObject::connectSlotsByName(pages_mini_list);
    } // setupUi

    void retranslateUi(QWidget *pages_mini_list)
    {
        pages_mini_list->setWindowTitle(QApplication::translate("pages_mini_list", "Form", 0));
        pushB_add_sys_page_1->setText(QString());
        pushB_del_sys_page_1->setText(QString());
        pushB_sys_page_1->setText(QApplication::translate("pages_mini_list", "1", 0));
        pushB_add_sys_page_2->setText(QString());
        pushB_del_sys_page_2->setText(QString());
        pushB_sys_page_2->setText(QApplication::translate("pages_mini_list", "2", 0));
        pushB_add_sys_page_3->setText(QString());
        pushB_del_sys_page_3->setText(QString());
        pushB_sys_page_3->setText(QApplication::translate("pages_mini_list", "3", 0));
        pushB_add_sys_page_4->setText(QString());
        pushB_del_sys_page_4->setText(QString());
        pushB_sys_page_4->setText(QApplication::translate("pages_mini_list", "4", 0));
    } // retranslateUi

};

namespace Ui {
    class pages_mini_list: public Ui_pages_mini_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGES_MINI_LIST_H
