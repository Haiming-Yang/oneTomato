#ifndef KING_H
#define KING_H

#include <QDialog>

namespace Ui {
class king;
}

class king : public QDialog
{
    Q_OBJECT

public:
    explicit king(QWidget *parent = 0);
    ~king();

private slots:
    void on_pushButton_clicked();

private:
    Ui::king *ui;
};

#endif // KING_H
