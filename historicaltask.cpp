#include "historicaltask.h"
#include "ui_historicaltask.h"
#include"mainwindow.h"
historicalTask::historicalTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::historicalTask)
{
    ui->setupUi(this);
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
