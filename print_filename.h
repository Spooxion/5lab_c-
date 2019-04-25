#ifndef PRINT_FILENAME_H
#define PRINT_FILENAME_H

#include <QMainWindow>
#include <fstream>
#include <QString>
#include <bird.h>
#include <wild.h>
#include <domestic.h>

namespace Ui {
class print_filename;
}

class print_filename : public QMainWindow
{
    Q_OBJECT

public:
    explicit print_filename(QWidget *parent = nullptr, Bird *array1[50] = nullptr, Bird *array2[50] = nullptr);
    ~print_filename();



    int c1;
    int c2;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    QString name;
    Bird **array1;
    Bird **array2;

    Ui::print_filename *ui;
};

#endif // PRINT_FILENAME_H
