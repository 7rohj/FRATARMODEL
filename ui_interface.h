/********************************************************************************
** Form generated from reading UI file 'interfacep25828.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef INTERFACEP25828_H
#define INTERFACEP25828_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *leftMenuContainer;
    QHBoxLayout *horizontalLayout_2;
    QWidget *leftMenuSubContainer;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *menuBtn;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *honBtn;
    QPushButton *startBtn;
    QPushButton *attatchfile1;
    QPushButton *attatchfile2;
    QPushButton *attatchfile3;
    QSpacerItem *verticalSpacer;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *informationBtn;
    QWidget *mainbodycontainer;
    QPlainTextEdit *filepath;
    QPlainTextEdit *QTextEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 471);
        MainWindow->setStyleSheet(QLatin1String("*{\n"
"	border: none;\n"
"	background-color: transparent;\n"
"	background: transparent;\n"
"	padding: 0;\n"
"	margin: 0;\n"
"	color: #fff;\n"
"}\n"
"#centralwidget{\n"
"	background-color: #1f232a;\n"
"}\n"
"#leftMenuSubContainer{\n"
"	background-color: #16191d;\n"
"}\n"
"#leftMenuSubContainer QPushButton{\n"
"	text-align: left;\n"
"	padding: 5px 10px;\n"
"	border-top-left-radius: 10px;\n"
"	border-bottom-left-radius: 10px;\n"
"}\n"
"#centerMenuSubContainer, #rightMenuSubContainer{\n"
"	background-color: #2c313c;\n"
"}\n"
"#frame_4, #frame_8, #popupNotificationSubContainer{\n"
"	background-color: #16191d;\n"
"	border-radius: 2px;\n"
"}\n"
"#headerContainer, #footerContainter{\n"
"	background-color: #2c313c;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        leftMenuContainer = new QWidget(centralwidget);
        leftMenuContainer->setObjectName(QStringLiteral("leftMenuContainer"));
        horizontalLayout_2 = new QHBoxLayout(leftMenuContainer);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        leftMenuSubContainer = new QWidget(leftMenuContainer);
        leftMenuSubContainer->setObjectName(QStringLiteral("leftMenuSubContainer"));
        verticalLayout = new QVBoxLayout(leftMenuSubContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(leftMenuSubContainer);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        menuBtn = new QPushButton(frame);
        menuBtn->setObjectName(QStringLiteral("menuBtn"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/Icons/align-justify.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuBtn->setIcon(icon);
        menuBtn->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(menuBtn);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(leftMenuSubContainer);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        honBtn = new QPushButton(frame_2);
        honBtn->setObjectName(QStringLiteral("honBtn"));
        honBtn->setStyleSheet(QStringLiteral("background-color:#1f232a;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/Icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        honBtn->setIcon(icon1);
        honBtn->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(honBtn);

        startBtn = new QPushButton(frame_2);
        startBtn->setObjectName(QStringLiteral("startBtn"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/Icons/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        startBtn->setIcon(icon2);
        startBtn->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(startBtn);

        attatchfile1 = new QPushButton(frame_2);
        attatchfile1->setObjectName(QStringLiteral("attatchfile1"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/Icons/file-plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        attatchfile1->setIcon(icon3);
        attatchfile1->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(attatchfile1);

        attatchfile2 = new QPushButton(frame_2);
        attatchfile2->setObjectName(QStringLiteral("attatchfile2"));
        attatchfile2->setIcon(icon3);
        attatchfile2->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(attatchfile2);

        attatchfile3 = new QPushButton(frame_2);
        attatchfile3->setObjectName(QStringLiteral("attatchfile3"));
        attatchfile3->setIcon(icon3);
        attatchfile3->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(attatchfile3);


        verticalLayout->addWidget(frame_2, 0, Qt::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        frame_3 = new QFrame(leftMenuSubContainer);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        informationBtn = new QPushButton(frame_3);
        informationBtn->setObjectName(QStringLiteral("informationBtn"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/Icons/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        informationBtn->setIcon(icon4);
        informationBtn->setIconSize(QSize(24, 24));

        verticalLayout_3->addWidget(informationBtn);


        verticalLayout->addWidget(frame_3, 0, Qt::AlignBottom);


        horizontalLayout_2->addWidget(leftMenuSubContainer);


        horizontalLayout->addWidget(leftMenuContainer, 0, Qt::AlignLeft);

        mainbodycontainer = new QWidget(centralwidget);
        mainbodycontainer->setObjectName(QStringLiteral("mainbodycontainer"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainbodycontainer->sizePolicy().hasHeightForWidth());
        mainbodycontainer->setSizePolicy(sizePolicy1);
        filepath = new QPlainTextEdit(mainbodycontainer);
        filepath->setObjectName(QStringLiteral("filepath"));
        filepath->setGeometry(QRect(40, 30, 431, 31));
        QTextEdit = new QPlainTextEdit(mainbodycontainer);
        QTextEdit->setObjectName(QStringLiteral("QTextEdit"));
        QTextEdit->setGeometry(QRect(40, 80, 611, 351));

        horizontalLayout->addWidget(mainbodycontainer, 0, Qt::AlignTop);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        menuBtn->setText(QString());
        honBtn->setText(QApplication::translate("MainWindow", "\355\231\210", Q_NULLPTR));
        startBtn->setText(QApplication::translate("MainWindow", "\354\213\244\355\226\211\355\225\230\352\270\260", Q_NULLPTR));
        attatchfile1->setText(QApplication::translate("MainWindow", "\355\214\214\354\235\274\354\262\250\353\266\200", Q_NULLPTR));
        attatchfile2->setText(QApplication::translate("MainWindow", "\355\214\214\354\235\274\354\262\250\353\266\200", Q_NULLPTR));
        attatchfile3->setText(QApplication::translate("MainWindow", "\355\214\214\354\235\274\354\262\250\353\266\200", Q_NULLPTR));
        informationBtn->setText(QApplication::translate("MainWindow", "\354\240\225\353\263\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // INTERFACEP25828_H
