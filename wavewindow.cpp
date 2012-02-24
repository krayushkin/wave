#include "wavewindow.h"
#include "ui_wavewindow.h"

WaveWindow::WaveWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WaveWindow)
{
    ui->setupUi(this);
}

WaveWindow::~WaveWindow()
{
    delete ui;
}
