#include "print_filename.h"
#include "ui_print_filename.h"

print_filename::print_filename(QWidget *parent, Bird *array1[50], Bird *array2[50]) :
    QMainWindow(parent),
    array1(array1),
    array2(array2),
    ui(new Ui::print_filename)
{
    ui->setupUi(this);
}

print_filename::~print_filename()
{
    delete ui;
}

void print_filename::on_pushButton_clicked()
{
    name = ui->lineEdit->text();
    std::ofstream out;
    out.open(name.toStdString().c_str(), std::ios::trunc);

    if(out.is_open())
    {
        for(int i = 0; i < c1; ++i)
        {
            out << *array1[i]->getAge().toStdString().c_str() << std::endl;
            out << *array1[i]->getAge().toStdString().c_str() << std::endl;
            out << *array1[i]->getAge().toStdString().c_str() << std::endl;
            out << *array1[i]->getAge().toStdString().c_str() << std::endl;
        }


    }
    out.close();

    this->close();
}

void print_filename::on_pushButton_2_clicked()
{
    this->close();
}
