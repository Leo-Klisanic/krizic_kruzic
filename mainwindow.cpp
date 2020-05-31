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


void MainWindow::whowon()
{
    ///////////////////////////////////////////////////////////// X pobjedio /////////////////////////////////////////////////////
    if(polje[0][0]==1 && polje[0][1]==1 && polje[0][2]==1){
        ui->labelwon->setText("X won");
        winnerx++;
        play=false;
    }
    else if(polje[0][0]==1 && polje[1][0]==1 && polje[2][0]==1){
        ui->labelwon->setText("X won");
        winnerx++;
        play=false;
    }
    else if(polje[0][0]==1 && polje[1][1]==1 && polje[2][2]==1){
        ui->labelwon->setText("X won");
        winnerx++;
        play=false;
    }
    else if(polje[0][1]==1 && polje[1][1]==1 && polje[2][1]==1){
        ui->labelwon->setText("X won");
        winnerx++;
        play=false;
    }
    else if(polje[0][2]==1 && polje[1][2]==1 && polje[2][2]==1){
        ui->labelwon->setText("X won");
        winnerx++;
        play=false;
    }
    else if(polje[1][0]==1 && polje[1][1]==1 && polje[1][2]==1){
        ui->labelwon->setText("X won");
        winnerx++;
        play=false;
    }
    else if(polje[2][0]==1 && polje[2][1]==1 && polje[2][2]==1){
        ui->labelwon->setText("X won");
        winnerx++;
        play=false;
    }
    else if(polje[0][2]==1 && polje[1][1]==1 && polje[2][0]==1){
        ui->labelwon->setText("X won");
        winnerx++;
        play=false;
    }

   ////////////////////////////////////////////////////////////// O pobjedio ///////////////////////////////////////////////////
    else if(polje[0][0]==0 && polje[0][1]==0 && polje[0][2]==0){
        ui->labelwon->setText("O won");
        winnery++;
        play=false;
    }
    else if(polje[0][0]==0 && polje[1][0]==0 && polje[2][0]==0){
        ui->labelwon->setText("O won");
        winnery++;
        play=false;
    }
    else if(polje[0][0]==0 && polje[1][1]==0 && polje[2][2]==0){
        ui->labelwon->setText("O won");
        winnery++;
        play=false;
    }
    else if(polje[0][1]==0 && polje[1][1]==0 && polje[2][1]==0){
        ui->labelwon->setText("O won");
        winnery++;
        play=false;
    }
    else if(polje[0][2]==0 && polje[1][2]==0 && polje[2][2]==0){
        ui->labelwon->setText("O won");
        winnery++;
        play=false;
    }
    else if(polje[1][0]==0 && polje[1][1]==0 && polje[1][2]==0){
        ui->labelwon->setText("O won");
        winnery++;
        play=false;
    }
    else if(polje[2][0]==0 && polje[2][1]==0 && polje[2][2]==0){
        ui->labelwon->setText("O won");
        winnery++;
        play=false;
    }
    else if(polje[0][2]==0 && polje[1][1]==0 && polje[2][0]==0){
        ui->labelwon->setText("O won");
        winnery++;
        play=false;
    }
    else if(i==9){
        ui->labelwon->setText("Tie");
        play=false;
         }
    updatescore();
}

void MainWindow::updatescore()
{
    ui->label->setText("X: ");
    ui->labelx->setNum(winnerx);
    ui->label_11->setText("O: ");
    ui->labelo->setNum(winnery);
}

void MainWindow::on_pushButton_clicked()
{
    if(play==true){
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
    whowon();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(play==true){
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
    whowon();
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if(play==true){
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
    whowon();
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if(play==true){
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
    whowon();
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if(play==true){
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
    whowon();
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    if(play==true){
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
    whowon();
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    if(play==true){
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
    whowon();
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    if(play==true){
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
    whowon();
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    if(play==true){
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
    whowon();
    }
}

void MainWindow::on_actionReset_triggered()
{
    for(int w=0;w<3;w++){
        for(int h=0;h<3;h++){
            polje[w][h]=2;
        }
    }
    i=0;
    ui->label_2->setText(" ");
    ui->label_3->setText(" ");
    ui->label_4->setText(" ");
    ui->label_5->setText(" ");
    ui->label_6->setText(" ");
    ui->label_7->setText(" ");
    ui->label_8->setText(" ");
    ui->label_9->setText(" ");
    ui->label_10->setText(" ");
    ui->pushButton->show();
    ui->pushButton_2->show();
    ui->pushButton_3->show();
    ui->pushButton_4->show();
    ui->pushButton_5->show();
    ui->pushButton_6->show();
    ui->pushButton_7->show();
    ui->pushButton_8->show();
    ui->pushButton_9->show();
    ui->labelwon->setText(" ");
    play=true;
}

void MainWindow::on_actionClose_triggered()
{
    qApp->exit();
}
