#include "achivement.h"
#include "ui_achivement.h"
#include "mainwindow.h"
achivement::achivement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::achivement)
{
    ui->setupUi(this);
}

achivement::~achivement()
{
    delete ui;
}

void achivement::on_pushButton_clicked()
{
    MainWindow *main = new MainWindow();
    this -> hide();
    main -> show();
}
