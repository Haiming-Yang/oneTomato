#include "copper.h"
#include "ui_copper.h"

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
