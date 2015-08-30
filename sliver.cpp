#include "sliver.h"
#include "ui_sliver.h"
#include "achivement.h"
sliver::sliver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sliver)
{
    ui->setupUi(this);
}

sliver::~sliver()
{
    delete ui;
}

void sliver::on_pushButton_clicked()
{
    achivement *ach = new achivement();
    this -> hide();
    ach -> show();
}
