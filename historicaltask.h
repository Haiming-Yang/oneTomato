#ifndef HISTORICALTASK_H
#define HISTORICALTASK_H
#include <QSqlTableModel>
#include <QDialog>

namespace Ui {
class historicalTask;
}

class historicalTask : public QDialog
{
    Q_OBJECT

public:
    explicit historicalTask(QWidget *parent = 0);
    ~historicalTask();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::historicalTask *ui;
    QSqlTableModel *model;
    int key = 1;
};

#endif // HISTORICALTASK_H
