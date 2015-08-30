#ifndef GOLD_H
#define GOLD_H

#include <QDialog>

namespace Ui {
class gold;
}

class gold : public QDialog
{
    Q_OBJECT

public:
    explicit gold(QWidget *parent = 0);
    ~gold();

private slots:
    void on_pushButton_clicked();

private:
    Ui::gold *ui;
};

#endif // GOLD_H
