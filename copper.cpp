#include "copper.h"
#include "ui_copper.h"
#include "achivement.h"

copper::copper(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::copper)
{
    ui->setupUi(this);
}

copper::~copper()
{
    delete ui;
}

void copper::on_pushButton_clicked()
{
    achivement *ach = new achivement();
    this -> hide();
    ach -> show();
}
