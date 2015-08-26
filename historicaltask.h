#ifndef HISTORICALTASK_H
#define HISTORICALTASK_H

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

private:
    Ui::historicalTask *ui;
};

#endif // HISTORICALTASK_H
