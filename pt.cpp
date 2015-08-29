#include "pt.h"
#include "ui_pt.h"

pt::pt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pt)
{
    ui->setupUi(this);
}

pt::~pt()
{
    delete ui;
}
