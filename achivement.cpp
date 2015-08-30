#include "achivement.h"
#include "ui_achivement.h"
#include "mainwindow.h"
#include "copper.h"
#include "sliver.h"
#include "gold.h"
#include "pt.h"
#include "diamond.h"
#include "king.h"
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

void achivement::on_copper_bw_clicked()
{
    copper *cop = new copper();
    this -> hide();
    cop ->show();
}

void achivement::on_copper_co_clicked()
{
    copper *cop = new copper();
    this -> hide();
    cop ->show();
}

void achivement::on_sliver_co_clicked()
{
    sliver *sli = new sliver();
    this -> hide();
    sli -> show();
}

void achivement::on_sliver_bw_clicked()
{
    sliver *sli = new sliver();
    this -> hide();
    sli -> show();
}

void achivement::on_gold_co_clicked()
{
    gold *gol = new gold();
    this -> hide();
    gol -> show();
}

void achivement::on_gold_bw_clicked()
{
    gold *gol = new gold();
    this -> hide();
    gol -> show();
}

void achivement::on_pt_bw_clicked()
{
    pt *p = new pt();
    this -> hide();
    p -> show();
}

void achivement::on_pt_co_clicked()
{
    pt *p = new pt();
    this -> hide();
    p -> show();
}

void achivement::on_diamond_bw_clicked()
{
    diamond *dia = new diamond();
    this -> hide();
    dia -> show();
}

void achivement::on_diamond_co_clicked()
{
    diamond *dia = new diamond();
    this -> hide();
    dia -> show();
}

void achivement::on_king_bw_clicked()
{
    king *kin = new king();
    this -> hide();
    kin -> show();
}

void achivement::on_king_co_clicked()
{
    king *kin = new king();
    this -> hide();
    kin -> show();
}
