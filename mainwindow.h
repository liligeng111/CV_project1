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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_loadButton_clicked();

    void on_detectButton_clicked();

private:
    Ui::MainWindow *ui;

    void loadImage(QString);
};

#endif // MAINWINDOW_H
