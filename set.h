#ifndef SET_H
#define SET_H

#include <QDialog>


namespace Ui {
class set;
}

class set : public QDialog
{
    Q_OBJECT

public:
    explicit set(QWidget *parent = 0);
    ~set();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::set *ui;
};

#endif // SET_H
