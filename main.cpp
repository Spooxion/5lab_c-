#include "mainwindow.h"
#include "bird.h"
#include "domestic.h"
#include "wild.h"
#include <QApplication>
#include  <QTableWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
