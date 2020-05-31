#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(i%2==0){
        simb="X";
        polje[0][0]=1;
    }
    else{
        simb="O";
        polje[0][0]=0;
    }
    ui->label_2->setText(simb);
    ui->pushButton->hide();
    i++;
}

void MainWindow::on_pushButton_2_clicked()
{
    if(i%2==0){
        simb="X";
        polje[0][1]=1;
    }
    else{
        simb="O";
        polje[0][1]=0;
    }
    ui->label_3->setText(simb);
    ui->pushButton_2->hide();
    i++;
}

void MainWindow::on_pushButton_3_clicked()
{
    if(i%2==0){
        simb="X";
        polje[0][2]=1;
    }
    else{
        simb="O";
        polje[0][2]=0;
    }
    ui->label_4->setText(simb);
    ui->pushButton_3->hide();
    i++;
}

void MainWindow::on_pushButton_4_clicked()
{
    if(i%2==0){
        simb="X";
        polje[1][0]=1;
    }
    else{
        simb="O";
        polje[1][0]=0;
    }
    ui->label_5->setText(simb);
    ui->pushButton_4->hide();
    i++;
}

void MainWindow::on_pushButton_5_clicked()
{
    if(i%2==0){
        simb="X";
        polje[1][1]=1;
    }
    else{
        simb="O";
        polje[1][1]=0;
    }
    ui->label_6->setText(simb);
    ui->pushButton_5->hide();
    i++;
}

void MainWindow::on_pushButton_6_clicked()
{
    if(i%2==0){
        simb="X";
        polje[1][2]=1;
    }
    else{
        simb="O";
        polje[1][2]=0;
    }
    ui->label_7->setText(simb);
    ui->pushButton_6->hide();
    i++;
}

void MainWindow::on_pushButton_7_clicked()
{
    if(i%2==0){
        simb="X";
        polje[2][0]=1;
    }
    else{
        simb="O";
        polje[2][0]=0;
    }
    ui->label_8->setText(simb);
    ui->pushButton_7->hide();
    i++;
}

void MainWindow::on_pushButton_8_clicked()
{
    if(i%2==0){
        simb="X";
        polje[2][1]=1;
    }
    else{
        simb="O";
        polje[2][1]=0;
    }
    ui->label_9->setText(simb);
    ui->pushButton_8->hide();
    i++;
}

void MainWindow::on_pushButton_9_clicked()
{
    if(i%2==0){
        simb="X";
        polje[2][2]=1;
    }
    else{
        simb="O";
        polje[2][2]=0;
    }
    ui->label_10->setText(simb);
    ui->pushButton_9->hide();
    i++;
}
