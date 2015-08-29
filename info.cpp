#include "info.h"
#include "ui_info.h"
#include"mainwindow.h"

info::info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::info)
{
    ui->setupUi(this);

}

info::~info()
{
    delete ui;
}

void info::on_pushButton_clicked()
{
    MainWindow *home = new MainWindow();
    this->hide();
    home->show();
}
