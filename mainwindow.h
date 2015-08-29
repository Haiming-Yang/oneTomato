#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QTimer>
#include <QCloseEvent>
#include <QSystemTrayIcon>
#include "set.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

  //int red;


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_startwork_clicked();

    void on_stoptimer_clicked();

    void on_startrest_clicked();

    void tick();


    void tick_rest();
    void on_info_clicked();

public slots:
   void red_show(int);

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QTimer *timer2;
    int count1;
    int count2;
    set * configDlg;
    // bool restOrNot;


};

#endif // MAINWINDOW_H
