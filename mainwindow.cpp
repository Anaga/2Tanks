#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tank.h"
#include <QTimer>
#include <QLCDNumber>

static Tank *pTank1 ;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(100);
    pTank1 = new Tank(this);

//    pTank1->set_T12_OutputValve(OPEN);
//    pTank1->set_T1_OutputValve(OPEN);
//    pTank1->set_T2_OutputValve(OPEN);

    connect(timer, SIGNAL (timeout()), pTank1, SLOT(tik()));

    connect(pTank1, SIGNAL(t1_HeightChange(float)),this, SLOT(updateT1(float)));

    connect(pTank1, SIGNAL(t2_HeightChange(float)),this, SLOT(updateT2(float)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_dialQ1In_valueChanged(int value)
{
    pTank1->set_T1_InputFlow(value*MAX_FLOW);
}

void MainWindow::on_dialQ2In_valueChanged(int value)
{
    pTank1->set_T2_InputFlow(value*MAX_FLOW);
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
//   ui->progressBar1->setValue(pTank1->getHeight());
//   ui->label_G1Out->setText(QString::number(pTank1->getGate2Flow()));

//   ui->progressBar2->setValue(pTank2->getHeight());
//   ui->label_G2Out->setText(QString::number(pTank2->getGate2Flow()));

//   ui->label_G3a->setText(QString::number(pTank1->getGate3Flow()));
//   ui->label_G3b->setText(QString::number(pTank2->getGate3Flow()));
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
