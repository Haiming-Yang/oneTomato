#include "currenttask.h"
#include "ui_currenttask.h"
#include"newtask.h"
#include "mainwindow.h"
currentTask::currentTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::currentTask)
{
    ui->setupUi(this);
}

currentTask::~currentTask()
{
    delete ui;
}

void currentTask::on_pushButton_3_clicked()
{
    newTask * newui = new newTask();
    this ->hide();
    newui ->show();
}

void currentTask::on_pushButton_clicked()
{
    MainWindow *home = new MainWindow();
    this->hide();
    home->show();
}
