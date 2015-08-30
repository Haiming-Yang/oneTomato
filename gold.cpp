#include "gold.h"
#include "ui_gold.h"
#include "achivement.h"

gold::gold(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gold)
{
    ui->setupUi(this);
}

gold::~gold()
{
    delete ui;
}

void gold::on_pushButton_clicked()
{
    achivement *ach = new achivement();
    this -> hide();
    ach -> show();
}
