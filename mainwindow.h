#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QMessageBox>
#include <iostream>


#include <QLineEdit>
#include <QMenu>
#include <QMainWindow>
#include <QFile>

#include "print_filename.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void Save();

    void on_tableWidget_2_cellPressed(int row, int column);

    void on_tableWidget_cellPressed(int row, int column);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_action_save_triggered();

    void on_action_save_as_triggered();

    void on_action_open_triggered();

    void on_action_close_triggered();

private:
    Bird* bird1[50];
    Bird* bird2[50];



    QStringList columns1;
    QStringList rows1;
    QStringList columns2;
    QStringList rows2;
    int counter1 = 0;
    int counter2 = 0;


    int chosed_column1;
    int chosed_row1;
    int chosed_column2;
    int chosed_row2;


    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
