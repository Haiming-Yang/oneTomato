#ifndef SLIVER_H
#define SLIVER_H

#include <QDialog>

namespace Ui {
class sliver;
}

class sliver : public QDialog
{
    Q_OBJECT

public:
    explicit sliver(QWidget *parent = 0);
    ~sliver();

private slots:
    void on_pushButton_clicked();

private:
    Ui::sliver *ui;
};

#endif // SLIVER_H
