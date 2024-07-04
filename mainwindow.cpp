#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "number.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->determineButton, &QPushButton::clicked, this, &MainWindow::determinePowersOfTwo);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::determinePowersOfTwo()
{
    int number = ui->numberSpinBox->value();
    Number num(number);
    auto bounds = num.findPowerOfTwoBounds();
    ui->resultLabel->setText(QString("Число %1 расположено между 2^%2 и 2^%3")
                                 .arg(number)
                                 .arg(bounds.first)
                                 .arg(bounds.second));
}
