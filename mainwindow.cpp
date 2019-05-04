#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->sendMsgButton, &QPushButton::clicked, this, &MainWindow::sendMsg);
}

void MainWindow::sendMsg()
{
    qDebug() << "TTTTTTTT";
    ui->chatMessages->append("ffff");
}

MainWindow::~MainWindow()
{
    delete ui;
}
