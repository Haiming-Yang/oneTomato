#include "newtask.h"
#include "ui_newtask.h"
#include"currenttask.h"
#include "totaltask.h"
newTask::newTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newTask)
{
    ui->setupUi(this);
}

newTask::~newTask()
{
    delete ui;
}

void newTask::on_pushButton_clicked()
{
    currentTask *ui = new currentTask();
    this->hide();
    ui->show();
}

void newTask::on_pushButton_2_clicked()
{
    totalTask::str_taskName = ui->lineEdit->text();
    totalTask::str_taskTag = ui->lineEdit_2->text();
}
