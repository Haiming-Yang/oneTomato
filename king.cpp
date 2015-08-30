#include "king.h"
#include "ui_king.h"
#include "achivement.h"
king::king(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::king)
{
    ui->setupUi(this);
}

king::~king()
{
    delete ui;
}

void king::on_pushButton_clicked()
{
    achivement *ach = new achivement();
    this -> hide();
    ach -> show();
}
