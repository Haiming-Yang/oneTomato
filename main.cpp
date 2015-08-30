#include "mainwindow.h"
#include <QApplication>
//#include "numoftomato.h"
#include <QSqlDatabase>
#include <QSqlQuery>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("tomato.db");
    db.open();
    QSqlQuery query;
    query.exec("create table task3(taskName QString, taskTag QString, taskTime int, taskTomato int)");

    MainWindow w;
    w.show();

    //number = 0;
    return a.exec();
}
