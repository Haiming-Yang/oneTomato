#ifndef PT_H
#define PT_H

#include <QDialog>

namespace Ui {
class pt;
}

class pt : public QDialog
{
    Q_OBJECT

public:
    explicit pt(QWidget *parent = 0);
    ~pt();

private slots:
    void on_pushButton_clicked();

private:
    Ui::pt *ui;
};

#endif // PT_H
