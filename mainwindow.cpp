#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qfiledialog.h>
#include <qmessagebox.h>
#include "cvtool.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadImage(QString(QDir::currentPath() + "\\data\\a_complete.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loadButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QDir::currentPath(), tr("PNG (*.png);;All files (*.*)" ));
    loadImage(fileName);
}


void MainWindow::loadImage(QString fileName)
{
    if (fileName.isEmpty())
        return;
    QImage image(fileName);

    if (!image.isNull())
    {
        ui->firstImage->setPixmap(QPixmap::fromImage(image));
        ui->firstImage->setMinimumSize(image.width(), image.height());
    }
    else
    {
        QMessageBox::critical(NULL, "Error", "Cannot load this Image:" + fileName, QMessageBox::Ok, QMessageBox::Ok);
    }
}

void MainWindow::on_detectButton_clicked()
{
    CVTool tool;
    if (ui->siftButton->isChecked())
    {
        tool.detectFeatureSIFT();
    }
    else if (ui->surfButton->isChecked())
    {
        tool.detectFeatureSURF();
    }
    else if (ui->mserButton->isChecked())
    {
        tool.detectFeatureMSER();
    }
    else if (ui->harrisButton->isChecked())
    {
        tool.detectFeatureHaris();
    }
    else
    {
        QMessageBox::warning(NULL, "No detector selected", "Please select a detector", QMessageBox::Ok, QMessageBox::Ok);
    }
}
