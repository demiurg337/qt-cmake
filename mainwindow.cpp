#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QAction>

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
    ui->chatMessages->append("<b>dddddd</b>");
}

void MainWindow::on_addNewFriend_triggered()
{
    qDebug() << "TTTTTTTT";
    ui->chatMessages->append("<b>dddddd</b>");
}

MainWindow::~MainWindow()
{
    delete ui;
}

