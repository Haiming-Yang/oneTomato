#include "sliver.h"
#include "ui_sliver.h"

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
