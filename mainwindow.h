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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void sendMsg();

private slots:
    void on_addNewFriend_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
