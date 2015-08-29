#include "mainwindow.h"
#include <QApplication>
//#include "numoftomato.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //number = 0;
    return a.exec();
}
