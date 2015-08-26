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

private:
    Ui::achivement *ui;
};

#endif // ACHIVEMENT_H
