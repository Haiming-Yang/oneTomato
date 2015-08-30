#include "diamond.h"
#include "ui_diamond.h"
#include "achivement.h"
diamond::diamond(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::diamond)
{
    ui->setupUi(this);
}

diamond::~diamond()
{
    delete ui;
}

void diamond::on_pushButton_clicked()
{
    achivement *ach = new achivement();
    this -> hide();
    ach -> show();
}
