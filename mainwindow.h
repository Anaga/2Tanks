#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
   void on_dialQ1In_valueChanged(int value);

   void on_dialQ2In_valueChanged(int value);

   void on_pushButton_Q1Out_clicked(bool checked);

   void on_pushButton_Q2Out_clicked(bool checked);

   void on_pushButton_Q3_clicked(bool checked);

   void update();

   void updateT1(float);
   void updateT2(float);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
