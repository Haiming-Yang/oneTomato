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

    if(key == 1) {
        totalTask::taskTime *= totalTask::totalTomato;
        QSqlDatabase db = QSqlDatabase::database();
        QSqlQuery query;
        query.prepare("insert into task2(taskName,taskTag,taskTime) values(:taskName,:taskTag,:taskTime)");
        query.bindValue(":taskName",totalTask::str_taskName);
        query.bindValue(":taskTag",totalTask::str_taskTag);
        query.bindValue(":taskTime",totalTask::taskTime);

        if(!query.exec())
            qDebug()<<"fault";

        totalTask::totalTomato = 0;
        key = 0;
    }

     else {
        qDebug() << "you have submitt!";
    }
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setTable("task2");
    model->select();
    ui->tableView->setModel(model);



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
    if(key == 1) {
        totalTask::taskTime *= totalTask::totalTomato;
        QSqlDatabase db = QSqlDatabase::database();
        QSqlQuery query;
        query.prepare("insert into task2(taskName,taskTag,taskTime) values(:taskName,:taskTag,:taskTime)");
        query.bindValue(":taskName",totalTask::str_taskName);
        query.bindValue(":taskTag",totalTask::str_taskTag);
        query.bindValue(":taskTime",totalTask::taskTime);

        if(!query.exec())
            qDebug()<<"fault";

        totalTask::totalTomato = 0;
        key = 0;
    }
    else {
        qDebug() << "you have submitt!";
    }
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setTable("task2");
    model->select();
    ui->tableView->setModel(model);

}

void historicalTask::on_pushButton_4_clicked()
{
    //升序
    if(key == 1) {
        totalTask::taskTime *= totalTask::totalTomato;
        QSqlDatabase db = QSqlDatabase::database();
        QSqlQuery query;
        query.prepare("insert into task2(taskName,taskTag,taskTime) values(:taskName,:taskTag,:taskTime)");
        query.bindValue(":taskName",totalTask::str_taskName);
        query.bindValue(":taskTag",totalTask::str_taskTag);
        query.bindValue(":taskTime",totalTask::taskTime);

        if(!query.exec())
            qDebug()<<"fault";

        totalTask::totalTomato = 0;
    }
    else {
        qDebug() << "you have submitt!";
    }
        ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        model->setTable("task2");
        model->setSort(2,Qt::AscendingOrder);
        model->select();
        ui->tableView->setModel(model);

}

void historicalTask::on_pushButton_3_clicked()
{
    //降序
    if(key == 1) {
        totalTask::taskTime *= totalTask::totalTomato;
        QSqlDatabase db = QSqlDatabase::database();
        QSqlQuery query;
        query.prepare("insert into task2(taskName,taskTag,taskTime) values(:taskName,:taskTag,:taskTime)");
        query.bindValue(":taskName",totalTask::str_taskName);
        query.bindValue(":taskTag",totalTask::str_taskTag);
        query.bindValue(":taskTime",totalTask::taskTime);

        if(!query.exec())
            qDebug()<<"fault";

        totalTask::totalTomato = 0;
        key = 0;
    }

    else {
        qDebug() << "you have submitt!";
    }
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setTable("task2");
    model->setSort(2,Qt::DescendingOrder);
    model->select();
    ui->tableView->setModel(model);
}
