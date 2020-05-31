#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int i=0;
    QString simb;
    int polje[3][3]={{2,2,2},
                     {2,2,2},
                     {2,2,2}};
    bool play=true;
    int winnerx=0, winnery=0;
    std::ofstream inx;
    std::ofstream iny;

    std::ifstream outx;
    std::ifstream outy;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void whowon();

    void updatescore();
private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_actionReset_triggered();

    void on_actionClose_triggered();

    void on_actionSave_triggered();

    void on_actionLast_Play_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
