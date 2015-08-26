#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "historicaltask.h"
#include "set.h"
#include "achivement.h"
#include "currenttask.h"
#include <ui_mainwindow.h>
#include "TomatoConfig.h"
#include <QSystemTrayIcon>
#include <QAction>
#include <QMenu>
#include <QTimer>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(tick()));
    ui->startwork->setDisabled(false);
    ui->startrest->setDisabled(false);
    ui->stoptimer->setDisabled(true);
    configDlg = new set();


}
MainWindow::~MainWindow()
{
     delete configDlg;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
historicalTask * htmain = new historicalTask();
this->hide();
htmain->show();
}

void MainWindow::on_pushButton_2_clicked()
{
   set* setmain = new set();
   this -> hide();
   setmain ->show();
}

void MainWindow::on_pushButton_4_clicked()
{
  achivement* achivementmain = new achivement();
  this -> hide();
  achivementmain ->show();
}

void MainWindow::on_pushButton_5_clicked()
{
   currentTask*newui = new currentTask();
   this->hide();
   newui ->show();
}
