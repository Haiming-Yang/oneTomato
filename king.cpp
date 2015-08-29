#include "king.h"
#include "ui_king.h"

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
