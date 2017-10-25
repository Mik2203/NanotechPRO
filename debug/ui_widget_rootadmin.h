/********************************************************************************
** Form generated from reading UI file 'widget_rootadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_ROOTADMIN_H
#define UI_WIDGET_ROOTADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget_rootAdmin
{
public:
    QGridLayout *gridLayout;
    QFrame *fr_block_1;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_3;
    QFrame *fr_block_4;
    QGridLayout *gridLayout_4;
    QLabel *lab_foto_0;
    QFrame *fr_block_5;
    QGridLayout *gridLayout_5;
    QFrame *frame;
    QGridLayout *gridLayout_7;
    QStackedWidget *stackedW_list_0;
    QWidget *page;
    QGridLayout *gridLayout_8;
    QPushButton *pushB_ok_0;
    QSpacerItem *verticalSpacer;
    QLabel *la_iamages_0;
    QLineEdit *lineE_0;
    QFrame *frame_2;
    QGridLayout *gridLayout_10;
    QLabel *lab_ranks_0;
    QLineEdit *lineE_rank_0;
    QFrame *line;
    QComboBox *coBox_1;
    QWidget *page_2;
    QGridLayout *gridLayout_9;
    QSpacerItem *verticalSpacer_4;
    QLabel *lab_name_0;
    QLabel *lab_name_title_0;
    QLabel *lab_rank_1;
    QLabel *lab_rank_0;
    QFrame *fr_block_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_2;
    QFrame *fr_block_3;
    QGridLayout *gridLayout_2;
    QCheckBox *checkB_1;
    QCheckBox *checkB_2;

    void setupUi(QWidget *widget_rootAdmin)
    {
        if (widget_rootAdmin->objectName().isEmpty())
            widget_rootAdmin->setObjectName(QStringLiteral("widget_rootAdmin"));
        widget_rootAdmin->resize(400, 350);
        widget_rootAdmin->setMinimumSize(QSize(400, 350));
        widget_rootAdmin->setMaximumSize(QSize(400, 350));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        widget_rootAdmin->setFont(font);
        gridLayout = new QGridLayout(widget_rootAdmin);
        gridLayout->setSpacing(1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 1, 1);
        fr_block_1 = new QFrame(widget_rootAdmin);
        fr_block_1->setObjectName(QStringLiteral("fr_block_1"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fr_block_1->sizePolicy().hasHeightForWidth());
        fr_block_1->setSizePolicy(sizePolicy);
        fr_block_1->setMinimumSize(QSize(200, 0));
        fr_block_1->setMaximumSize(QSize(200, 16777215));
        fr_block_1->setFrameShape(QFrame::StyledPanel);
        fr_block_1->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(fr_block_1);
        gridLayout_6->setSpacing(1);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(1, 1, 1, 1);
        verticalSpacer_3 = new QSpacerItem(20, 174, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 3, 1, 1, 1);

        fr_block_4 = new QFrame(fr_block_1);
        fr_block_4->setObjectName(QStringLiteral("fr_block_4"));
        fr_block_4->setMinimumSize(QSize(0, 110));
        fr_block_4->setFrameShape(QFrame::StyledPanel);
        fr_block_4->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(fr_block_4);
        gridLayout_4->setSpacing(1);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(1, 1, 1, 1);
        lab_foto_0 = new QLabel(fr_block_4);
        lab_foto_0->setObjectName(QStringLiteral("lab_foto_0"));
        lab_foto_0->setStyleSheet(QStringLiteral("image: url(:/admin/adm/not_photo_1.png);"));

        gridLayout_4->addWidget(lab_foto_0, 0, 0, 1, 1);


        gridLayout_6->addWidget(fr_block_4, 0, 1, 1, 1);

        fr_block_5 = new QFrame(fr_block_1);
        fr_block_5->setObjectName(QStringLiteral("fr_block_5"));
        fr_block_5->setFrameShape(QFrame::StyledPanel);
        fr_block_5->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(fr_block_5);
        gridLayout_5->setSpacing(1);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(1, 1, 1, 1);

        gridLayout_6->addWidget(fr_block_5, 1, 1, 1, 1);

        frame = new QFrame(fr_block_1);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 30));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame);
        gridLayout_7->setSpacing(1);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(1, 1, 1, 1);
        stackedW_list_0 = new QStackedWidget(frame);
        stackedW_list_0->setObjectName(QStringLiteral("stackedW_list_0"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_8 = new QGridLayout(page);
        gridLayout_8->setSpacing(1);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(1, 1, 1, 1);
        pushB_ok_0 = new QPushButton(page);
        pushB_ok_0->setObjectName(QStringLiteral("pushB_ok_0"));
        pushB_ok_0->setMinimumSize(QSize(21, 21));
        pushB_ok_0->setMaximumSize(QSize(21, 21));
        pushB_ok_0->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, #dadbde, stop: 1 #f6f7fa);\n"
" 	background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" 	stop: 0 #dae2ec, stop: 0.4 #d6dde7,\n"
" 	stop: 0.5 #bfd7fb, stop: 1.0 #dae3ef);\n"
"\n"
" 	border: 1px solid #cdc2bf;\n"
" 	border-radius: 10px;\n"
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

        gridLayout_8->addWidget(pushB_ok_0, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 4, 1, 1, 1);

        la_iamages_0 = new QLabel(page);
        la_iamages_0->setObjectName(QStringLiteral("la_iamages_0"));
        sizePolicy.setHeightForWidth(la_iamages_0->sizePolicy().hasHeightForWidth());
        la_iamages_0->setSizePolicy(sizePolicy);

        gridLayout_8->addWidget(la_iamages_0, 3, 0, 1, 1);

        lineE_0 = new QLineEdit(page);
        lineE_0->setObjectName(QStringLiteral("lineE_0"));

        gridLayout_8->addWidget(lineE_0, 0, 0, 1, 2);

        frame_2 = new QFrame(page);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frame_2);
        gridLayout_10->setSpacing(1);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(1, 1, 1, 1);
        lab_ranks_0 = new QLabel(frame_2);
        lab_ranks_0->setObjectName(QStringLiteral("lab_ranks_0"));
        sizePolicy.setHeightForWidth(lab_ranks_0->sizePolicy().hasHeightForWidth());
        lab_ranks_0->setSizePolicy(sizePolicy);
        lab_ranks_0->setMinimumSize(QSize(0, 23));
        lab_ranks_0->setMaximumSize(QSize(16777215, 23));

        gridLayout_10->addWidget(lab_ranks_0, 0, 0, 1, 1);

        lineE_rank_0 = new QLineEdit(frame_2);
        lineE_rank_0->setObjectName(QStringLiteral("lineE_rank_0"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineE_rank_0->sizePolicy().hasHeightForWidth());
        lineE_rank_0->setSizePolicy(sizePolicy1);
        lineE_rank_0->setMinimumSize(QSize(91, 0));
        lineE_rank_0->setMaximumSize(QSize(91, 16777215));

        gridLayout_10->addWidget(lineE_rank_0, 0, 1, 1, 1);


        gridLayout_8->addWidget(frame_2, 1, 0, 1, 2);

        line = new QFrame(page);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line, 2, 0, 1, 2);

        coBox_1 = new QComboBox(page);
        coBox_1->setObjectName(QStringLiteral("coBox_1"));
        coBox_1->setMinimumContentsLength(0);

        gridLayout_8->addWidget(coBox_1, 3, 1, 1, 1);

        stackedW_list_0->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_9 = new QGridLayout(page_2);
        gridLayout_9->setSpacing(1);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(1, 1, 1, 1);
        verticalSpacer_4 = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_4, 5, 0, 1, 1);

        lab_name_0 = new QLabel(page_2);
        lab_name_0->setObjectName(QStringLiteral("lab_name_0"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lab_name_0->sizePolicy().hasHeightForWidth());
        lab_name_0->setSizePolicy(sizePolicy2);
        lab_name_0->setMinimumSize(QSize(0, 23));
        lab_name_0->setMaximumSize(QSize(16777215, 23));

        gridLayout_9->addWidget(lab_name_0, 1, 0, 1, 2);

        lab_name_title_0 = new QLabel(page_2);
        lab_name_title_0->setObjectName(QStringLiteral("lab_name_title_0"));
        lab_name_title_0->setMinimumSize(QSize(0, 23));
        lab_name_title_0->setMaximumSize(QSize(16777215, 23));
        lab_name_title_0->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(lab_name_title_0, 0, 0, 1, 2);

        lab_rank_1 = new QLabel(page_2);
        lab_rank_1->setObjectName(QStringLiteral("lab_rank_1"));
        lab_rank_1->setMinimumSize(QSize(0, 23));
        lab_rank_1->setMaximumSize(QSize(16777215, 23));

        gridLayout_9->addWidget(lab_rank_1, 2, 0, 1, 1);

        lab_rank_0 = new QLabel(page_2);
        lab_rank_0->setObjectName(QStringLiteral("lab_rank_0"));
        lab_rank_0->setMinimumSize(QSize(0, 23));
        lab_rank_0->setMaximumSize(QSize(16777215, 23));

        gridLayout_9->addWidget(lab_rank_0, 2, 1, 1, 1);

        stackedW_list_0->addWidget(page_2);

        gridLayout_7->addWidget(stackedW_list_0, 0, 1, 1, 1);


        gridLayout_6->addWidget(frame, 2, 1, 1, 1);


        gridLayout->addWidget(fr_block_1, 0, 0, 4, 1);

        fr_block_2 = new QFrame(widget_rootAdmin);
        fr_block_2->setObjectName(QStringLiteral("fr_block_2"));
        fr_block_2->setMinimumSize(QSize(0, 50));
        fr_block_2->setFrameShape(QFrame::StyledPanel);
        fr_block_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(fr_block_2);
        gridLayout_3->setSpacing(1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(1, 1, 1, 1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 3, 0, 1, 1);

        fr_block_3 = new QFrame(fr_block_2);
        fr_block_3->setObjectName(QStringLiteral("fr_block_3"));
        fr_block_3->setMinimumSize(QSize(0, 50));
        fr_block_3->setFrameShape(QFrame::StyledPanel);
        fr_block_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(fr_block_3);
        gridLayout_2->setSpacing(1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        checkB_1 = new QCheckBox(fr_block_3);
        checkB_1->setObjectName(QStringLiteral("checkB_1"));

        gridLayout_2->addWidget(checkB_1, 0, 0, 1, 1);

        checkB_2 = new QCheckBox(fr_block_3);
        checkB_2->setObjectName(QStringLiteral("checkB_2"));

        gridLayout_2->addWidget(checkB_2, 1, 0, 1, 1);


        gridLayout_3->addWidget(fr_block_3, 0, 0, 1, 1);


        gridLayout->addWidget(fr_block_2, 0, 1, 4, 1);


        retranslateUi(widget_rootAdmin);

        stackedW_list_0->setCurrentIndex(0);
        coBox_1->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(widget_rootAdmin);
    } // setupUi

    void retranslateUi(QWidget *widget_rootAdmin)
    {
        widget_rootAdmin->setWindowTitle(QApplication::translate("widget_rootAdmin", "Form", 0));
        lab_foto_0->setText(QString());
        pushB_ok_0->setText(QString());
        la_iamages_0->setText(QApplication::translate("widget_rootAdmin", "\320\244\320\276\321\202\320\276:", 0));
        lineE_0->setText(QString());
        lab_ranks_0->setText(QApplication::translate("widget_rootAdmin", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\277\321\200\320\260\320\262\320\260:", 0));
        lab_name_0->setText(QApplication::translate("widget_rootAdmin", "\320\230\320\274\321\217!", 0));
        lab_name_title_0->setText(QApplication::translate("widget_rootAdmin", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214!", 0));
        lab_rank_1->setText(QApplication::translate("widget_rootAdmin", "\320\237\321\200\320\260\320\262\320\260 \320\264\320\276\321\201\321\202\321\203\320\277\320\260:", 0));
        lab_rank_0->setText(QApplication::translate("widget_rootAdmin", "[]", 0));
        checkB_1->setText(QApplication::translate("widget_rootAdmin", "\321\200\320\265\320\266\320\270\320\274 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\260", 0));
        checkB_2->setText(QApplication::translate("widget_rootAdmin", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\270\320\274\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class widget_rootAdmin: public Ui_widget_rootAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_ROOTADMIN_H
