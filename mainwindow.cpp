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
    red=0;
        ui->red_label_1->hide();
        ui->red_label_2->hide();
        ui->red_label_3->hide();
        ui->red_label_4->hide();
        ui->red_label_5->hide();
        ui->red_label_6->hide();
        ui->red_label_7->hide();
        ui->red_label_8->hide();
        ui->red_label_9->hide();
        connect(timer,SIGNAL(timeout()),this,SLOT(red_show()));



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
    TomatoConfig *config = TomatoConfig::instance();
    count = config->mWorkLength;
    timer->start();
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
    if(count <= 0) {
        on_stoptimer_clicked();
        QSound::play(tr(":/sounds/deskbell.wav"));

        show();
    } else {
        QString str;
        str.sprintf("%02d:%02d",count / 60, count % 60);
        ui->timelabel->setText(str);

        QSound::play(tr(":/sounds/tictac.wav"));
    }
    count--;
}

void MainWindow::on_stoptimer_clicked()
{
    timer->stop();
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
    TomatoConfig *config = TomatoConfig::instance();
    count = config->mRestLength;
    timer->start();
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

void MainWindow::red_show()
{
    TomatoConfig *config = TomatoConfig::instance();
    red+=1;
    if((red/config->mWorkLength)<=9){
    switch(red/config->mWorkLength)
    {
    case 1:ui->red_label_1->show();
        break;
    case 2:ui->red_label_1->show();
           ui->red_label_2->show();
        break;
    case 3:ui->red_label_1->show();
           ui->red_label_2->show();
           ui->red_label_3->show();
        break;
    case 4:ui->red_label_1->show();
           ui->red_label_2->show();
           ui->red_label_3->show();
           ui->red_label_4->show();
        break;
    case 5:ui->red_label_1->show();
           ui->red_label_2->show();
           ui->red_label_3->show();
           ui->red_label_4->show();
           ui->red_label_5->show();
        break;
    case 6:ui->red_label_1->show();
           ui->red_label_2->show();
           ui->red_label_3->show();
           ui->red_label_4->show();
           ui->red_label_5->show();
           ui->red_label_6->show();
        break;
    case 7:ui->red_label_1->show();
           ui->red_label_2->show();
           ui->red_label_3->show();
           ui->red_label_4->show();
           ui->red_label_5->show();
           ui->red_label_6->show();
           ui->red_label_7->show();
        break;
    case 8:ui->red_label_1->show();
           ui->red_label_2->show();
           ui->red_label_3->show();
           ui->red_label_4->show();
           ui->red_label_5->show();
           ui->red_label_6->show();
           ui->red_label_7->show();
           ui->red_label_8->show();
        break;
    case 9:ui->red_label_1->show();
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
    else {
        switch((red/config->mWorkLength)%9)
        {
        case 1:ui->red_label_1->show();
            break;
        case 2:ui->red_label_1->show();
               ui->red_label_2->show();
            break;
        case 3:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->show();
            break;
        case 4:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->show();
               ui->red_label_4->show();
            break;
        case 5:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->show();
               ui->red_label_4->show();
               ui->red_label_5->show();
            break;
        case 6:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->show();
               ui->red_label_4->show();
               ui->red_label_5->show();
               ui->red_label_6->show();
            break;
        case 7:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->show();
               ui->red_label_4->show();
               ui->red_label_5->show();
               ui->red_label_6->show();
               ui->red_label_7->show();
            break;
        case 8:ui->red_label_1->show();
               ui->red_label_2->show();
               ui->red_label_3->show();
               ui->red_label_4->show();
               ui->red_label_5->show();
               ui->red_label_6->show();
               ui->red_label_7->show();
               ui->red_label_8->show();
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
