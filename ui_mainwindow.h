/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Nov 19 18:21:46 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_G1In;
    QDial *dialQ1In;
    QPushButton *pushButton_Exit;
    QDial *dialQ2In;
    QLabel *label_G2In;
    QHBoxLayout *horizontalLayout_4;
    QLCDNumber *lcdNumberT1;
    QProgressBar *progressBar1;
    QProgressBar *progressBar2;
    QLCDNumber *lcdNumber_T2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_G1Out;
    QPushButton *pushButton_Q1Out;
    QLabel *label_G3a;
    QPushButton *pushButton_Q3;
    QLabel *label_G3b;
    QPushButton *pushButton_Q2Out;
    QLabel *label_G2Out;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(589, 454);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_G1In = new QLabel(centralWidget);
        label_G1In->setObjectName(QString::fromUtf8("label_G1In"));

        horizontalLayout_2->addWidget(label_G1In);

        dialQ1In = new QDial(centralWidget);
        dialQ1In->setObjectName(QString::fromUtf8("dialQ1In"));

        horizontalLayout_2->addWidget(dialQ1In);

        pushButton_Exit = new QPushButton(centralWidget);
        pushButton_Exit->setObjectName(QString::fromUtf8("pushButton_Exit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../opt/qt5/qtquick1/examples/declarative/ui-components/dialcontrol/qml/dialcontrol/content/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Exit->setIcon(icon);

        horizontalLayout_2->addWidget(pushButton_Exit);

        dialQ2In = new QDial(centralWidget);
        dialQ2In->setObjectName(QString::fromUtf8("dialQ2In"));

        horizontalLayout_2->addWidget(dialQ2In);

        label_G2In = new QLabel(centralWidget);
        label_G2In->setObjectName(QString::fromUtf8("label_G2In"));

        horizontalLayout_2->addWidget(label_G2In);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        lcdNumberT1 = new QLCDNumber(centralWidget);
        lcdNumberT1->setObjectName(QString::fromUtf8("lcdNumberT1"));

        horizontalLayout_4->addWidget(lcdNumberT1);

        progressBar1 = new QProgressBar(centralWidget);
        progressBar1->setObjectName(QString::fromUtf8("progressBar1"));
        progressBar1->setMaximum(1000);
        progressBar1->setValue(24);
        progressBar1->setOrientation(Qt::Vertical);

        horizontalLayout_4->addWidget(progressBar1);

        progressBar2 = new QProgressBar(centralWidget);
        progressBar2->setObjectName(QString::fromUtf8("progressBar2"));
        progressBar2->setMaximum(1000);
        progressBar2->setValue(24);
        progressBar2->setOrientation(Qt::Vertical);

        horizontalLayout_4->addWidget(progressBar2);

        lcdNumber_T2 = new QLCDNumber(centralWidget);
        lcdNumber_T2->setObjectName(QString::fromUtf8("lcdNumber_T2"));

        horizontalLayout_4->addWidget(lcdNumber_T2);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 3);
        horizontalLayout_4->setStretch(2, 3);
        horizontalLayout_4->setStretch(3, 2);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_G1Out = new QLabel(centralWidget);
        label_G1Out->setObjectName(QString::fromUtf8("label_G1Out"));

        horizontalLayout_3->addWidget(label_G1Out);

        pushButton_Q1Out = new QPushButton(centralWidget);
        pushButton_Q1Out->setObjectName(QString::fromUtf8("pushButton_Q1Out"));
        pushButton_Q1Out->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_Q1Out);

        label_G3a = new QLabel(centralWidget);
        label_G3a->setObjectName(QString::fromUtf8("label_G3a"));

        horizontalLayout_3->addWidget(label_G3a);

        pushButton_Q3 = new QPushButton(centralWidget);
        pushButton_Q3->setObjectName(QString::fromUtf8("pushButton_Q3"));
        pushButton_Q3->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_Q3);

        label_G3b = new QLabel(centralWidget);
        label_G3b->setObjectName(QString::fromUtf8("label_G3b"));

        horizontalLayout_3->addWidget(label_G3b);

        pushButton_Q2Out = new QPushButton(centralWidget);
        pushButton_Q2Out->setObjectName(QString::fromUtf8("pushButton_Q2Out"));
        pushButton_Q2Out->setCheckable(true);

        horizontalLayout_3->addWidget(pushButton_Q2Out);

        label_G2Out = new QLabel(centralWidget);
        label_G2Out->setObjectName(QString::fromUtf8("label_G2Out"));

        horizontalLayout_3->addWidget(label_G2Out);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 589, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(progressBar1, SIGNAL(valueChanged(int)), lcdNumberT1, SLOT(display(int)));
        QObject::connect(progressBar2, SIGNAL(valueChanged(int)), lcdNumber_T2, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "2 Tanks", 0, QApplication::UnicodeUTF8));
        label_G1In->setText(QString());
        pushButton_Exit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        label_G2In->setText(QString());
        label_G1Out->setText(QString());
        pushButton_Q1Out->setText(QApplication::translate("MainWindow", "T1 Out", 0, QApplication::UnicodeUTF8));
        label_G3a->setText(QString());
        pushButton_Q3->setText(QApplication::translate("MainWindow", "Clapan", 0, QApplication::UnicodeUTF8));
        label_G3b->setText(QString());
        pushButton_Q2Out->setText(QApplication::translate("MainWindow", "T2 Out", 0, QApplication::UnicodeUTF8));
        label_G2Out->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
