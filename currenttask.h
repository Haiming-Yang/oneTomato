#ifndef CURRENTTASK_H
#define CURRENTTASK_H

#include <QDialog>

namespace Ui {
class currentTask;
}

class currentTask : public QDialog
{
    Q_OBJECT

public:
    explicit currentTask(QWidget *parent = 0);
    ~currentTask();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::currentTask *ui;
};

#endif // CURRENTTASK_H
