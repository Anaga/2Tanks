//#include <QtWidgets/QApplication>
//#include <QtWidgets/QStyle>
#include <QApplication>
#include <QStyle>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("plastique");
    MainWindow w;
    w.show();
    return a.exec();
}
