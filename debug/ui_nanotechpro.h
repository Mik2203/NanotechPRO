/********************************************************************************
** Form generated from reading UI file 'nanotechpro.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NANOTECHPRO_H
#define UI_NANOTECHPRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NanotechPRO
{
public:
    QAction *ac_1;
    QAction *ac_2;
    QAction *ac_3;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedW_0;
    QWidget *page;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lab_logo_0;
    QSpacerItem *horizontalSpacer_4;
    QLabel *la_version_1;
    QSpacerItem *verticalSpacer_4;
    QFrame *fr_new_pro_0;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineE_new_pro_0;
    QPushButton *pushB_new_pro_0;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QPushButton *pushB_1;
    QProgressBar *pBar_1;
    QFrame *fr_logo_0;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QFrame *frame_2;
    QLabel *laLogo_1;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QFrame *fr_menu_0;
    QPushButton *pushB_open_0;
    QPushButton *pushB_save_0;
    QFrame *fr_page_1;
    QFrame *fr_blok_1;
    QGridLayout *gridLayout_7;
    QLabel *la_blok_1;
    QFrame *fr_blok_1_1;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *la_blok_1_elements_0;
    QLineEdit *lineE_blok_1_elements_0;
    QLabel *la_blok_1_elements_1;
    QLineEdit *lineE_blok_1_elements_1;
    QFrame *fr_blok_2;
    QGridLayout *gridLayout_8;
    QLabel *la_blok_2;
    QFrame *fr_blok_2_1;
    QFrame *frame_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *la_blok_1_elements_2;
    QLineEdit *lineE_blok_1_elements_2;
    QLabel *la_blok_1_elements_3;
    QLineEdit *lineE_blok_1_elements_3;
    QMenuBar *menubar;
    QMenu *global_menu_0;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NanotechPRO)
    {
        if (NanotechPRO->objectName().isEmpty())
            NanotechPRO->setObjectName(QStringLiteral("NanotechPRO"));
        NanotechPRO->resize(947, 659);
        ac_1 = new QAction(NanotechPRO);
        ac_1->setObjectName(QStringLiteral("ac_1"));
        ac_2 = new QAction(NanotechPRO);
        ac_2->setObjectName(QStringLiteral("ac_2"));
        ac_3 = new QAction(NanotechPRO);
        ac_3->setObjectName(QStringLiteral("ac_3"));
        centralwidget = new QWidget(NanotechPRO);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setSpacing(1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(1, 1, 1, 1);
        stackedW_0 = new QStackedWidget(centralwidget);
        stackedW_0->setObjectName(QStringLiteral("stackedW_0"));
        stackedW_0->setFrameShape(QFrame::NoFrame);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(247, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(247, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        frame = new QFrame(page);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(350, 350));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame);
        gridLayout_6->setSpacing(2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(1, 1, 1, 1);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label, 0, 0, 1, 3);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(320, 10));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line, 1, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lab_logo_0 = new QLabel(frame);
        lab_logo_0->setObjectName(QStringLiteral("lab_logo_0"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_logo_0->sizePolicy().hasHeightForWidth());
        lab_logo_0->setSizePolicy(sizePolicy1);
        lab_logo_0->setMinimumSize(QSize(315, 98));
        lab_logo_0->setStyleSheet(QStringLiteral("image: url(:/logotip/nanoteh_logo_RU_horizontal.png);"));
        lab_logo_0->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(lab_logo_0);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_6->addLayout(horizontalLayout, 2, 0, 1, 3);

        la_version_1 = new QLabel(frame);
        la_version_1->setObjectName(QStringLiteral("la_version_1"));
        la_version_1->setFrameShape(QFrame::NoFrame);

        gridLayout_6->addWidget(la_version_1, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 3, 2, 1, 1);

        fr_new_pro_0 = new QFrame(frame);
        fr_new_pro_0->setObjectName(QStringLiteral("fr_new_pro_0"));
        fr_new_pro_0->setFrameShape(QFrame::NoFrame);
        fr_new_pro_0->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(fr_new_pro_0);
        gridLayout_4->setSpacing(2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineE_new_pro_0 = new QLineEdit(fr_new_pro_0);
        lineE_new_pro_0->setObjectName(QStringLiteral("lineE_new_pro_0"));

        horizontalLayout_3->addWidget(lineE_new_pro_0);

        pushB_new_pro_0 = new QPushButton(fr_new_pro_0);
        pushB_new_pro_0->setObjectName(QStringLiteral("pushB_new_pro_0"));

        horizontalLayout_3->addWidget(pushB_new_pro_0);


        gridLayout_4->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(fr_new_pro_0);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        label_3 = new QLabel(fr_new_pro_0);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        pushB_1 = new QPushButton(fr_new_pro_0);
        pushB_1->setObjectName(QStringLiteral("pushB_1"));
        pushB_1->setMinimumSize(QSize(0, 2));
        pushB_1->setMaximumSize(QSize(16777215, 2));

        gridLayout_4->addWidget(pushB_1, 4, 0, 1, 1);

        pBar_1 = new QProgressBar(fr_new_pro_0);
        pBar_1->setObjectName(QStringLiteral("pBar_1"));
        pBar_1->setMaximumSize(QSize(16777215, 4));
        pBar_1->setValue(0);
        pBar_1->setTextVisible(false);

        gridLayout_4->addWidget(pBar_1, 3, 0, 1, 1);


        gridLayout_6->addWidget(fr_new_pro_0, 4, 0, 1, 3);

        fr_logo_0 = new QFrame(frame);
        fr_logo_0->setObjectName(QStringLiteral("fr_logo_0"));
        fr_logo_0->setMinimumSize(QSize(0, 50));
        fr_logo_0->setFrameShape(QFrame::StyledPanel);
        fr_logo_0->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(fr_logo_0);
        gridLayout_5->setSpacing(2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(1, 1, 1, 1);
        horizontalSpacer_6 = new QSpacerItem(352, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        frame_2 = new QFrame(fr_logo_0);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setEnabled(true);
        frame_2->setMinimumSize(QSize(48, 48));
        frame_2->setStyleSheet(QStringLiteral("image: url(:/logotip/logo1.png);"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        laLogo_1 = new QLabel(frame_2);
        laLogo_1->setObjectName(QStringLiteral("laLogo_1"));
        laLogo_1->setGeometry(QRect(0, 0, 48, 48));
        sizePolicy.setHeightForWidth(laLogo_1->sizePolicy().hasHeightForWidth());
        laLogo_1->setSizePolicy(sizePolicy);
        laLogo_1->setMinimumSize(QSize(0, 0));
        laLogo_1->setMaximumSize(QSize(48, 48));
        laLogo_1->setStyleSheet(QStringLiteral("image: url(:/logotip/logo.png);"));
        laLogo_1->setFrameShape(QFrame::NoFrame);

        gridLayout_5->addWidget(frame_2, 0, 0, 1, 1);


        gridLayout_6->addWidget(fr_logo_0, 5, 0, 1, 3);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_5, 6, 1, 1, 1);

        fr_new_pro_0->raise();
        label->raise();
        line->raise();
        la_version_1->raise();
        label_3->raise();
        fr_logo_0->raise();

        gridLayout->addWidget(frame, 1, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 2, 1, 1);

        stackedW_0->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setSpacing(1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        fr_menu_0 = new QFrame(page_2);
        fr_menu_0->setObjectName(QStringLiteral("fr_menu_0"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fr_menu_0->sizePolicy().hasHeightForWidth());
        fr_menu_0->setSizePolicy(sizePolicy2);
        fr_menu_0->setMinimumSize(QSize(600, 50));
        fr_menu_0->setFrameShape(QFrame::Box);
        fr_menu_0->setFrameShadow(QFrame::Sunken);
        pushB_open_0 = new QPushButton(fr_menu_0);
        pushB_open_0->setObjectName(QStringLiteral("pushB_open_0"));
        pushB_open_0->setGeometry(QRect(0, 0, 48, 48));
        pushB_save_0 = new QPushButton(fr_menu_0);
        pushB_save_0->setObjectName(QStringLiteral("pushB_save_0"));
        pushB_save_0->setGeometry(QRect(50, 0, 48, 48));

        gridLayout_2->addWidget(fr_menu_0, 0, 0, 1, 1);

        fr_page_1 = new QFrame(page_2);
        fr_page_1->setObjectName(QStringLiteral("fr_page_1"));
        fr_page_1->setFrameShape(QFrame::Box);
        fr_page_1->setFrameShadow(QFrame::Sunken);
        fr_blok_1 = new QFrame(fr_page_1);
        fr_blok_1->setObjectName(QStringLiteral("fr_blok_1"));
        fr_blok_1->setGeometry(QRect(10, 190, 271, 351));
        fr_blok_1->setFrameShape(QFrame::Box);
        fr_blok_1->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(fr_blok_1);
        gridLayout_7->setSpacing(2);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        la_blok_1 = new QLabel(fr_blok_1);
        la_blok_1->setObjectName(QStringLiteral("la_blok_1"));
        sizePolicy2.setHeightForWidth(la_blok_1->sizePolicy().hasHeightForWidth());
        la_blok_1->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        la_blok_1->setFont(font2);
        la_blok_1->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 170, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_7->addWidget(la_blok_1, 0, 0, 1, 1);

        fr_blok_1_1 = new QFrame(fr_blok_1);
        fr_blok_1_1->setObjectName(QStringLiteral("fr_blok_1_1"));
        fr_blok_1_1->setFrameShape(QFrame::StyledPanel);
        fr_blok_1_1->setFrameShadow(QFrame::Raised);
        widget = new QWidget(fr_blok_1_1);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 220, 22));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        la_blok_1_elements_0 = new QLabel(widget);
        la_blok_1_elements_0->setObjectName(QStringLiteral("la_blok_1_elements_0"));

        horizontalLayout_4->addWidget(la_blok_1_elements_0);

        lineE_blok_1_elements_0 = new QLineEdit(widget);
        lineE_blok_1_elements_0->setObjectName(QStringLiteral("lineE_blok_1_elements_0"));

        horizontalLayout_4->addWidget(lineE_blok_1_elements_0);

        la_blok_1_elements_1 = new QLabel(widget);
        la_blok_1_elements_1->setObjectName(QStringLiteral("la_blok_1_elements_1"));

        horizontalLayout_4->addWidget(la_blok_1_elements_1);

        lineE_blok_1_elements_1 = new QLineEdit(widget);
        lineE_blok_1_elements_1->setObjectName(QStringLiteral("lineE_blok_1_elements_1"));

        horizontalLayout_4->addWidget(lineE_blok_1_elements_1);


        gridLayout_7->addWidget(fr_blok_1_1, 1, 0, 1, 1);

        fr_blok_2 = new QFrame(fr_page_1);
        fr_blok_2->setObjectName(QStringLiteral("fr_blok_2"));
        fr_blok_2->setGeometry(QRect(290, 190, 271, 351));
        fr_blok_2->setFrameShape(QFrame::Box);
        fr_blok_2->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(fr_blok_2);
        gridLayout_8->setSpacing(2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        la_blok_2 = new QLabel(fr_blok_2);
        la_blok_2->setObjectName(QStringLiteral("la_blok_2"));
        sizePolicy2.setHeightForWidth(la_blok_2->sizePolicy().hasHeightForWidth());
        la_blok_2->setSizePolicy(sizePolicy2);
        la_blok_2->setFont(font2);
        la_blok_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 170, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_8->addWidget(la_blok_2, 0, 0, 1, 1);

        fr_blok_2_1 = new QFrame(fr_blok_2);
        fr_blok_2_1->setObjectName(QStringLiteral("fr_blok_2_1"));
        fr_blok_2_1->setFrameShape(QFrame::StyledPanel);
        fr_blok_2_1->setFrameShadow(QFrame::Raised);

        gridLayout_8->addWidget(fr_blok_2_1, 1, 0, 1, 1);

        frame_3 = new QFrame(fr_page_1);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 10, 921, 41));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 220, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        la_blok_1_elements_2 = new QLabel(layoutWidget);
        la_blok_1_elements_2->setObjectName(QStringLiteral("la_blok_1_elements_2"));

        horizontalLayout_5->addWidget(la_blok_1_elements_2);

        lineE_blok_1_elements_2 = new QLineEdit(layoutWidget);
        lineE_blok_1_elements_2->setObjectName(QStringLiteral("lineE_blok_1_elements_2"));

        horizontalLayout_5->addWidget(lineE_blok_1_elements_2);

        la_blok_1_elements_3 = new QLabel(layoutWidget);
        la_blok_1_elements_3->setObjectName(QStringLiteral("la_blok_1_elements_3"));

        horizontalLayout_5->addWidget(la_blok_1_elements_3);

        lineE_blok_1_elements_3 = new QLineEdit(layoutWidget);
        lineE_blok_1_elements_3->setObjectName(QStringLiteral("lineE_blok_1_elements_3"));

        horizontalLayout_5->addWidget(lineE_blok_1_elements_3);


        gridLayout_2->addWidget(fr_page_1, 1, 0, 1, 1);

        stackedW_0->addWidget(page_2);

        gridLayout_3->addWidget(stackedW_0, 0, 0, 1, 1);

        NanotechPRO->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NanotechPRO);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setEnabled(true);
        menubar->setGeometry(QRect(0, 0, 947, 21));
        global_menu_0 = new QMenu(menubar);
        global_menu_0->setObjectName(QStringLiteral("global_menu_0"));
        NanotechPRO->setMenuBar(menubar);
        statusbar = new QStatusBar(NanotechPRO);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        NanotechPRO->setStatusBar(statusbar);

        menubar->addAction(global_menu_0->menuAction());
        global_menu_0->addAction(ac_1);
        global_menu_0->addAction(ac_2);
        global_menu_0->addAction(ac_3);

        retranslateUi(NanotechPRO);

        stackedW_0->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(NanotechPRO);
    } // setupUi

    void retranslateUi(QMainWindow *NanotechPRO)
    {
        NanotechPRO->setWindowTitle(QApplication::translate("NanotechPRO", "MainWindow", 0));
        ac_1->setText(QApplication::translate("NanotechPRO", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        ac_2->setText(QApplication::translate("NanotechPRO", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        ac_3->setText(QApplication::translate("NanotechPRO", "\320\222\321\213\321\205\320\276\320\264", 0));
        label->setText(QApplication::translate("NanotechPRO", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214", 0));
        lab_logo_0->setText(QString());
        la_version_1->setText(QString());
        pushB_new_pro_0->setText(QApplication::translate("NanotechPRO", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", 0));
        label_4->setText(QApplication::translate("NanotechPRO", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\321\200\320\276\320\265\320\272\321\202\320\260:", 0));
        label_3->setText(QApplication::translate("NanotechPRO", "\320\235\320\276\320\262\321\213\320\271 \320\277\321\200\320\276\320\265\320\272\321\202", 0));
        pushB_1->setText(QString());
        laLogo_1->setText(QString());
        pushB_open_0->setText(QApplication::translate("NanotechPRO", "\320\236\321\202\320\272", 0));
        pushB_save_0->setText(QApplication::translate("NanotechPRO", "\320\241\320\276\321\205", 0));
        la_blok_1->setText(QApplication::translate("NanotechPRO", " \320\232\320\260\321\202\320\270\320\276\320\275\321\213", 0));
        la_blok_1_elements_0->setText(QApplication::translate("NanotechPRO", "TextLabel", 0));
        la_blok_1_elements_1->setText(QString());
        la_blok_2->setText(QApplication::translate("NanotechPRO", " \320\220\320\275\320\270\320\276\320\275\321\213", 0));
        la_blok_1_elements_2->setText(QApplication::translate("NanotechPRO", "TextLabel", 0));
        la_blok_1_elements_3->setText(QString());
        global_menu_0->setTitle(QApplication::translate("NanotechPRO", "\320\244\320\260\320\271\320\273", 0));
    } // retranslateUi

};

namespace Ui {
    class NanotechPRO: public Ui_NanotechPRO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NANOTECHPRO_H
