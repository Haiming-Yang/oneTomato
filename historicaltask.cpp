#include "historicaltask.h"
#include "ui_historicaltask.h"
#include"mainwindow.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QLineEdit>
#include <QObject>
#include <QDebug>
#include "totaltask.h"

historicalTask::historicalTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::historicalTask)
{
    model = new QSqlTableModel(this);

    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query;
    if(totalTask::key == 1) {
        totalTask::taskTime *= totalTask::totalTomato;

        query.prepare("insert into task3(Name,Tag,Time,Tomato) values(:Name,:Tag,:Time,:Tomato)");
        query.bindValue(":Name",totalTask::str_taskName);
        query.bindValue(":Tag",totalTask::str_taskTag);
        query.bindValue(":Time",totalTask::taskTime);
        query.bindValue(":Tomato",totalTask::totalTomato);
        if(!query.exec())
            qDebug()<<"fault";

        totalTask::totalTomato = 0;
        totalTask::key= 0;
    }

     else {
        qDebug() << "you have submit!";
    }
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setTable("task3");
    model->select();
    ui->tableView->setModel(model);

    /*query.exec("select * from task3");
    while(query.next()) {
        totalTask::totalTotalTomato += totalTask::totalTomato;
        //totalTask::totalTotalTomato = 5000;
    }*/


}

historicalTask::~historicalTask()
{
    delete ui;
}

void historicalTask::on_pushButton_clicked()
{
MainWindow *main = new MainWindow();
this -> hide();
main -> show();

}

void historicalTask::on_pushButton_2_clicked()
{
    if(totalTask::key == 1) {
        totalTask::taskTime *= totalTask::totalTomato;
        QSqlDatabase db = QSqlDatabase::database();
        QSqlQuery query;
        query.prepare("insert into task3(Name,Tag,Time,Tomato) values(:Name,:Tag,:Time,:Tomato)");
        query.bindValue(":Name",totalTask::str_taskName);
        query.bindValue(":Tag",totalTask::str_taskTag);
        query.bindValue(":Time",totalTask::taskTime);
        query.bindValue(":Tomato",totalTask::totalTomato);

        if(!query.exec())
            qDebug()<<"fault";
        totalTask::totalTomato = 0;
        totalTask::key = 0;
    }
    else {
        qDebug() << "you have submit!";
    }
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setTable("task3");
    model->select();
    ui->tableView->setModel(model);

}

void historicalTask::on_pushButton_4_clicked()
{
    //升序
    if(totalTask::key == 1) {
        totalTask::taskTime *= totalTask::totalTomato;
        QSqlDatabase db = QSqlDatabase::database();
        QSqlQuery query;
        query.prepare("insert into task3(Name,Tag,Time,Tomato) values(:Name,:Tag,:Time,:Tomato)");
        query.bindValue(":Name",totalTask::str_taskName);
        query.bindValue(":Tag",totalTask::str_taskTag);
        query.bindValue(":Time",totalTask::taskTime);
        query.bindValue(":Tomato",totalTask::totalTomato);

        if(!query.exec())
            qDebug()<<"fault";
        totalTask::key = 0;
        totalTask::totalTomato = 0;
    }
    else {
        qDebug() << "you have submit!";
    }
        ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        model->setTable("task3");
        model->setSort(2,Qt::AscendingOrder);
        model->select();
        ui->tableView->setModel(model);

}

void historicalTask::on_pushButton_3_clicked()
{
    //降序
    if(totalTask::key== 1) {
        totalTask::taskTime *= totalTask::totalTomato;
        QSqlDatabase db = QSqlDatabase::database();
        QSqlQuery query;
        query.prepare("insert into task3(Name,Tag,Time,Tomato) values(:Name,:Tag,:Time,:Tomato)");
        query.bindValue(":Name",totalTask::str_taskName);
        query.bindValue(":Tag",totalTask::str_taskTag);
        query.bindValue(":Time",totalTask::taskTime);
        query.bindValue(":Tomato",totalTask::totalTomato);
        if(!query.exec())
            qDebug()<<"fault";

        totalTask::totalTomato = 0;
        totalTask::key = 0;
    }

    else {
        qDebug() << "you have submit!";
    }
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setTable("task3");
    model->setSort(2,Qt::DescendingOrder);
    model->select();
    ui->tableView->setModel(model);
}
