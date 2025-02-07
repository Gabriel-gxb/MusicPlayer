/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_pic;
    QPushButton *pushButton_add;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_pic;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_info;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSlider;
    QLabel *label_time;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_front;
    QPushButton *pushButton_start;
    QPushButton *pushButton_back;
    QPushButton *pushButton_mode;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QSlider *verticalSlider;
    QPushButton *pushButton_volume;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(640, 480);
        MainWindow->setMinimumSize(QSize(640, 480));
        MainWindow->setMaximumSize(QSize(1000, 700));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/D:/Apps/qIcon/song.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(300, 500));
        groupBox->setAcceptDrops(true);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName("listWidget");
        listWidget->setMaximumSize(QSize(16777215, 16777215));
        listWidget->setAcceptDrops(true);
        listWidget->setStyleSheet(QString::fromUtf8("*{\n"
"	background-color: transparent\n"
"}"));
        listWidget->setFrameShape(QFrame::Shape::NoFrame);
        listWidget->setDragEnabled(true);
        listWidget->setDragDropMode(QAbstractItemView::DragDropMode::DragDrop);
        listWidget->setDefaultDropAction(Qt::DropAction::MoveAction);

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(0, 8);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_pic = new QVBoxLayout();
        verticalLayout_pic->setObjectName("verticalLayout_pic");
        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setStyleSheet(QString::fromUtf8("*{\n"
"	border: none;\n"
"}"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ListAdd));
        pushButton_add->setIcon(icon1);

        verticalLayout_pic->addWidget(pushButton_add);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(110, 130));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label_pic = new QLabel(widget);
        label_pic->setObjectName("label_pic");
        label_pic->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_pic, 0, 0, 1, 1);


        verticalLayout_pic->addWidget(widget);

        verticalLayout_pic->setStretch(0, 1);

        horizontalLayout_4->addLayout(verticalLayout_pic);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_info = new QLabel(centralwidget);
        label_info->setObjectName("label_info");
        QFont font;
        font.setPointSize(12);
        label_info->setFont(font);
        label_info->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        verticalLayout_3->addWidget(label_info);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider);

        label_time = new QLabel(centralwidget);
        label_time->setObjectName("label_time");
        label_time->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(label_time);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_front = new QPushButton(centralwidget);
        pushButton_front->setObjectName("pushButton_front");
        pushButton_front->setEnabled(false);
        pushButton_front->setStyleSheet(QString::fromUtf8("*{\n"
"	border: none;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/D:/Apps/qIcon/previous.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_front->setIcon(icon2);
        pushButton_front->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(pushButton_front);

        pushButton_start = new QPushButton(centralwidget);
        pushButton_start->setObjectName("pushButton_start");
        pushButton_start->setEnabled(false);
        pushButton_start->setStyleSheet(QString::fromUtf8("*{\n"
"	border: none;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/D:/Apps/qIcon/play.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_start->setIcon(icon3);
        pushButton_start->setIconSize(QSize(16, 16));
        pushButton_start->setCheckable(true);
        pushButton_start->setChecked(true);

        horizontalLayout_2->addWidget(pushButton_start);

        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setEnabled(false);
        pushButton_back->setStyleSheet(QString::fromUtf8("*{\n"
"	border: none;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/D:/Apps/qIcon/next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_back->setIcon(icon4);
        pushButton_back->setIconSize(QSize(16, 16));

        horizontalLayout_2->addWidget(pushButton_back);

        pushButton_mode = new QPushButton(centralwidget);
        pushButton_mode->setObjectName("pushButton_mode");
        pushButton_mode->setEnabled(true);
        pushButton_mode->setStyleSheet(QString::fromUtf8("*{\n"
"	border: none;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/D:/Apps/qIcon/\345\210\227\350\241\250\345\276\252\347\216\257.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_mode->setIcon(icon5);
        pushButton_mode->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_mode);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);

        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_3->setStretch(0, 2);
        verticalLayout_3->setStretch(1, 2);
        verticalLayout_3->setStretch(3, 1);

        horizontalLayout_4->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName("verticalSlider");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalSlider->sizePolicy().hasHeightForWidth());
        verticalSlider->setSizePolicy(sizePolicy1);
        verticalSlider->setMinimumSize(QSize(0, 40));
        verticalSlider->setMaximumSize(QSize(16777215, 70));
        verticalSlider->setMaximum(100);
        verticalSlider->setValue(50);
        verticalSlider->setOrientation(Qt::Orientation::Vertical);

        verticalLayout->addWidget(verticalSlider);

        pushButton_volume = new QPushButton(centralwidget);
        pushButton_volume->setObjectName("pushButton_volume");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_volume->sizePolicy().hasHeightForWidth());
        pushButton_volume->setSizePolicy(sizePolicy2);
        pushButton_volume->setStyleSheet(QString::fromUtf8("*{\n"
"	border: none;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/D:/Apps/qIcon/\351\237\263\351\207\217.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_volume->setIcon(icon6);
        pushButton_volume->setCheckable(true);

        verticalLayout->addWidget(pushButton_volume);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);

        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 5);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalLayout_4->setStretch(0, 5);
        verticalLayout_4->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "music player", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\210\221\347\232\204\346\255\214\345\215\225\357\274\232", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\233\264\345\244\232...", nullptr));
        label_pic->setText(QString());
        label_info->setText(QCoreApplication::translate("MainWindow", "music", nullptr));
        label_time->setText(QCoreApplication::translate("MainWindow", "00:00/00:00", nullptr));
        pushButton_front->setText(QString());
        pushButton_start->setText(QString());
        pushButton_back->setText(QString());
        pushButton_mode->setText(QString());
        pushButton_volume->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
