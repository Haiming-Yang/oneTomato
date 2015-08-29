#include "gold.h"
#include "ui_gold.h"

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
