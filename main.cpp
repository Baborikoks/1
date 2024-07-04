#include <QApplication>
#include "mainwindow.h"

 // Баборико Карина 6 группа
 // Задание 1 по учебной практике 

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
