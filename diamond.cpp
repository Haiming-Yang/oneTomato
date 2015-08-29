#include "diamond.h"
#include "ui_diamond.h"

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
