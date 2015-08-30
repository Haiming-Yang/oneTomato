#ifndef ACHIVEMENT_H
#define ACHIVEMENT_H

#include <QDialog>

namespace Ui {
class achivement;
}

class achivement : public QDialog
{
    Q_OBJECT

public:
    explicit achivement(QWidget *parent = 0);
    ~achivement();

private slots:
    void on_pushButton_clicked();

    void on_copper_bw_clicked();

    void on_copper_co_clicked();

    void on_sliver_co_clicked();

    void on_sliver_bw_clicked();

    void on_gold_co_clicked();

    void on_gold_bw_clicked();

    void on_pt_bw_clicked();

    void on_pt_co_clicked();

    void on_diamond_bw_clicked();

    void on_diamond_co_clicked();

    void on_king_bw_clicked();

    void on_king_co_clicked();

private:
    Ui::achivement *ui;
};

#endif // ACHIVEMENT_H
