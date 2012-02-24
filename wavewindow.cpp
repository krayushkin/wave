#include "wavewindow.h"
#include "ui_wavewindow.h"

WaveWindow::WaveWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WaveWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->cont_button, SIGNAL(clicked()), SIGNAL(continueButtonClicked()));
    QObject::connect(ui->end_entering_button, SIGNAL(clicked()), SIGNAL(endEnteringObstaclesButtonClicked()));
    QObject::connect(ui->clear_button, SIGNAL(clicked()), SIGNAL(clearButtonClicked()));

    QObject::connect(ui->exitButton, SIGNAL(clicked()), SLOT(close()));
}

WaveWindow::~WaveWindow()
{
    delete ui;
}
