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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NanotechPRO
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedW_0;
    QWidget *page;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lab_logo_0;
    QSpacerItem *horizontalSpacer_4;
    QFrame *fr_new_pro_0;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineE_new_pro_0;
    QPushButton *pushB_new_pro_0;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QFrame *line;
    QLabel *la_version_1;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QFrame *fr_menu_0;
    QPushButton *pushB_open_0;
    QPushButton *pushB_save_0;
    QFrame *frame_3;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NanotechPRO)
    {
        if (NanotechPRO->objectName().isEmpty())
            NanotechPRO->setObjectName(QStringLiteral("NanotechPRO"));
        NanotechPRO->resize(947, 659);
        action = new QAction(NanotechPRO);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(NanotechPRO);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(NanotechPRO);
        action_3->setObjectName(QStringLiteral("action_3"));
        centralwidget = new QWidget(NanotechPRO);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setSpacing(1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(1, 1, 1, 1);
        stackedW_0 = new QStackedWidget(centralwidget);
        stackedW_0->setObjectName(QStringLiteral("stackedW_0"));
        stackedW_0->setFrameShape(QFrame::Box);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(247, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(247, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 2, 1, 1);

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
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setSpacing(2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(1, 1, 1, 1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lab_logo_0 = new QLabel(frame);
        lab_logo_0->setObjectName(QStringLiteral("lab_logo_0"));
        lab_logo_0->setMinimumSize(QSize(315, 98));
        lab_logo_0->setStyleSheet(QStringLiteral("image: url(:/logotip/nanoteh_logo_RU_horizontal.png);"));
        lab_logo_0->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(lab_logo_0);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_5->addLayout(horizontalLayout, 2, 0, 1, 1);

        fr_new_pro_0 = new QFrame(frame);
        fr_new_pro_0->setObjectName(QStringLiteral("fr_new_pro_0"));
        fr_new_pro_0->setFrameShape(QFrame::NoFrame);
        fr_new_pro_0->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(fr_new_pro_0);
        gridLayout_4->setSpacing(2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(1, 1, 1, 1);
        label_3 = new QLabel(fr_new_pro_0);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(fr_new_pro_0);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineE_new_pro_0 = new QLineEdit(fr_new_pro_0);
        lineE_new_pro_0->setObjectName(QStringLiteral("lineE_new_pro_0"));

        horizontalLayout_3->addWidget(lineE_new_pro_0);

        pushB_new_pro_0 = new QPushButton(fr_new_pro_0);
        pushB_new_pro_0->setObjectName(QStringLiteral("pushB_new_pro_0"));

        horizontalLayout_3->addWidget(pushB_new_pro_0);


        gridLayout_4->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        gridLayout_5->addWidget(fr_new_pro_0, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_4, 4, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_3, 6, 0, 1, 1);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(320, 10));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line, 1, 0, 1, 1);

        la_version_1 = new QLabel(frame);
        la_version_1->setObjectName(QStringLiteral("la_version_1"));
        la_version_1->setFrameShape(QFrame::NoFrame);

        gridLayout_5->addWidget(la_version_1, 3, 0, 1, 1);


        gridLayout->addWidget(frame, 1, 1, 1, 2);

        stackedW_0->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setSpacing(1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        fr_menu_0 = new QFrame(page_2);
        fr_menu_0->setObjectName(QStringLiteral("fr_menu_0"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fr_menu_0->sizePolicy().hasHeightForWidth());
        fr_menu_0->setSizePolicy(sizePolicy1);
        fr_menu_0->setMinimumSize(QSize(600, 50));
        fr_menu_0->setFrameShape(QFrame::Box);
        fr_menu_0->setFrameShadow(QFrame::Raised);
        pushB_open_0 = new QPushButton(fr_menu_0);
        pushB_open_0->setObjectName(QStringLiteral("pushB_open_0"));
        pushB_open_0->setGeometry(QRect(0, 0, 48, 48));
        pushB_save_0 = new QPushButton(fr_menu_0);
        pushB_save_0->setObjectName(QStringLiteral("pushB_save_0"));
        pushB_save_0->setGeometry(QRect(50, 0, 48, 48));

        gridLayout_2->addWidget(fr_menu_0, 0, 0, 1, 1);

        frame_3 = new QFrame(page_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_3, 1, 0, 1, 1);

        stackedW_0->addWidget(page_2);

        gridLayout_3->addWidget(stackedW_0, 0, 0, 1, 1);

        NanotechPRO->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NanotechPRO);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 947, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        NanotechPRO->setMenuBar(menubar);
        statusbar = new QStatusBar(NanotechPRO);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        NanotechPRO->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);

        retranslateUi(NanotechPRO);

        stackedW_0->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NanotechPRO);
    } // setupUi

    void retranslateUi(QMainWindow *NanotechPRO)
    {
        NanotechPRO->setWindowTitle(QApplication::translate("NanotechPRO", "MainWindow", 0));
        action->setText(QApplication::translate("NanotechPRO", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        action_2->setText(QApplication::translate("NanotechPRO", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        action_3->setText(QApplication::translate("NanotechPRO", "\320\222\321\213\321\205\320\276\320\264", 0));
        lab_logo_0->setText(QString());
        label_3->setText(QApplication::translate("NanotechPRO", "\320\235\320\276\320\262\321\213\320\271 \320\277\321\200\320\276\320\265\320\272\321\202", 0));
        label_4->setText(QApplication::translate("NanotechPRO", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\321\200\320\276\320\265\320\272\321\202\320\260:", 0));
        pushB_new_pro_0->setText(QApplication::translate("NanotechPRO", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", 0));
        label->setText(QApplication::translate("NanotechPRO", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214", 0));
        la_version_1->setText(QString());
        pushB_open_0->setText(QApplication::translate("NanotechPRO", "\320\236\321\202\320\272", 0));
        pushB_save_0->setText(QApplication::translate("NanotechPRO", "\320\241\320\276\321\205", 0));
        menu->setTitle(QApplication::translate("NanotechPRO", "\320\244\320\260\320\271\320\273", 0));
    } // retranslateUi

};

namespace Ui {
    class NanotechPRO: public Ui_NanotechPRO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NANOTECHPRO_H
