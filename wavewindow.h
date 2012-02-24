#ifndef WAVEWINDOW_H
#define WAVEWINDOW_H

#include <QMainWindow>

namespace Ui {
class WaveWindow;
}

class WaveWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit WaveWindow(QWidget *parent = 0);
    ~WaveWindow();


    // buttons
    void showEndEnteringObstaclesButton();
    void deleteEndEnteringButton();
    void showClearAndContinueButtons();
    void deleteClearAndContinueButtons();

    // hint string
    void showHint(QString hint);

signals:
    void endEnteringObstaclesButtonClicked();
    void clearButtonClicked();
    void continueButtonClicked();




    
private:
    Ui::WaveWindow *ui;
};

#endif // WAVEWINDOW_H
