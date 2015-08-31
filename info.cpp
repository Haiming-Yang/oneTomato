#include "info.h"
#include "ui_info.h"
#include"mainwindow.h"
#include <QDesktopServices>

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

void info::on_pushButton_3_clicked()
{
    QDesktopServices::openUrl(QUrl("http://yanghaiming.com/"));
}

void info::on_pushButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl("http://yanghaiming.com/"));
}

void info::on_pushButton_5_clicked()
{
  QDesktopServices::openUrl(QUrl("https://github.com/Haiming-Yang/oneTomato"));
}

void info::on_pushButton_4_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/Haiming-Yang/oneTomato"));
}

void info::on_pushButton_7_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.gnu.org/licenses/lgpl-3.0.html"));
}

void info::on_pushButton_6_clicked()
{
     QDesktopServices::openUrl(QUrl("http://www.gnu.org/licenses/lgpl-3.0.html"));
}
