#include "set.h"
#include "ui_set.h"
#include"mainwindow.h"
#include "TomatoConfig.h"
#include "numoftomato.h"
#include "totaltask.h"
set::set(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::set)
{
    ui->setupUi(this);

    TomatoConfig *config = TomatoConfig::instance();
    ui->worksb->setValue(config->mWorkLength / 60);
    ui->restsb->setValue(config->mRestLength / 60);
}

set::~set()
{
    delete ui;
}

void set::on_pushButton_clicked()
{
    TomatoConfig *config = TomatoConfig::instance();
    config->mWorkLength = ui->worksb->value() * 60;
    config->mRestLength = ui->restsb->value() * 60;

    //config->mWorkLength = ui->worksb->value() * 2;
    //config->mRestLength = ui->restsb->value() * 2;

    totalTask::taskTime = config->mWorkLength;

    config->save();
    MainWindow *main =new MainWindow();
    this ->hide();
    main->show();
}

void set::on_pushButton_2_clicked()
{
    MainWindow *reset = new MainWindow;
    //number = 0;
    numOfTomato::num = 0;
    this ->hide();
    reset->show();
    reset->red_show(0);
}
