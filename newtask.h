#ifndef NEWTASK_H
#define NEWTASK_H

#include <QDialog>

namespace Ui {
class newTask;
}

class newTask : public QDialog
{
    Q_OBJECT

public:
    explicit newTask(QWidget *parent = 0);
    ~newTask();

private slots:


    void on_pushButton_2_clicked();

private:
    Ui::newTask *ui;
};

#endif // NEWTASK_H
