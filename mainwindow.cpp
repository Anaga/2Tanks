#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tank.h"
#include <QTimer>
#include <QLCDNumber>

static Tank *pTank1 ;
    QString QsTemp;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QsTemp = "Input flow %1 mil/sec";
    QsTemp = QsTemp.arg(0,3);
    ui->label_G1In->setText(QsTemp);
    ui->label_G2In->setText(QsTemp);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(100);
    pTank1 = new Tank(this);

    connect(timer, SIGNAL (timeout()), pTank1, SLOT(tik()));
    connect(pTank1, SIGNAL(t1_HeightChange(float)),this, SLOT(updateT1(float)));
    connect(pTank1, SIGNAL(t2_HeightChange(float)),this, SLOT(updateT2(float)));
    connect(pTank1, SIGNAL (t1_Output_Flow_1(float)),this,SLOT(updateT1Flow1(float)));
    connect(pTank1, SIGNAL (t1_Output_Flow_2(float)),this,SLOT(updateT1Flow2(float)));
    connect(pTank1, SIGNAL (t2_Output_Flow_1(float)),this,SLOT(updateT2Flow1(float)));
    connect(pTank1, SIGNAL (t2_Output_Flow_2(float)),this,SLOT(updateT2Flow2(float)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_dialQ1In_valueChanged(int value)
{
    pTank1->set_T1_InputFlow(value*MAX_FLOW);
    QsTemp = "Input flow %1 mil/sec";
    QsTemp = QsTemp.arg(value,3);
    ui->label_G1In->setText(QsTemp);
}

void MainWindow::on_dialQ2In_valueChanged(int value)
{
    pTank1->set_T2_InputFlow(value*MAX_FLOW);
    QsTemp = "Input flow %1 mil/sec";
    QsTemp = QsTemp.arg(value,3);
    ui->label_G2In->setText(QsTemp);
}

void MainWindow::on_pushButton_Q1Out_clicked(bool checked)
{
   pTank1->set_T1_OutputValve(checked);
}

void MainWindow::on_pushButton_Q2Out_clicked(bool checked)
{
   pTank1->set_T2_OutputValve(checked);
}

void MainWindow::on_pushButton_Q3_clicked(bool checked)
{
   pTank1->set_T12_OutputValve(checked);
}

void MainWindow::update()
{

}

void MainWindow::updateT1(float height1)
{
   float h = height1;
   h= h*1000;

   ui->progressBar1->setValue((int)h);

}

void MainWindow::updateT2(float height2)
{
   float h = height2;
   h= h*1000;
   ui->progressBar2->setValue((int)h);
}

void MainWindow::updateT1Flow1(float f)
{
   QsTemp = "Output flow\n%1 mil/sec";
   QsTemp = QsTemp.arg(f,3);
   ui->label_G1Out->setText(QsTemp);
}

void MainWindow::updateT1Flow2(float f)
{
   QsTemp = "Input / Output flow\n%1 mil/sec";
   QsTemp = QsTemp.arg(f,3);
   ui->label_G3a->setText(QsTemp);
}

void MainWindow::updateT2Flow1(float f)
{
   QsTemp = "Output flow\n%1 mil/sec";
   QsTemp = QsTemp.arg(f,3);
   ui->label_G2Out->setText(QsTemp);
}

void MainWindow::updateT2Flow2(float f)
{
   QsTemp = "Input / Output flow\n%1 mil/sec";
   QsTemp = QsTemp.arg(f,3);
   ui->label_G3b->setText(QsTemp);
}

void MainWindow::on_pushButton_Exit_clicked()
{
    MainWindow::close();
}
