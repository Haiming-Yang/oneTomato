#ifndef DIAMOND_H
#define DIAMOND_H

#include <QDialog>

namespace Ui {
class diamond;
}

class diamond : public QDialog
{
    Q_OBJECT

public:
    explicit diamond(QWidget *parent = 0);
    ~diamond();

private:
    Ui::diamond *ui;
};

#endif // DIAMOND_H
