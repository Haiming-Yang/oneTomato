#include "set.h"
#include "ui_set.h"
#include"mainwindow.h"
set::set(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::set)
{
    ui->setupUi(this);
}

set::~set()
{
    delete ui;
}

void set::on_pushButton_clicked()
{
   MainWindow *main =new MainWindow();
   this ->hide();
   main->show();
}
