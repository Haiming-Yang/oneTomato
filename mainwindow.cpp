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
#include <QSound>
#include"numoftomato.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
   //  restOrNot = false;
    timer = new QTimer(this);
    timer->setInterval(1000);
    timer2 = new QTimer(this);
    timer2->setInterval(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(tick()));


    connect(timer2, SIGNAL(timeout()), this, SLOT(tick_rest()));
    ui->startwork->setDisabled(false);
    ui->startrest->setDisabled(false);
    ui->stoptimer->setDisabled(true);
    configDlg = new set();

    red_show();
  //  connect(timer,SIGNAL(timeout()),this,SLOT(red_show()));



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

void MainWindow::on_startwork_clicked()
{
   // restOrNot = false;
    timer->start();
    TomatoConfig *config = TomatoConfig::instance();
    count1 = config->mWorkLength;

    tick();

    QSound::play(tr(":/sounds/crank.wav"));

    ui->startwork->setDisabled(true);
    ui->startrest->setDisabled(true);
    ui->stoptimer->setDisabled(false);
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_4->hide();
    ui->pushButton_5->setDisabled(true);
}

void MainWindow::tick()
{
    if(count1 <= 0) {
        number +=1;
        on_stoptimer_clicked();
        QSound::play(tr(":/sounds/deskbell.wav"));

        red_show();
        show();
       // timer->stop();
    } else {
        //timer->start();
        QString str;
        str.sprintf("%02d:%02d",count1 / 60, count1 % 60);
        ui->timelabel->setText(str);

        QSound::play(tr(":/sounds/tictac.wav"));
    }
    count1--;
}

void MainWindow::tick_rest()
{
    if(count2 <= 0) {

        on_stoptimer_clicked();
        QSound::play(tr(":/sounds/deskbell.wav"));
        //timer->stop();


    } else {
        //timer->start();
        QString str;
        str.sprintf("%02d:%02d",count2 / 60, count2 % 60);
        ui->timelabel->setText(str);

        QSound::play(tr(":/sounds/tictac.wav"));
    }
    count2--;
}
void MainWindow::on_stoptimer_clicked()
{
    timer->stop();
    timer2->stop();
    ui->timelabel->setText(tr("00:00"));
    ui->startwork->setDisabled(false);
    ui->startrest->setDisabled(false);
    ui->stoptimer->setDisabled(true);
    ui->pushButton->show();
    ui->pushButton_2->show();
    ui->pushButton_4->show();
    ui->pushButton_5->setDisabled(false);
}

void MainWindow::on_startrest_clicked()
{
   // restOrNot = true;
    timer->stop();
    timer2->start();
    TomatoConfig *config = TomatoConfig::instance();
    count2 = config->mRestLength;
    tick_rest();

    QSound::play(tr(":/sounds/crank.wav"));

    ui->startwork->setDisabled(true);
    ui->startrest->setDisabled(true);
    ui->stoptimer->setDisabled(false);
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_4->hide();
    ui->pushButton_5->setDisabled(true);
}

void MainWindow::red_show()
{
    /*TomatoConfig *config = TomatoConfig::instance();
    red+=1;
    number = red/config->mWorkLength;*/
   // while (restOrNot == false) {


    if(number<=9){
    switch(number)
    {
    case 0:ui->red_label_1->hide();
        ui->red_label_2->hide();
        ui->red_label_3->hide();
        ui->red_label_4->hide();
        ui->red_label_5->hide();
        ui->red_label_6->hide();
        ui->red_label_7->hide();
        ui->red_label_8->hide();
        ui->red_label_9->hide();
        break;
    case 1:ui->red_label_1->show();
        ui->red_label_2->hide();
        ui->red_label_3->hide();
        ui->red_label_4->hide();
        ui->red_label_5->hide();
        ui->red_label_6->hide();
        ui->red_label_7->hide();
        ui->red_label_8->hide();
        ui->red_label_9->hide();
        break;
    case 2:ui->red_label_1->show();
           ui->red_label_2->show();
           ui->red_label_3->hide();
           ui->red_label_4->hide();
           ui->red_label_5->hide();
           ui->red_label_6->hide();
           ui->red_label_7->hide();
           ui->red_label_8->hide();
           ui->red_label_9->hide();
        break;
    case 3:ui->red_label_1->show();
           ui->red_label_2->show();
           ui->red_label_3->show();
           ui->red_label_4->hide();
           ui->red_label_5->hide();
           ui->red_label_6->hide();
           ui->red_label_7->hide();
           ui->red_label_8->hide();
           ui->red_label_9->hide();
        break;
    case 4:ui->red_label_1->show();
           ui->red_label_2->show();
           ui->red_label_3->show();
           ui->red_label_4->show();
           ui->red_label_5->hide();
           ui->red_label_6->hide();
           ui->red_label_7->hide();
           ui->red_label_8->hide();
           ui->red_label_9->hide();
        break;
    case 5:ui->red_label_1->show();
           ui->red_label_2->show();
           ui->red_label_3->show();
           ui->red_label_4->show();
           ui->red_label_5->show();
           ui->red_label_6->hide();
           ui->red_label_7->hide();
           ui->red_label_8->hide();
           ui->red_label_9->hide();
        break;
    case 6:ui->red_label_1->show();
           ui->red_label_2->show();
           ui->red_label_3->show();
           ui->red_label_4->show();
           ui->red_label_5->show();
           ui->red_label_6->show();
           ui->red_label_7->hide();
           ui->red_label_8->hide();
           ui->red_label_9->hide();
        break;
    case 7:ui->red_label_1->show();
           ui->red_label_2->show();
           ui->red_label_3->show();
           ui->red_label_4->show();
           ui->red_label_5->show();
           ui->red_label_6->show();
           ui->red_label_7->show();
           ui->red_label_8->hide();
           ui->red_label_9->hide();
        break;
    case 8:ui->red_label_1->show();
           ui->red_label_2->show();
           ui->red_label_3->show();
           ui->red_label_4->show();
           ui->red_label_5->show();
           ui->red_label_6->show();
           ui->red_label_7->show();
           ui->red_label_8->show();
           ui->red_label_9->hide();
        break;

    }
    }
    else {
        switch(number%9)
        {
        case 1:ui->red_label_1->show();
            ui->red_label_2->hide();
            ui->red_label_3->hide();
            ui->red_label_4->hide();
            ui->red_label_5->hide();
            ui->red_label_6->hide();
            ui->red_label_7->hide();
            ui->red_label_8->hide();
            ui->red_label_9->hide();
            break;
        case 2:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->hide();
               ui->red_label_4->hide();
               ui->red_label_5->hide();
               ui->red_label_6->hide();
               ui->red_label_7->hide();
               ui->red_label_8->hide();
               ui->red_label_9->hide();
            break;
        case 3:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->show();
               ui->red_label_4->hide();
               ui->red_label_5->hide();
               ui->red_label_6->hide();
               ui->red_label_7->hide();
               ui->red_label_8->hide();
               ui->red_label_9->hide();
            break;
        case 4:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->show();
               ui->red_label_4->show();
               ui->red_label_5->hide();
               ui->red_label_6->hide();
               ui->red_label_7->hide();
               ui->red_label_8->hide();
               ui->red_label_9->hide();
            break;
        case 5:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->show();
               ui->red_label_4->show();
               ui->red_label_5->show();
               ui->red_label_6->hide();
               ui->red_label_7->hide();
               ui->red_label_8->hide();
               ui->red_label_9->hide();
            break;
        case 6:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->show();
               ui->red_label_4->show();
               ui->red_label_5->show();
               ui->red_label_6->show();
               ui->red_label_7->hide();
               ui->red_label_8->hide();
               ui->red_label_9->hide();
            break;
        case 7:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->show();
               ui->red_label_4->show();
               ui->red_label_5->show();
               ui->red_label_6->show();
               ui->red_label_7->show();
               ui->red_label_8->hide();
               ui->red_label_9->hide();
            break;
        case 8:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->show();
               ui->red_label_4->show();
               ui->red_label_5->show();
               ui->red_label_6->show();
               ui->red_label_7->show();
               ui->red_label_8->show();
               ui->red_label_9->hide();
            break;
        case 0:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->show();
               ui->red_label_4->show();
               ui->red_label_5->show();
               ui->red_label_6->show();
               ui->red_label_7->show();
               ui->red_label_8->show();
               ui->red_label_9->show();
            break;
        default:
            break;
    }
    }
}
//}
