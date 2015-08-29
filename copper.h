#ifndef COPPER_H
#define COPPER_H

#include <QDialog>

namespace Ui {
class copper;
}

class copper : public QDialog
{
    Q_OBJECT

public:
    explicit copper(QWidget *parent = 0);
    ~copper();

private:
    Ui::copper *ui;
};

#endif // COPPER_H
