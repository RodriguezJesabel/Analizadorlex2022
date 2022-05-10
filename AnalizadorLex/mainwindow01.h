#ifndef MAINWINDOW01_H
#define MAINWINDOW01_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
class MainWindow01 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow01(QWidget *parent = nullptr);
    ~MainWindow01();

private:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_btnAnaliza_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW01_H
