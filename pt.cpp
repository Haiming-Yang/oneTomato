#include "pt.h"
#include "ui_pt.h"
#include "achivement.h"
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

void pt::on_pushButton_clicked()
{
    achivement *ach = new achivement();
    this -> hide();
    ach -> show();
}
