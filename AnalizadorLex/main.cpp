#include "mainwindow01.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow01 w;
    w.show();
    return a.exec();
}
